#include <iostream>
#include <vector>

using namespace std;

const int FILAS = 10;
const int COLUMNAS = 10;
const int LIBRE = 0;
const int EDIFICIO = 1;

vector<vector<int>> mapa = {
    {0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
    {0, 1, 1, 0, 1, 0, 1, 1, 1, 0},
    {0, 0, 0, 0, 1, 0, 0, 0, 1, 0},
    {1, 1, 0, 1, 1, 1, 0, 1, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
    {0, 1, 1, 1, 1, 1, 0, 1, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
    {1, 1, 1, 1, 1, 1, 0, 1, 1, 0},
    {0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 1, 1, 0}
};

// Esta funcion es un guardia de seguridad
// Verifica si puede moverte a una direccion

bool esValido(int x, int y) {
    // Esta dentro del mapa?
    bool dentroDelMapa = (x >= 0 && x < FILAS && y >= 0 && y < COLUMNAS);

    // Es un camino libre?
    bool esLibre = false;
    if (dentroDelMapa) {
        esLibre = (mapa[x][y] == LIBRE);
    }

    return dentroDelMapa && esLibre

}

int main () {
    cout << "=== PROBANDO SI PODEMOS MOVERNOS A DIFERENTES POSICIONES ===" << endl;

    // Vamos a probar diferentes posiciones
    vector<pair<int, int>> posiciones = {
        {0, 0},   // Esquina superior izquierda
        {0, 2},   // Un edificio
        {4, 4},   // Centro del mapa
        {-1, 5},  // Fuera del mapa (arriba)
        {5, 15},  // Fuera del mapa (derecha)
        {9, 9}    // Esquina inferior derecha
    };

    for (auto pos : posiciones) {
        int x = pos.first;
        int y = pos.second;

        cout << "Posicion (" << x << ", " << y << "): ";

        if (esValido(x, y)) {
            cout << "Si puede moverte aqui" << endl; 
        } else {
            cout << "No puedes moverte aqui" << endl;

            // Explicamos por que no puede
            if (x < 0 || x >= FILAS ||)
        }
    }
}

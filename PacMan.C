#include <stdio.h>
#include <stdlib.h>

void generarLaberinto(int ancho, int alto) {
    int laberinto[alto][ancho];  // Matriz para el laberinto

    // Llenamos el laberinto con paredes (1 en los bordes) y espacios (0 en el interior)
    for (int i = 0; i < alto; i++) {
        for (int j = 0; j < ancho; j++) {
            if (i == 0 || i == alto - 1 || j == 0 || j == ancho - 1) {
                laberinto[i][j] = 1;  // Borde del laberinto
            } else {
                laberinto[i][j] = 0;  // Interior del laberinto
            }
        }
    }

    // Imprimir el laberinto en la consola
    for (int i = 0; i < alto; i++) {
        for (int j = 0; j < ancho; j++) {
            if (laberinto[i][j] == 1) {
                printf("#");  // Representa paredes con '#'
            } else {
                printf(" ");  // Representa espacios vacíos con ' '
            }
        }
        printf("\n");
    }
}

int main() {
    int ancho = 50;  // Ejemplo de ancho
    int alto = 20;   // Ejemplo de alto

    generarLaberinto(ancho, alto);

    return 0;
}

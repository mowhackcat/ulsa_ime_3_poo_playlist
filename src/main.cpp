// Práctica 1: Playlist de música
// Programación Orientada a Objetos - Ingeniería Mecatrónica, 3er semestre
//
// Compilar (desde la raíz del repositorio):
//   g++ -Wall -Wextra -std=c++17 -Iinclude src/*.cpp -o playlist
// Ejecutar:
//   ./playlist
//
// Completa los TODO en el orden que indica la Fase 3 de PRACTICA.md.
// Compila después de terminar cada clase, no hasta el final.

#include <iostream>

#include "../include/Playlist.h"
#include "../include/Cancion.h"
#include "../include/Podcast.h"



int main() {
    std::cout << "Practica 1: Playlist de musica" << std::endl;
    std::cout << "Plantilla lista. Completa los TODO de include/ y src/." << std::endl;

    // TODO 5.1: crea la biblioteca: al menos tres canciones y un podcast.
Cancion cancion1("PrivateLife", "Rock", "Danny", 3 ,25);
Cancion cancion2("virtualInsanity", "Rock", "Jamiroquai", 4 ,01);
Cancion cancion3("bloodystream", "Rock", "JJBA", 4 ,56);
Podcast podcast1("alfred", 24, "stoneocean", 5, 23 );

Playlist playlist1("playlist1");
playlist1.agregarCancion(&cancion1);
playlist1.agregarPodcast(&podcast1);
playlist1.mostrar();
    // TODO 5.2: crea dos playlists y agrega pistas a cada una.
    //   Al menos una canción debe estar en las dos playlists.

    // TODO 5.3: muestra ambas playlists.

    // TODO 5.4: experimentos guiados de la Fase 3.

    // TODO 5.5: casos de prueba de la Fase 4.

    return 0;
}

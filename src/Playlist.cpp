// Implementación de la clase Playlist.

#include "../include/Playlist.h"//tarde 3 horas en soluciionar un error aqui
#include <iostream>//no se como o por que pero desaparecio por arte de magia

Playlist::Playlist(std::vector<Cancion*> canciones, std::vector<Podcast*> podcasts): nombre(nombre), canciones(canciones), podcasts(podcasts) {}
    

// TODO 4.1: implementa el constructor de Playlist.

// TODO 4.2: implementa  bool Playlist::agregarCancion(Cancion* cancion)
//   Devuelve false si el puntero es nullptr o si la canción ya está en la
//   playlist; en otro caso la agrega y devuelve true.

// TODO 4.3: implementa  bool Playlist::agregarPodcast(Podcast* podcast)
//   Mismas reglas que agregarCancion.

// TODO 4.4: implementa  int Playlist::cantidadPistas() const

// TODO 4.5: implementa  Duracion Playlist::duracionTotal() const
//   Suma los segundos de todas las pistas y devuelve una Duracion.

// TODO 4.6: implementa  void Playlist::mostrar() const
//   Imprime el nombre, cada pista, la cantidad de pistas y la duración total.

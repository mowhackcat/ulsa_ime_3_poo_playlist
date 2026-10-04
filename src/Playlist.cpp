// Implementación de la clase Playlist.

#include "../include/Playlist.h"//tarde 3 horas en soluciionar un error aqui
#include <iostream>//no se como o por que pero desaparecio por arte de magia

Playlist::Playlist(const std::string& nombre): nombre(nombre) {}
bool Playlist::agregarCancion(Cancion* canciones){
     if(canciones  == nullptr){
        return false;
    }
    for(size_t i = 0; i < this->canciones.size(); i ++){
     if(canciones == this->canciones[i]){
return false;
    }
}
    this->canciones.push_back(canciones);
    return true;
}

bool Playlist::agregarPodcast(Podcast* podcasts){
         if(podcasts  == nullptr){
        return false;
    }
 for(size_t x = 0; x < this->podcasts.size(); x ++){
     if(podcasts == this->podcasts[x]){
return false;
    }
}
    this->podcasts.push_back(podcasts);
    return true;

}

int Playlist::cantidadPistas() const{
    return this->canciones.size();
    std::cout <<" canciones\n";
    return this->podcasts.size();
    std::cout <<" podcasts\n";
}

Duracion Playlist::duracionTotal() const {
int total = 0;
    for(size_t i = 0; i < this->canciones.size(); i ++){
total += this->canciones[i]->getDuracion().totalSegundos();
}
 for(size_t  i = 0; i < this->podcasts.size(); i ++){
total += this->podcasts[i]->getDuracion().totalSegundos();
}
int minutos = total / 60;
    int segundos = total % 60;
    return Duracion(minutos, segundos); 
}

void Playlist::mostrar() const{
    cantidadPistas();
     for(size_t  i = 0; i < this->canciones.size(); i ++){
 this->canciones[i]->mostrar();
}
 for(size_t  i = 0; i < this->podcasts.size(); i ++){
this->podcasts[i]->mostrar();
}
this->duracionTotal().imprimir();
}
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

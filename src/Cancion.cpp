// Implementación de la clase Cancion.

#include "Cancion.h"

#include <iostream>
Cancion ::Cancion (const std::string& genero, std::string& artista, std::string& titulo, int& min, int& seg ) : Pista(titulo, min, seg), genero(genero), artista(artista){
}; // TODO 3.1: implementa el constructor de Cancion.
//   Llama al constructor de Pista desde la lista de inicialización.

std::string Cancion:: getArtista() const {return artista;}// TODO 3.1: implementa getArtista() y getGenero().
std::string Cancion:: getGenero() const {return genero;}
// TODO 3.1: implementa  void Cancion::mostrar() const
void Cancion::mostrar() const {
Pista::mostrarInfo() ;
std::cout << getArtista() << ", " << getGenero();
}//   Llama a mostrarInfo() y agrega artista y género.

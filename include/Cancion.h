// Interfaz de la clase Cancion.
// Relación: una Cancion ES UNA Pista (herencia).

#ifndef CANCION_H
#define CANCION_H

#include <string>

#include "Pista.h"

class Cancion : public Pista{
    private:
std::string genero;      // TODO 3.1: declara la clase Cancion derivada de Pista con herencia pública.
std::string artista;      //   Atributos privados: artista, genero.

    public:
    Cancion() {}
Cancion (const std::string& genero, std::string& artista, std::string& titulo, int& min, int& seg );    //   Constructor: recibe titulo, min, seg, artista y genero.
std::string getArtista() const;//   Accedentes const: getArtista(), getGenero().
std::string getGenero() const;
void mostrar() const;//   void mostrar() const;
};
// Pregunta: ¿puede Cancion leer directamente el atributo titulo de Pista?
// ¿Por qué sí o por qué no?

#endif

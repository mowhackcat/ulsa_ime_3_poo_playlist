// Implementación de la clase Podcast.

#include "Podcast.h"

#include <iostream>

Podcast::Podcast(const std::string& anfitrion, int numEpisodios, std::string& titulo, int& min, int& seg ): Pista(titulo, min, seg), anfitrion(anfitrion), numEpisodios(numEpisodios){

};

std::string Podcast::getAnfitrion() const{return anfitrion;}// TODO 3.2: implementa el constructor, los accedentes y mostrar() de Podcast.
int Podcast::getNumEpisodios() const{return numEpisodios;}
void Podcast::mostrar()const {
    Pista::mostrarInfo();
    std::cout << getAnfitrion() << " " << getNumEpisodios() << "\n";
}
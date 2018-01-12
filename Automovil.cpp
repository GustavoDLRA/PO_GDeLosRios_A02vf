//
// Created by gusta on 11/01/2018.
//

#include "Automovil.h"
Automovil::Automovil() {
    this->marca="";
    this->modelo="";
    this->color="";
    this->precio=0;
    this->ocupantes=0;
    this->kilometraje=0;

    }

Automovil::Automovil(std::string marca, std::string modelo, std::string color, float precio, int ocupantes,
                     int kilometraje) {
    this->marca=marca;
    this->modelo=modelo;
    this->color=color;
    this->precio=precio;
    this->ocupantes=ocupantes;
    this->kilometraje=0;

}

void Automovil::avanzar(int km) {
    this->kilometraje = this->kilometraje +km;
}








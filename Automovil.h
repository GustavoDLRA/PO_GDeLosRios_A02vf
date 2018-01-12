//
// Created by gusta on 11/01/2018.
//

#ifndef PO_GDELOSRIOS_A02_AUTOMOVIL_H
#define PO_GDELOSRIOS_A02_AUTOMOVIL_H

#include <iostream>



class Automovil {
    //Atributos
private:
    std::string marca;
    std::string modelo;
    std::string color;
    float precio;
    int ocupantes;
    int kilometraje;

public:
//Métodos
//Constructor
Automovil();
Automovil(std::string marca, std::string modelo, std:: string color, float precio, int ocupantes, int kilometraje);

//Mostrar información
std::string muestraAutomovil();

void avanzar(int km);
//Getters & Setters
void setKilometraje(int kilometraje);
int getKilometraje(int kilometraje);


};


#endif //PO_GDELOSRIOS_A02_AUTOMOVIL_H

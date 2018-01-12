#include <iostream>
#include "Automovil.h"

int main() {
    //Se le piden todos los datos del coche al usuario.
    std::string marca, modelo, color;
    float precio;
    int ocupantes, kilometros;
    std::cout<<"Escribe la marca"<<"\n";
    std::cin>>marca;
    std::cout<<"Escribe el modelo:"<<"\n";
    std::cin>>modelo;
    std::cout<<"Escribe el color:"<<"\n";
    std::cin>>color;
    std::cout<<"Escribe el precio"<<"\n";
    std::cin>>precio;
    std::cout<<"Escribe la cantidad de ocupantes:"<<"\n";
    std::cin>>ocupantes;
    std::cout<<"Escribe la cantidad de Kilometros recorridos:"<<"\n";
    std::cin>>kilometros;

    Automovil elauto = *new Automovil(marca,modelo,color,precio,ocupantes,kilometros); //Aquí tuve que cambiar el nombre a "elauto" pues sino me daba un error.

    elauto.avanzar(1000);










    return 0;


}
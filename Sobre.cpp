//
// Created by Angel González Torres on 23/05/23.
//

#include "Sobre.h"
#include <iostream>

using namespace std;

Sobre::Sobre():Envio(){

    cargo_adicional=0;
}

Sobre::Sobre(double c_add):Envio()
{
cargo_adicional=c_add;

}

void Sobre::setCargoAdicional(double c) {
    cargo_adicional=c;
}

double Sobre::getCargoAdicional() {
    return cargo_adicional;
}

double Sobre::calculaCosto() {

    double ancho=31;
    double largo=31;
    if(largo>25 && ancho>30)
    {
        printf("Se agregará un 10% de cargo adicional");
    }
}
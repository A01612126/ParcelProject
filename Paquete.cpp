//
// Created by Angel González Torres on 23/05/23.
//

#include "Paquete.h"

#include <iostream>

using namespace std;

Paquete::Paquete():Envio()
{
    largo=0;
    ancho=0;
    profundidad=0;
    costo_porkg=0;
}
//sobrecarga
void Paquete::setLargo(float l)
{
    if (l>0)
    {
        largo=l;
    }

}
float Paquete::getLargo()
{
    return largo;
}
void Paquete::setAncho(float a)
{
    if (a>0)
    {
        ancho=a;
    }
}
float Paquete::getAncho()
{
    return ancho;
}

void Paquete::setProfunidad(float p)
{
    if (p>0)
    {
        profundidad=p;
    }
}
float Paquete::getProfundidad()
{
    return profundidad;
}
void Paquete::setCostoKg(float c)
{
    if (c>0)
    {
        costo_porkg=c;
    }
}
float Paquete::getCostoKg()
{
    return costo_porkg;
}
void Paquete::setPeso(float pes)
{
    if (pes>0)
    {
        peso=pes;
    }
}
float Paquete::getPeso()
{
    return peso;
}

double Paquete::calculaCosto()
{
    float precio_base=25;
    double precio_dos;
    precio_dos= (peso*costo_porkg)+ precio_base;
    return precio_dos;
}

Paquete::~Paquete(){

}
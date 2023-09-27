//
// Created by Angel González Torres on 23/05/23.
//

#include "Envio.h"
#include <iostream>

using namespace std;

Envio::Envio()
{
    nombre="";
    direccion="";
    ciudad="";
    estado="";
    cp_remitente="";
    cp_destino="";
    costo_estandar=0;
}

void Envio::setNombre(string nom)
{
    nom=nombre;
}

string Envio::getNombre()
{
    return nombre;
}

void Envio::setDireccion(string direc)
{
    direccion=direc;
}

string Envio::getDireccion()
{
    return direccion;
}

void Envio::setCiudad(string ciudad)
{
    ciudad= ciudad;
}

string Envio::getCiudad()
{
    return ciudad;
}

void Envio::setEstado(string est)
{
    estado=est;
}

string Envio::getEstado()
{
    return estado;
}

void Envio::setCpRemitente(string cprem)
{
    cp_remitente=cprem;
}

string Envio::getCpRemitente()
{
    return cp_remitente;
}

void Envio::setCpDestino(string cpdest)
{
    cp_destino=cpdest;
}

string Envio::getCpDestino()
{
    return cp_destino;
}

void Envio::setCostoEstandar(double costoest)
{
    costo_estandar=costoest;
}

double Envio::getCostoEstandar()
{

    return costo_estandar;
}

double Envio::calculaCosto()
{
   double precio_base;
   precio_base= costo_estandar;
   return precio_base;
}


Envio::~Envio(){

}

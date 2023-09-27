//
// Created by Angel González Torres on 23/05/23.
//

#ifndef UNTITLED1_ENVIO_H
#define UNTITLED1_ENVIO_H


#include <cstring>
#include <iostream>

using namespace std;

class Envio {
private:
    string nombre,direccion,ciudad,estado, cp_remitente,cp_destino;
    double costo_estandar;

public:
    Envio();
    Envio(string n ,string dir,string ciud,string est,string cpr,string cpd, double cost);

    void setNombre(string nom);
    string getNombre();
    void setDireccion(string direc);
    string getDireccion();
    void setCiudad(string ciudad);
    string getCiudad();
    void setEstado(string est);
    string getEstado();
    void setCpRemitente(string cprem);
    string getCpRemitente();
    void setCpDestino(string cpdest);
    string getCpDestino();
    void setCostoEstandar(double costoest);
    double getCostoEstandar();
    double calculaCosto();


    ~Envio();




};


#endif //UNTITLED1_ENVIO_H

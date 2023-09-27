//
// Created by Angel González Torres on 23/05/23.
//

#ifndef UNTITLED1_SOBRE_H
#define UNTITLED1_SOBRE_H
#include "Envio.h"
#include "Paquete.h"

class Sobre:public Envio {
private:

    double cargo_adicional;

public:
    Sobre();
    Sobre(double c_add);
    void setCargoAdicional(double c);
    double getCargoAdicional();
    double calculaCosto();

    ~Sobre();
};


#endif //UNTITLED1_SOBRE_H

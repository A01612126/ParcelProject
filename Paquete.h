//
// Created by Angel González Torres on 23/05/23.
//

#ifndef UNTITLED1_PAQUETE_H
#define UNTITLED1_PAQUETE_H

#include "Envio.h"
class Paquete:public Envio {
private:

    float largo, ancho, profundidad, costo_porkg, peso;

public:
    Paquete();
    Paquete(float lar, float anc, float prof, float cost, float pes);

    void setLargo(float l);
    float getLargo();
    void setAncho(float a);
    float getAncho();
    void setProfunidad(float p);
    float getProfundidad();
    void setCostoKg(float c);
    float getCostoKg();
    double calculaCosto();
    void setPeso(float pes);
    float getPeso();

    ~Paquete();
};


#endif //UNTITLED1_PAQUETE_H

#include <iostream>
#include "Envio.h"
#include "Paquete.h"
#include "Sobre.h"

using namespace std;

int main() {
   Envio envio1("Iñaki" ,"lomas cuarta", "slp", "slp" ,"78214","83122", 20.45);
   envio1.calculaCosto();

   Paquete p1(20.1,20.2,5,10,5);
   p1.calculaCosto();

   Sobre s1(15);
   s1.calculaCosto();


    return 0;
}

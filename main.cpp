#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;

#include "Prototipos.h"
#include "DefinicionFunciones.h"
#include "Puntos.h"


int main()
{

    int opc=1;
    while(opc!=0)
    {

        cout<<"Ejercicios con Ciclos Exactos"<<endl;
        cout<<"***********************"<<endl;
        cout<<"Salir 0:"<<endl;
        cout<<"1: Ejercicio 5"<<endl;
        cout<<"2: Ejercicio 6"<<endl;
        cout<<"3: Ejercicio 7"<<endl;
        cout<<"4: Ejercicio 8"<<endl;
        cout<<"5: Ejercicio 9"<<endl;
        cout<<"6: Ejercicio 10"<<endl;
        cout<<"7: Ejercicio 11"<<endl;
        cout<<"8: Ejercicio 12"<<endl;
        cout<<"9: Ejercicio 13"<<endl;
        cout<<"10: Ejercico 14"<<endl;
        cout<<"11: Ejercico 21"<<endl;
        cout<<"***********************"<<endl;
        cout<<"Opcion:";
        opc=AloNumeroI();

        system("cls");

        PuntoX(opc);





    }



    return 0;
}

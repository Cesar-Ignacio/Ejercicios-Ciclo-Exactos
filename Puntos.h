#ifndef PUNTOS_H_INCLUDED
#define PUNTOS_H_INCLUDED


void Punto_5()
{
   const int num=5;
   float numero;
   Enunciodo_5();
   for(int x=0;x<num;x++)
   {
       cout<<"Ingrese numero:";
       numero=AloNumeroF();
       if(numero>=5)
       {
           cout<<"Numero mayor o igual que 5: "<< num<<endl;
       }
   }

   cin.get();
   cin.get();
   system("cls");
}

void Enunciodo_5()
{
    cout<<"Ejercicio 5"<<endl;
    cout<<"Enunciado:"<<endl;
    cout<<"5) Hacer un programa para que el usuario ingrese por teclado 25 números y que se vayan "<<endl;
    cout<<"nformando uno por uno aquellos que son mayores o iguales a 5. "<<endl;
    cout<<"Atención: Se pide que se informe cuales (y no cuantos) son mayores que 5. "<<endl;
    cout<<"*************************"<<endl;
}


void Punto_6()
{
   const int num=5;
   const float numM=5.2;
   float numero=0;
   int cm=0;
   Enunciodo_6();
   for(int x=0;x<num;x++)
   {
    cout<<"Ingrese numero:";
    numero=AloNumeroF();
    if(numero>=numM)
    {
        cm++;
    }
   }

   cout<<"Cantidad de numeros mayores a "<< numM <<" :"<< cm<<endl;

   cin.get();
   cin.get();
   system("cls");


}

void Enunciodo_6()
{
    cout<<"Ejercicio 5"<<endl;
    cout<<"Enunciado:"<<endl;
    cout<<"6) Hacer un programa para que el usuario ingrese por teclado 25 números y que se informe "<<endl;
    cout<<"uego cuantos de esos 25 son mayores o iguales a 5. "<<endl;
    cout<<"*************************"<<endl;

}

void Punto_7()
{
  const int cnum=5;
  int positivos=0,negativos=0,igualecero=0;
  float numero;

  Enunciodo_7();

  for(int x=0;x<cnum;x++)
  {
      cout<<"Ingrese numero:";
      numero=AloNumeroF();

      if(numero>0)
      {
          positivos++;
      }
      else if(numero<0)
      {
        negativos++;
      }
      else
        {
        igualecero++;
      }
  }

  cout<<"Cantidad de numeros positivos:"<<positivos<<endl;
  cout<<"Cantidad de numeros negativos:"<<negativos<<endl;
  cout<<"Cantidad de numeros iguales a cero:"<<igualecero<<endl;


  cin.get();
  cin.get();

  system("cls");

}

void Enunciodo_7()
{
    cout<<"Ejercicio 7"<<endl;
    cout<<"Enunciado:"<<endl;
    cout<<"7) Hacer un programa para ingresar por teclado una lista de 10 números, luego determinar e "<<endl;
    cout<<"informar cuantos son positivos, cuantos son negativos, y cuantos iguales a cero. "<<endl;
    cout<<"***************************"<<endl;


}


void Punto_8()
{
    const int cnum=5;
    float numero=0,maximo=0;

    Enunciodo_8();

    for(int x=0;x<cnum;x++)
    {
        cout<<"Ingrese numero:";
        numero=AloNumeroF();

        if(x==0)
        {
            maximo=numero;
        }
        else if(numero>=maximo)
        {
            maximo=numero;
        }

    }

    cout<<"Maximo:"<<maximo<<endl;

    cin.get();
    cin.get();
    system("cls");

}


void Enunciodo_8()
{
    cout<<"Ejercicio 8"<<endl;
    cout<<"Enunciado:"<<endl;
    cout<<"8) Hacer un programa para ingresar por teclado 20 números, luego determinar e informar el "<<endl;
    cout<<"máximo. Suponer que los valores de la lista son todos positivos. "<<endl;
    cout<<"*********************************"<<endl;

}


void Punto_9()
{
    const int num=5;
    Enunciodo_9();
    float numero=0,maxi=0;
    int pos=0;
    for(int x=0;x<num;x++)
    {
        cout<<"INgrese numerp:";
        numero=AloNumeroF();

        if(x==1)
        {
            maxi=numero;
            pos=x+1;
        }
        else if(numero>maxi)
        {
            maxi=numero;
            pos=x+1;
        }

    }

    cout<<"Maximo:"<< maxi<<endl;
    cout<<"Posicion:"<<pos<<endl;

    cout<<"************************"<<endl;
    cin.get();
    cin.get();

    system("cls");

}


void Enunciodo_9()
{
    cout<<"Ejercicio 8"<<endl;
    cout<<"Enunciado:"<<endl;
    cout<<"9) Hacer un programa para ingresar por teclado 10 números enteros, luego determinar e "<<endl;
    cout<<"informar el máximo y su posición. Suponer que los valores de la lista pueden ser todos "<<endl;
    cout<<"positivos, todos negativos, ceros , o cualquier combinacion"<<endl;
    cout<<"************************"<<endl;



}


void Punto_10()
{

  int cnum=5;
  float numero,maximo,minimo;

  Enunciodo_10();

  for(int x=0;x<cnum;x++)
  {
      cout<<"Ingrese numero:";
      numero=AloNumeroF();

      if(x==0)
      {
          maximo=numero;
          minimo=numero;
      }
      else
      {
        if(numero>maximo)
        {
            maximo=numero;
        }
        if(numero<minimo)
        {
            minimo=numero;
        }
      }

  }

  cout<<"Maximo: " << maximo<<endl;
  cout<<"Minimo: " <<minimo<<endl;

  cin.get();
  cin.get();
  system("cls");


}

void Enunciodo_10()
{
    cout<<"Ejercicio 10"<<endl;
    cout<<"Enunciado:"<<endl;
    cout<<"10) Hacer un programa para ingresar por teclado 20 números, luego determinar e informar el "<<endl;
    cout<<"máximo y el mínimo. Suponer que los valores de la lista pueden ser todos positivos, todos "<<endl;
    cout<<"negativos, ceros, o cualquier combinación. "<<endl;
    cout<<"************************"<<endl;

}



void Punto_11()
{


    int cnum=10,cnegativos=0,cpositivos=0;
    float numero=0,maxnegativo=0,minpositivo=0;

    Enunciodo_11();
    for(int x=0;x<cnum;x++)
    {
        cout<<"Ingrese numero:";
        numero=AloNumeroF();
        MenoryMayor(numero,&cnegativos,&cpositivos,&maxnegativo,&minpositivo);

    }

    cout<<"Maximo negativo:"<< maxnegativo<<endl;
    cout<<"Minimo positivo:"<< minpositivo<<endl;
    cin.get();
    cin.get();
    system("cls");


}
void Enunciodo_11()
{
    cout<<"Ejercicio 11"<<endl;
    cout<<"Enunciado:"<<endl;
    cout<<"11) Hacer un programa para ingresar por teclado 20 números, luego determinar e informar el "<<endl;
    cout<<"máximo de los negativos y el mínimo de los positivos. Resolverlo de dos maneras:"<<endl;

    cout<<"*************************"<<endl;
}


void Punto_12()
{
    int cnumeros=0,cpositivos=0;
    float numero=0;

    Enunciodo_12();

    cout<<"Cantidad de numeros:";
    cnumeros=AloNumeroI();



    for(int x=0;x<cnumeros;x++)
    {
        cout<<"Ingrese numero:";
        numero=AloNumeroF();
        if(numero>0)
        {
            cpositivos++;
        }


    }

    cout<<"Cantidad de positivos:"<< cpositivos<<endl;

    cin.get();
    cin.get();
    system("cls");

}
void Enunciodo_12()
{
    cout<<"Ejercicio 12"<<endl;
    cout<<"Enunciado:"<<endl;
    cout<<"12) Hacer un programa para ingresar un valor que indica la cantidad de números que "<<endl;
    cout<<"componen una lista y luego solicitar se ingresen esos N números. Se pide informar cuantos "<<endl;
    cout<<"son positivos. "<<endl;
    cout<<"**********************"<<endl;
}


void Punto_13()
{

    int cnumeros=5;
    float numero=0,mprimero=0,msegundo=0;

    Enunciodo_13();

    for(int x=0;x<cnumeros;x++)
    {
        cout<<"Ingrese numero:";
        numero=AloNumeroF();
        PrimerySegundoMax(x,numero,&mprimero,&msegundo);

    }

    cout<<"Primer max:"<< mprimero<<endl;
    cout<<"Segundo max:"<< msegundo<<endl;
    cin.get();
    cin.get();
    system("cls");

}
void Enunciodo_13()
{
    cout<<"Ejercicio 12"<<endl;
    cout<<"Enunciado:"<<endl;
    cout<<"13) Hacer un programa para ingresar 5 números, luego informar los 2 mayores valores "<<endl;
    cout<<"ingresados, aclarando cual es el máximo y cual el que le sigue. "<<endl;
    cout<<"Por ejemplo si la lista ingresada es 10, 8 ,12, 14 ,3 el resultado será 14 y 12. "<<endl;
    cout<<"Atención: si la lista ingresada es 14, 8 ,12, 14 ,3 el resultado será 14 y 14. "<<endl;
    cout<<"Resolverlo de dos maneras: "<<endl;
    cout<<"*************************"<<endl;
}

void Punto_14()
{
    int numero=0;
    int cd=0;

    Enunciodo_14();


    cout<<"Ingrese numero:";

    numero=AloNumeroI();

    cd=NumeroPrimo(numero);

    if(cd==2)
    {
        cout<<"Numero primo"<<endl;
    }
    else
    {
        cout<<"No es un numero primo"<<endl;
    }


    cin.get();
    cin.get();
    system("cls");

}
void Enunciodo_14()
{
    cout<<"Ejercicio 12"<<endl;
    cout<<"Enunciado:"<<endl;
    cout<<"14) Hacer un programa para ingresar por teclado un número superior o igual a 1 y luego "<<endl;
    cout<<"informar si el mismo es un número primo. "<<endl;
    cout<<"**************************"<<endl;

}

void Punto_21()
{
    int cnumero=10,ppdf5=0;
    float numero=0,numanterio=0,diferencia=0;

    Enunciodo_21();

    for(int x=0;x<cnumero;x++)
    {
        numanterio=numero;

        cout<<"Ingrese numero:";
        numero=AloNumeroF();

        if(Positivos(numanterio,numero))
        {
            ppdf5++;
        }


    }


    cout<<"Cantidad de parejas que cumplen la condicion:"<<ppdf5<<endl;

    cin.get();
    cin.get();
    system("cls");


}

void Enunciodo_21()
{
    cout<<"Ejercicio 21"<<endl;
    cout<<"Enunciado:"<<endl;
    cout<<"21) Hacer un programa para ingresar por teclado una lista de 10 números. Se pide contar e "<<endl;
    cout<<"informar la cantidad de pares positivos consecutivos cuya diferencia absoluta sea mayor que 5. "<<endl;
    cout<<"Ejemplo: "<<endl;
    cout<<"12, -3, 4, 16, 8, -3, -5, 8, 10, 16 "<<endl;
    cout<<"En esta lista existen 3 pares que cumplen esa condición: (4-16) (16-8) (10-16), por lo tanto el "<<endl;
    cout<<"programa emitirá un 3 como resultado. "<<endl;
    cout<<"******************************"<<endl;

}

#endif // PUNTOS_H_INCLUDED

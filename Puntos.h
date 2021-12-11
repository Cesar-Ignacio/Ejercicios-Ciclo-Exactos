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

#endif // PUNTOS_H_INCLUDED

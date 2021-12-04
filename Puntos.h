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


#endif // PUNTOS_H_INCLUDED

#ifndef DEFINICIONFUNCIONES_H_INCLUDED
#define DEFINICIONFUNCIONES_H_INCLUDED


void PuntoX(int punto)
{
 if(punto==1 )
 {
   Punto_5();
 }
 if(punto==2 )
 {
    Punto_6();
 }
 if(punto==3 || punto==7)
 {
     Punto_7();
 }
 if(punto==4 || punto==8)
 {
     Punto_8();
 }
 if(punto==5 || punto==9)
 {
     Punto_9();
 }
 if(punto==6 )
 {
     Punto_10();
 }

}


///Calculos
int AloNumeroI()
{
    char numero[10];
    int nul,x,cc=1;
    int valor=0;

    while(cc!=0)
    {
        cin>>numero;
        nul=1;
        x=0;
        cc=0;
        while(nul!=0)
        {
          if(numero[x]=='\0')
          {
            nul=0;
          }
          else if(((int)numero[x]<48 || (int)numero[x]>59) && (int)numero[x]!=46 && (int)numero[x]!=45)
          {
            cc++;
          }
          x++;
        }
    }
     valor=atoi(numero);
    return valor;
}

float AloNumeroF()
{
     char numero[10];
    int nul,x,cc=1;
    float valor=0;

    while(cc!=0)
    {
        cin>>numero;
        nul=1;
        x=0;
        cc=0;
        while(nul!=0)
        {
          if(numero[x]=='\0')
          {
            nul=0;
          }
          else if(((int)numero[x]<48 || (int)numero[x]>59) && (int)numero[x]!=46 && (int)numero[x]!=45 )
          {
            cc++;
          }
          x++;
        }
    }
     valor=atof(numero);
    return valor;
}


#endif // DEFINICIONFUNCIONES_H_INCLUDED

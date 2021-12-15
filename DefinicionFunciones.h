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
 if(punto==3)
 {
     Punto_7();
 }
 if(punto==4)
 {
     Punto_8();
 }
 if(punto==5)
 {
     Punto_9();
 }
 if(punto==6 )
 {
     Punto_10();
 }
 if(punto==7)
 {
     Punto_11();
 }
 if(punto==8)
 {
     Punto_12();
 }
 if(punto==9)
 {
     Punto_13();
 }
 if(punto==10)
 {
     Punto_14();
 }
 if(punto==11)
 {
     Punto_21();
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

void MenoryMayor(float numero,int *cnega,int *cposi,float *maxnegativo,float *minpositivo )
{

   if(numero<0)
   {
       *cnega=*(cnega)+1;
       if(*cnega==1)
       {
           *maxnegativo=numero;
       }
       else if(numero>*maxnegativo)
       {
          *maxnegativo=numero;
       }

   }
   else if(numero>0)
   {
       *cposi=*(cposi)+1;
       if(*cposi==1)
       {
           *minpositivo=numero;
       }
       else if(numero<*minpositivo)
       {
           *minpositivo=numero;
       }


   }


}

void Prueba(int *c)
{
    *c=*(c)+1;
}

void PrimerySegundoMax(int id, float numero, float *mp, float *ms)
{

    if(id==0)
    {
        *mp=numero;
    }
    else if(numero>*(mp))
    {
        *ms=*(mp);
        *mp=numero;
    }
    else if(numero>*(ms))
    {
        *ms=numero;
    }

}

int NumeroPrimo(int numero)
{
    int cd=0;

    for(int x=1;x<=numero;x++)
    {
        if(numero % x ==0)
        {
            cd++;
        }
    }

    return cd;
}

bool Positivos(float anterionum, float numero)
{
    float diferencia=0;

    if(anterionum>0 && numero>0)
    {
        diferencia=abs(anterionum-numero);

        if(diferencia>=5)
        {
            return true;
        }
    }

    return false;
}

#endif // DEFINICIONFUNCIONES_H_INCLUDED

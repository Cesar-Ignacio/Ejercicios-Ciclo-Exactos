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
 if(punto==12)
 {
     Punto_23();
 }
  if(punto==13)
 {
     Punto_24();
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

void PiezasDefectuosas(int operario,int seccion,float pieD,float *pieDM1,int *oper1,float *pieDM2,int *oper2,float *pieDM3,int *oper3)
{

    if(seccion==1 && pieD>*pieDM1)
    {
       *pieDM1=pieD;
       *oper1=operario;
    }
    if(seccion==2 && pieD>*pieDM2)
    {
        *pieDM2=pieD;
        *oper2=operario;
    }
    if(seccion==3 && pieD>*pieDM3)
    {
        *pieDM3=pieD;
        *oper3=operario;
    }


}

void MostrarProPiezasD(int seccion,float piezasD,int operario)
{

    cout<<"Sector "<< seccion <<endl;
    cout<<"Maximo de piezas defectuosas:"<< piezasD<<endl;
    cout<<"Propietario:"<<operario<<endl;
}

void CantidadPiezas(int sector,float pieDF,float pieNDF,float *tpieS1,float *tpieS2,float *tpieS3,float *pdf1,float *pdf2,float *pdf3)
{

    if(sector==1)
    {
        *tpieS1+=pieDF+pieNDF;
        *pdf1+=pieDF;
    }
    if(sector==2)
    {
        *tpieS2+=pieDF+pieNDF;
        *pdf2+=pieDF;
    }
    if(sector==3)
    {
        *tpieS3+=pieDF+pieNDF;
        *pdf3+=pieDF;
    }

}


float Mayor(float num1,float num2, float num3)
{
    float may=0;

    if(num1>num2)
    {
         may=num1;
    }
    else
    {
        may=num2;
    }
    if(num3>may)
    {
        may=num3;
    }

    return may;

}

void PorcetajePDF(float cps1,float cps2, float cps3, float cpd1, float cpd2, float cpd3)
{
    float p1=0,p2=0,p3=0, my=0;

    p1=cpd1*100/cps1;
    p2=cpd2*100/cps2;
    p3=cpd3*100/cps3;

    my=Mayor(p1,p2,p3);

    if(my==p1)
    {
        cout<<"Sector con mayor porcentaje de piezas defectuosas " << 1 <<":"<< my<<"%"<<endl;
    }
     if(my==p2)
    {
        cout<<"Sector con mayor porcentaje de piezas defectuosas " << 2 <<":"<<my<<"%"<<endl;
    }

     if(my==p3)
    {
        cout<<"Sector con mayor porcentaje de piezas defectuosas " <<3<<":"<<my<<"%"<<endl;
    }

}

void ArticuloMasCaro(char clase,float precio,int numart,float *premax1,int *numart1,float *premax2,int *numart2,float *premax3,int *numart3)
{

    if(clase=='A' || clase=='a')
    {
        if(precio>*premax1)
        {
            *premax1=precio;
            *numart1=numart;
        }
    }
    if(clase=='B' || clase=='b')
    {
        if(precio>*premax2)
        {
            *premax2=precio;
            *numart2=numart;
        }
    }
    if(clase=='C' || clase=='c')
    {
        if(precio>*premax3)
        {
            *premax3=precio;
            *numart3=numart;
        }
    }

}

void SumaPrecio(char clase,float precio,float *sumpA,float *sumpB,float *sumpC,int *canartA,int *canartB,int *canartC)
{
    if(clase=='A' || clase=='a')
    {
        *sumpA+=precio;
        *canartA+=1;
    }
    if(clase=='B' || clase=='b')
    {
        *sumpB+=precio;
        *canartB+=1;
    }
    if(clase=='C' || clase=='c')
    {
        *sumpC+=precio;
        *canartC+=1;
    }


}

void MayorProPrecio(float sumpA,float sumpB,float sumpC,int canartA,int canartB,int canartC)
{
    float proA=0,proB=0,proC=0,Mpro=0;

    proA=sumpA/canartA;
    proB=sumpB/canartB;
    proC=sumpC/canartC;


    Mpro=Mayor(proA,proB,proC);

    if(Mpro==proA)
    {
        cout<<"El mayor promedio en precio se escuentra en la clase A :"<< proA<<endl;
    }
    if(Mpro==proB)
    {
        cout<<"El mayor promedio en precio se escuentra en la clase B :"<< proB<<endl;
    }
    if(Mpro==proC)
    {

        cout<<"El mayor promedio en precio se escuentra en la clase C :"<< proC<<endl;
    }

}
#endif // DEFINICIONFUNCIONES_H_INCLUDED

#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia)
{
    double Dt = tB - tA;
    double Vm = distancia / (Dt / 3600);
    return Vm;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima)
{
    double Dt = tB - tA;
    double Vm = distancia / (Dt / 3600);
    if ( Vm < velocidadeMaxima )
    {
        return 0;
    }

    else 
    {
        return 1;
    }
   
}

/*
int main()
{
    int resultado = levouMulta(61200,63000,60.0,120.0);
    printf ("%d", resultado\n);
    return 0;
}
*/
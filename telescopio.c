#include <stdio.h>

int contarEstrelas(int qtd, int abertura)
{
    int f; 
    int n = 0;

    for ( int i = 0; i < qtd; i++)
    {
        scanf ("%d", &f);

        if( abertura * f >= 40000000)
        {
            n++;
        }

    }
        return n;

}
/*
int main()
{

 printf("%d", contarEstrelas(3, 1000) );
 return 0;
}
*/

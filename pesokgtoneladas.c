#include <stdio.h>

int validaPeso ( double pesoKg ) 
{
    if ( pesoKg < 0){
        return 0;
    }
    else {
        return 1;
    }
}

void fazTonelada ( double pesoKg )
{
    printf ("%.4lf\n", pesoKg / 1000) ;
    
}

void fazGrama ( double pesoKg ) 
{
    printf("%.4lf\n", pesoKg*1000);
   
}

/*
int main ()
{
double resultado = int validaPeso ( 25 ) ;
if ( resultado == 1){
    void fazTonelada ( )
    void fazGrama ( ) ;
}
return 0;
}
*/

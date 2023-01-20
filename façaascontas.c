#include <stdio.h>

int faz_conta_direito (int parcelas, char op)
{
int n;

    scanf("%d", &n);

//o s de "soma" já entra no for com o valor da primeira parcela

int s = n;

   for ( int i = 1; i < parcelas;  i++) {
    
    scanf("%d", &n);

    if ( op == '+'){
        s = s + n ;
    } 

    else {
        s = s - n;
    } 
   }
    return s;

}
/*
int main(){
    int resultado = faz_conta_direito (4, '-');
    printf("%d", resultado);
    return 0;
}
*/
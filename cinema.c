#include <stdio.h>

int main ()
{

    int hor, vert;
    int num = 0, let = 0;
    char pos[4];

    scanf ("%d %d", &hor, &vert);
    int cin[hor][vert];

//o primeiro for é pra incializar a matriz com todos os componentes igual a zero

    for ( int i = 0; i < hor; i++)
        for (int j = 0; j < vert; j++)
        {
            cin [i][j] = 0;
        }

//lendo ingressos comprados (letra = linha, numero = coluna ex: A25)

 for ( int i = 0; i < 4; i++)
    {
        pos[i]= 0;
    }

    while (scanf ("%s", pos) != EOF)
    {
        let = (pos [0]) - 65; // letra 'A' = 65, então 'A' - 65 = 0 (ASCII)

        if ( pos[2] != '\0')
        {
            num = ((pos[1] - '0') * 10) + pos[2] - '0';
        }
        else{ num = pos [1]-'0';}

    
        cin[let][num] = 1;
    }

    for ( int i = 0; i < 4; i++)
    {
        pos[i]= 0;
    }
//printando 1 linha
    for (int x = 1; x <= vert; x++)
    {
        if ( x == 1)
        {
        printf("  %02d ", x);
        }
        else{
            printf(" %02d", x);
        }
    }

    printf("\n");

    for (int w = hor - 1; w >= 0; w--)
    {
        printf ("%c ", w + 65);

        for (int j = 1; j <= vert; j++)
        {
            if(cin [w] [j] != 1)
            {
                printf (" --");
            }
            else
            {
                printf(" XX");
            }
        }
            printf("\n");
    }
    
return 0;
}
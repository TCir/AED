#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

// Leia três valores a,b,c. em seguida preencha uma matriz (5x5) da seguinte forma. Os valores acima da diagonal
// principal deverá ser preenchido com o valor a, abaixo da diagonal principal deverá ser preenchido com o valor b, e a
// diagonal principal deverá ser preenchida com o valor c.

int main()
{
    // declarando as variáveis
    int mat[5][5], a, b, c, i, j;

    // entrada de dados
    printf("\nDigite o valor que ficara acima da dianogal principal: ");
    scanf("%d", &a);
    printf("\nDigite o valor que ficara abaix da dianogal principal: ");
    scanf("%d", &b);
    printf("\nDigite o valor que ficara na dianogal principal: ");
    scanf("%d", &c);

    // distribuindo os valores na matriz
    for (i = 0; i < 5; i++) // 5 é o numero de linhas
    {
        for (j = 0; j < 5; j++) // 5 é o numero de colunas
        {
            if (i < j) // valores acima da diagonal
            {
                mat[i][j] = a;
            }
            else
            {
                if (i > j) // valores abaixo da diagonal
                {
                    mat[i][j] = b;
                }
                else
                {
                    mat[i][j] = c; // valores na diagonal
                }
            }
        }
    }
    // saida dos dados
    printf("\nImprimindo a matriz\n");
    printf("\n");
    for (i = 0; i < 5; i++) // tenho sempre que trabalhar com 2 FOR..um para percorrer [i] outro para percorrer [j]
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
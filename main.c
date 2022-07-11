#include <stdio.h>

int main(void) {
int n, m, pares = 0, impares = 0, j = 0, i = 0, g = 0, maioresm =0, menoresm = 0, iguaism = 0, maior=0, soma =0, media = 0;
            float menor = 100000000;
            printf("Insira a quantidade de numeros: ");
           scanf("%d", &n);
            printf("Insira um numero para ser comparado: ");
            scanf("%d", &m);
            int v[n];
            while ( i <n)
            {
                printf("Insira um numero: ");
                scanf("%d", &v[i]);
                i++;
            }
            while (j < n)
            {
                if (v[j] % 2 == 0)
                {
                    pares++;
                    
                }
                j++;
            }
            while (g < n)
            {
                if (v[g] % 2 == 1)
                {
                    impares++;

                }
                g++;
            }
            for (i = 0; i < n; i++) 
            {
                if (v[i]>m)
                {
                    maioresm++;
                }
               else if (v[i] < m)
                {
                    menoresm++;
                }
                else
                    iguaism++;

            }
            for (i = 0; i < n; i++)
            {
                if (v[i] > maior)
                maior = v[i];
            }
            for (i = 0; i < n; i++)
            {
                if (v[i] < menor)
                    menor = v[i];
            
            }
            for (i = 0; i < n; i++)
            {
               soma = soma + v[i];
            }

            media = soma / n;

            printf(" São pares: %d\n", pares);
            printf(" São impares: %d\n" ,impares);
            printf(" São maiores que o numero de comparação :%d\n", maioresm);
            printf(" São menores que o numero de comparação :%d\n", maioresm);
            printf(" São iguais ao numero de comparação :%d\n", iguaism);
            printf(" o maior numero é:%d\n", maior);
            printf(" o menor numero é:%d\n", menor );
            printf(" A soma dos numeros:%d\n", soma);
            printf(" A media dos numeros é:%d\n",media);
        }


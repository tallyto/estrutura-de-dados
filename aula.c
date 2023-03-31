#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int qtd_numeros = 0;

    printf("Digite a quantidade de numeros que deseja alocar: ");
    scanf("%d", &qtd_numeros);
    int *valores_mem[qtd_numeros];
    for (int i = 0; i < qtd_numeros; i++)
    {
        int valor = 0;
        printf("Digite o valor para allocar\n");
        scanf("%d", &valor);
        valores_mem[i] = malloc(sizeof(int));
        *valores_mem[i] = valor;
    }

    for (int j = 0; j < qtd_numeros; j++)
    {
        printf("Endereco memoria: %p\n", &valores_mem[j]);
        printf("Valor na memoria: %d\n", *valores_mem[j]);

        free(valores_mem[j]);
    }
    int exit = 0;

    printf("Digite 1 para sair\n");

    scanf("%d", exit);

    return 0;
}
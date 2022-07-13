#include<stdio.h>
int main ()
{
    unsigned vet[4];
    unsigned int i;    
    vet[0]=0;
    vet[1]=1;
    vet[2]=0;
    vet[3]=0;
 
    printf("Informe o numero a ser comparado:");
    scanf("%u", &vet[3]);
    for (i=0;i<vet[3];i++)
    {    
        vet[2] = vet[0] + vet[1];
        if(vet[2] == vet[3])
        {
            printf("\nValor:%u , composto por:%u + %u\n", vet[3], vet[0], vet[1]);            
            return 0;
        }
        vet[0] = vet[1];
        vet[1] = vet[2];
    }
    printf("O valor informado nao corresponde a tabela.\n");
    return 0;
}

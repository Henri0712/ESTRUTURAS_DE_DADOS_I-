#include <stdio.h>

int main() 
{
    printf("Qual o preco do seu produto? ");
    float valProd = 0;
    scanf("%f",&valProd);
    printf("Qual sera a forma de pagamento, digite: \n 1 = A Vista e  2 = A Prazo  ");
    int forPag = 0;
    scanf("%d",&forPag);

    if (forPag == 1)
    {
        float valF = valProd - (valProd * 0.05);
        printf("Preco do produto: %.2f",valProd);
        printf("\nForma de pagemento %.0d", forPag);
        printf("\nPreco a vista: %.2f", valF);
    } else 
    {
        float valF = valProd + (valProd * 0.1);
        printf("Preco do produto: %.2f",valProd);
        printf("\nForma de pagemento: %.0d", forPag);
        printf("\nPreco a vista: %.2f", valF);
    }

}
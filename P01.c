#include <stdio.h>

int main()
{
    int horas = 0;
    float valHora = 0;
    printf("Quantas Horas Voce Trabalhou ?");
    scanf("%d", &horas);
    printf("Qual e o Valor da Sua Hora ? ");
    scanf("%f",&valHora);
    float salario = horas * valHora;

    if (horas > 200)
    {
        float salarioF = salario + (salario * 0.05);
        printf("Horas trabalhadas: %.0d", horas);
        printf("\nValor da hora: %.2f",valHora);
        printf("\nSalario: %.2f",salarioF);
    } else 
    {
        printf("Horas trabalhadas: %.0d",horas);
        printf("\nValor da hora: %.2f", valHora);
        printf("\nSalario: %.2f",salario);   
    }
}
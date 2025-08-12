#include <stdio.h>

int main()
{
    printf("Qual sera o horario de inicio do seu evento: ");
    int horarioInicio = 0;
    scanf("%d",&horarioInicio);
    printf("Qual o horario que terminara o evento: ");
    int horarioFim = 0;
    scanf("%d",&horarioFim);
    if (horarioInicio > horarioFim)
    {
        int duracao = horarioInicio + horarioFim;
        if (duracao < 23)
        {
            printf("Inicio: %0.d",&horarioInicio);
            printf("Fim: %.0d", &horarioFim);
            printf("Duracao %.0d", &duracao);
        }
        
    }

    if (horarioFim > horarioInicio)
    {
        int duracao = horarioFim - horarioInicio;
        if (duracao < 23)
        {
            printf("Inicio: %0.d",&horarioInicio);
            printf("Fim: %.0d", &horarioFim);
            printf("Duracao %.0d", &duracao);       
        }
    }
        
    
}
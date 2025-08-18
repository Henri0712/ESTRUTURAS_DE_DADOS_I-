#include <stdio.h>

int maior_menor(int num1, int num2)
{
 if(num1 > num2)
    return printf("\n%d",num1); 
 else
    return printf("\n%d",num2);
}

int main()
{
int num1 = 0;
int num2 = 0;
printf("\nDigite o primeiro valor: ");
scanf("%d",&num1);
printf("\nDigite o segund valor: ");
scanf("%d",&num2);
maior_menor(num1,num2);

}
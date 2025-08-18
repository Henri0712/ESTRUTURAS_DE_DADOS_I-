#include <stdio.h>

int main()
{
	int a,*p;
	a = 10;
	//p=100;
	p = &a;
	printf("Valor: %d Endereço: %p\n",a,&p);  //"%p impreme endereço"
	*p = 12; //apontar para o valor do endereço
	printf("Valor: %d Endereço: %p\n",*p,p);
	printf("Valor: %d Endereço: %p\n",a,&a);
	return 0;
}

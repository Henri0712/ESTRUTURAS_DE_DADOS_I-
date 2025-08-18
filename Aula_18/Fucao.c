#include <stdio.h>

void f(int *n)
{	//i &i
	//*p p
	*n=15;
	printf("%d \n",*n);
}
int k(int x){
	return !(x&1);
}

int main()
{
	
	printf("%d", k(10));
	int *m;
	int x = 10;
	f(&x);
	printf("%d",x);
	m=&x;
	scanf("\n%d",m);
	//printf("\n%d %d",x,*m);
	return 0;
}

#include <stdio.h>


///Endereço de memória
void main() {
	int a;
	printf("%p\n", & a);
	int *p;
	p = &a;
	*p = 10;
	a=*p+1;
	printf("%d %d", a, *p);
}
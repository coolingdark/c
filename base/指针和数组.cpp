# include <stdio.h>

void f(int * p, int i)
{
	p[3] = 88;	
	return;
}
int main(void)
{
    int a[5] = {11, 22, 7, 6, 50};	
    printf("%d\n", a[3]);
    f(a, 5);
	printf("%d\n", a[3]);
    printf("%#X\n", &a[3]);
    return 0;
}

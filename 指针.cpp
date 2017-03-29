# include <stdio.h>
 
int main(void)
{
	int * p;
	int j;
	int i = 3; 
	p = &i;
	j = *p;
	printf("i = %d, j = %d\n", i, j);
    return 0;
}

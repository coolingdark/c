/*
2016��8��3��08:13:38
Ŀ�ģ�for��while�ıȽ�
*/
# include <stdio.h>

int main(void)
{
/*  int i;
	int sum = 0;

	for (i = 1; i <= 100; ++i)
	{
		sum = sum + i;//sum += i
    }
*/
	int i = 1;
    int sum = 0;
	while (i <= 100)
	{
	    sum += i;
	    ++i;       
	}
	printf("sum = %d\n", sum); 
	return 0;
}

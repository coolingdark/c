/*
2016年8月3日08:13:38
目的：for和while的比较
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

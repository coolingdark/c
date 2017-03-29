/*
2016年8月2日16:30:24
目的：for和if的嵌套使用
*/
# include <stdio.h>

int main(void)
{
    int i;
	int sum = 0;

	for (i = 1; i <= 4; ++i)
    {
	    if (i%3 == 0) 
		sum = sum + i;
	} 
    printf("sum = %d\n", sum);
 
    return 0;
}

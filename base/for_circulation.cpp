/*
2016年8月2日16:33:38
目的：for循环的练习
*/
# include <stdio.h>

int main(void)
{
    int i;
	int sum = 0;
	int cnt = 0;
	for (i = 1; i <= 100; ++i)
	{
		sum = sum + i;//sum += i
          cnt = cnt + 1;
    }
	printf("sum = %d\n", sum);
    printf("cnt = %d\n", cnt);



    return 0;
}

/*
2016��8��2��16:33:38
Ŀ�ģ�forѭ������ϰ
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

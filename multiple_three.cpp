# include <stdio.h>
//计算100以内3的倍数的个数 
int main(void)
{
    int i;
	int cnt = 0;
	for (i = 1; i <= 100; ++i)
    { 
		if (i%3 == 0)
          ++cnt;
	} 
    printf("cnt = %d\n", cnt);
    return 0;
}




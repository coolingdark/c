/*斐波拉序列*/ 
# include <stdio.h>
int main(void)
{
    int n, i;
	int f1, f2, f3;
	f1 = 1;
	f2 = 2;
	scanf("%d", &n);//第n个数是多少 
	if (1 == n)
	{
	   f3 = 1;
	}
    else if(2 == n)
	{
	   f3 = 2;
	}
    else
	{
		for (i = 3; i <= n; ++i)
		{
			f3 = f1 + f2;
	        f1 = f2;
	        f2 = f3;
		}
	}
    printf("%d\n", f3);
    return 0;
}

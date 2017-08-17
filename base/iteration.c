//µü´úµÄÁ·Ï° 
# include <stdio.h>

long fact(int n)
{	
	long result =1;
	if(n<0)
		return -1;
	else if(n==1||n==0)
		return 1;
	else
	{
		return (n*fact(n-1));
	}
}
int main()
{
	int m;
	long ret;
	printf("input m\n");
	scanf("%d",&m);
	ret = fact(m);
	if(ret == -1)
		printf("ÊäÈë´íÎó\n");
	else
		printf("%d!=%ld\n", m, ret);
}

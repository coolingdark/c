/*# include <stdio.h>
main()
{
int n, i, j, sum, p;
sum = 0,p = 1;
printf("请输入n的值：\n");
scanf("%d", &n);
for(i = 1; i <= n; ++i)
{   
p = p * i;
sum = sum + p;
}
printf("%d\n", sum);	   
}
*/
//计算1!+2!+......+n! 
# include <stdio.h>
int main(void)
{
    int n, i, j, sum, p;
	sum = 0;
	printf("请输入n的值：\n");
    scanf("%d", &n);
	for(i = 1; i <= n; ++i)
	{
		p = 1;
		for(j = 1; j <= i; ++j)
		{	
			p = p * j;
		}
		sum = sum +p;
	}
		printf("%d\n", sum);						
    return 0;				  
}










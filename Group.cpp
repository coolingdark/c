/*
	组合的计算Cmn 
*/  
# include <stdio.h>

int aver(int i)// i 的阶乘 
{
	int j, k = 1;
	for (j=1;j<=i;++j)
		k=k*j;
	   return k;
}
int main()
{
	int m, n, a;
	double p;
	printf("请输入m，n的值,以空格隔开：\n");	
	do
	{
		scanf("%d %d", &m, &n);
		if (m>n)
		{
			p=(float)aver(m) / (aver(n)*aver(m-n));//Cmn计算公式 
			printf("p=%lf\n",p);
		}
		else
			printf("输入错误请重新输入\n");
	}while(m<=n);	
	return 0;
}

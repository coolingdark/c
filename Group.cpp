/*
	��ϵļ���Cmn 
*/  
# include <stdio.h>

int aver(int i)// i �Ľ׳� 
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
	printf("������m��n��ֵ,�Կո������\n");	
	do
	{
		scanf("%d %d", &m, &n);
		if (m>n)
		{
			p=(float)aver(m) / (aver(n)*aver(m-n));//Cmn���㹫ʽ 
			printf("p=%lf\n",p);
		}
		else
			printf("�����������������\n");
	}while(m<=n);	
	return 0;
}

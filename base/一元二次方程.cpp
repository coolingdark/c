# include <stdio.h>
# include <math.h>
# include <stdlib.h>//��������exit(code)��ֹ��������ִ�� 
int main(void)
{
    char ch;
	int a, b, c;
	
	double x1;
	double x2;
	double delta;
		do 
		{	
			printf("a = ");
			scanf("%d", &a);
			printf("b = ");
			scanf("%d", &b);
			printf("c = ");
			scanf("%d", &c);
			delta = b*b - 4*a*c;
			if (delta > 0)
			{
				x1 = (-b + sqrt(delta)) / (2*a);
				x2 = (-b - sqrt(delta)) / (2*a);
				printf("��һԪ���η����������⣬x1 = %f, x2 = %lf\n",x1,x2);
			}
			else if ((fabs)(delta)<= 1e-6)//��0����ֱ�ӱȽ� 
			{
				x1 = (-b + sqrt(delta)) / (2*a);
				x2 = (-b + sqrt(delta)) / (2*a);
				printf("��һԪ���η�����Ψһ�⣬x1 = x2 = %lf\n", x1);	
			}
			else
			{  
				printf("�޽�\n");
			}
		    printf("�Ƿ����y/n\n");
            scanf(" %c", &ch);//%ǰ�ӿո���Ϊǰ��Ļس��������ַ�����ch���˿��Ա��� 
		}while ('y' == ch);
		return 0;
}

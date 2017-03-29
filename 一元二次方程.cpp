# include <stdio.h>
# include <math.h>
# include <stdlib.h>//包含函数exit(code)终止整个程序执行 
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
				printf("该一元二次方程有两个解，x1 = %f, x2 = %lf\n",x1,x2);
			}
			else if ((fabs)(delta)<= 1e-6)//与0不能直接比较 
			{
				x1 = (-b + sqrt(delta)) / (2*a);
				x2 = (-b + sqrt(delta)) / (2*a);
				printf("该一元二次方程有唯一解，x1 = x2 = %lf\n", x1);	
			}
			else
			{  
				printf("无解\n");
			}
		    printf("是否继续y/n\n");
            scanf(" %c", &ch);//%前加空格因为前面的回车被当做字符读入ch加了可以避免 
		}while ('y' == ch);
		return 0;
}

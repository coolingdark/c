/*判断是不是回文数例如12321*/ 
# include <stdio.h>

int main(void)
{
    int val;
	int m;
	int sum = 0;
	printf("请输入一个数值");
	scanf("%d", &val);
	m = val;
	while (m)
    {
      	sum = sum*10 + m%10;
	  	m /= 10;
	}
    if (sum == val) 
	printf("yes\n");
    else 
    printf("no\n");
    return 0;
}

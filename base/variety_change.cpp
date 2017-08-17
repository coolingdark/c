/*
2016年8月2日16:58:20
目的：强制类型转换的练习

总结：(int)(4.2 + 2.5)最终值是6
      (float)(5)最终值是5.000000
*/
# include <stdio.h>

int main(void)
{
    int i;
	float sum = 0;
	for (i = 1; i <= 100; ++i)
    {
		sum = sum + 1 / (float)(i);//强制类型转换(float)(i)或1.0/i
	}
    printf("sum =%f\n", sum);
    return 0;
}

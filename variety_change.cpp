/*
2016��8��2��16:58:20
Ŀ�ģ�ǿ������ת������ϰ

�ܽ᣺(int)(4.2 + 2.5)����ֵ��6
      (float)(5)����ֵ��5.000000
*/
# include <stdio.h>

int main(void)
{
    int i;
	float sum = 0;
	for (i = 1; i <= 100; ++i)
    {
		sum = sum + 1 / (float)(i);//ǿ������ת��(float)(i)��1.0/i
	}
    printf("sum =%f\n", sum);
    return 0;
}

/*
2016��8��2��16:30:24
Ŀ�ģ�for��if��Ƕ��ʹ��
*/
# include <stdio.h>

int main(void)
{
    int i;
	int sum = 0;

	for (i = 1; i <= 4; ++i)
    {
	    if (i%3 == 0) 
		sum = sum + i;
	} 
    printf("sum = %d\n", sum);
 
    return 0;
}

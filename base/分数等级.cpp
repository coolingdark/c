/*
2016��8��2��16:32:06
Ŀ�ģ�if   else if  ����ϰʹ��
*/
# include <stdio.h>

int main(void)
{
    float score;
	
	printf("�����������");
    scanf("%f", &score);    
	if (score > 100)
    printf("����\n");
    else if (score <= 100 && score >= 90)
    printf("����\n");
    else if (score < 90 && score >= 80)
    printf("����\n");
    else if (score <80 && score >= 60)
    printf("����\n");
    else
    printf("������\n");
    return 0;
}

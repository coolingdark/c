//����������ѡ�񷨣������ 
# include <stdio.h>
void exchange(int * i, int * j)
{
	int t;
	if (*i > *j)
    {  
	   t = *i;	*i = *j;	*j = t;
	} 
 } 
int main(void)
{
    int a, b, c;
	printf("�������������ֲ��ÿո����:");
    scanf("%d %d %d", &a, &b, &c);
    exchange(&a, &b);	exchange(&a, &c);	exchange(&b, &c);
    printf("��С��������Ϊ��%d %d %d\n", a, b, c);
    return 0;
}

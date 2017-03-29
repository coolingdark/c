//三个数排序（选择法）精简版 
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
	printf("请输入三个数字并用空格隔开:");
    scanf("%d %d %d", &a, &b, &c);
    exchange(&a, &b);	exchange(&a, &c);	exchange(&b, &c);
    printf("由小到大排序为：%d %d %d\n", a, b, c);
    return 0;
}

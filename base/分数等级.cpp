/*
2016年8月2日16:32:06
目的：if   else if  的练习使用
*/
# include <stdio.h>

int main(void)
{
    float score;
	
	printf("请输入分数：");
    scanf("%f", &score);    
	if (score > 100)
    printf("做梦\n");
    else if (score <= 100 && score >= 90)
    printf("优秀\n");
    else if (score < 90 && score >= 80)
    printf("良好\n");
    else if (score <80 && score >= 60)
    printf("及格\n");
    else
    printf("不及格\n");
    return 0;
}

//�����ɸ��ַ����� 
#include<stdio.h>
#define size 5
void Input(char c[]);
char Handle(char c[],int n);

int main()
{
	int i;
	char c[size];
	printf("Input i=");
	scanf("%d", &i);/*����i��ֵ����ȷ��������ĸ���������i����ĸ������Ǹ���ĸ*/
	Input(c);
	Handle(c, i);
	printf("%c%c%c%c%c\n", c[0],c[1],c[2],c[3],c[4]);
	return 0;
}
void Input(char c[])
{
	int i;
	printf("Input c:");
	for (i = 0; i < size; i++)
	{
		scanf(" %c", &c[i]);
	}
}
char Handle(char c[], int n)//��ĸ�ƶ� 
{
	int i;
	for (i = 0; i < size; i++)
	{
     
		if (c[i] >= 65 && c[i] <= 90)
			c[i] = ((c[i] - 65) + n) % 26 + 65;
		else if (c[i] >= 97 && c[i] <= 122)
			c[i] = ((c[i] - 97) + n) % 26 + 97;
	}
	return c[i];
}

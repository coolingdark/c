  //����10�� 
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main()
{
	int guess, magic, count = 0;
	int ret;
	char ch;
	srand(time(NULL));
	magic = rand()%100+1;
	printf("������²��ֵ��\n");
	do 
	{
		do
		{
			ret = scanf("%d", &guess);//�������ݵĸ��� 
			while(ret != 1)
			{
			while(getchar()!='\n')
				printf("����������������룺\n");
			ret = scanf("%d", &guess);
			}//�����������ݵ���ʽ 
			count++;
			
			if (guess > magic)
				printf("wrong,too big���������룺\n");
			else if(guess < magic)
				printf("wrong,too small���������룺\n");
			else
			{
				printf("right\n");
				break;	
			}
		}while(count<10);
		if(count<10)
			{
			printf("�²����Ϊ%d��\n", count);
			break;
			}
		else
		{ 
			printf("���Ѿ��²���10�Σ����������²����10Ԫ��1543257419:y/n\n");
			scanf(" %c", &ch);//�ո�
			if(ch=='y') 
			{
			printf("��ֵ�ɹ�\n"); 
		 	count = 0;
			} 
			else
				break;
		} 
	}while('y' == ch);
    return 0;
}

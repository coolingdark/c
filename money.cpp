//�������1,5,10Ԫ���100Ԫ����50�� 
# include <stdio.h>
int main()
{
	int i, j, k,sum=0;
	for(i=1;i<50;++i)
		for(j=1;j<50;++j)	
			for(k=1;k<50;++k)	
				if(i+j+k==50 && i+5*j+10*k==100 )
				{				
					printf("һԪ:%d�ţ���Ԫ: %d�ţ�ʮԪ: %d��\n", i, j, k);
					++sum; 
				}
				printf("һ��%d��\n",sum);
	return 0;				
}

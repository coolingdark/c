//计算出由1,5,10元组成100元，共50张 
# include <stdio.h>
int main()
{
	int i, j, k,sum=0;
	for(i=1;i<50;++i)
		for(j=1;j<50;++j)	
			for(k=1;k<50;++k)	
				if(i+j+k==50 && i+5*j+10*k==100 )
				{				
					printf("一元:%d张；五元: %d张；十元: %d张\n", i, j, k);
					++sum; 
				}
				printf("一共%d个\n",sum);
	return 0;				
}

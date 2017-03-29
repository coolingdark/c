# include <stdio.h>
# define stud_n 40
# define course_n 3 
void readscore(int score[][course_n],long num[],int n);
void averforstud(int score[][course_n],long sum[], float aver[],int n);
void averforcourse(int score[][course_n],long sum[], float aver[], int n);
void print(int score[][course_n],long num[],int sums[], int sumc[], float avers[],int n);
int main()
{
	int score[stud_n][course_n],sums[stud_n],sumc[course_n],n;
	long num[stud_n];
	float avers[stud_n],averc[course_n];
	scanf("%d",&n);
	readscore(score,num,n);
	averforstud(score,sums,avers,n);
	averforcourse(score,sumc,averc,n);
	printf("score,num,sums,avers,sumc,averc,n");
	return 0;
}
void readscore(int score[][course_n],long num[],int n)
{
	int i, j;
	for(i=0;i<n;++i)
	{
		scanf("%ld",&num[i]);
		for(j=0;j<course_n;++j)
			scanf("%d",&score[i][j]);		
	}
}
void averforstud(int score[][course_n],long sum[], float aver[],int n)
{
	int i,j;
	for(i=0;i<n;++i)
	{
		sum[j]=0;
		for(j=0;j<course_n;++j)
			sum[i]=sum[i] + score[i][j]; 
		aver[i]=(float)sum[i]/course_n;
	}
}
void averforcourse(int score[][course_n],long sum[], float aver[], int n)
{
   int i,j;
   for(j=0;j<course_n;++j)
   {
	   sum[j]=0;
       for(i=0;i<n;++i)
		   sum[j]=sum[j]+score[i][j];
	   aver[j]=(float)sum[j]/n;
   }
}
void print(int score[][course_n],long num[],int sums[], int sumc[], float avers[],int n)
{
       int i,j;
	   for(i=0;i<n;++i)
       {
	       printf("%12ld",num[i]);
		   for(j=0;j<course_n;++j)
		   {
		       printf("%4d\t",score[i][j]);
		   
		   }
	   printf("%4d\t%5.1f\n",sums[i],avers[i]);
	   }
     printf("sumofcourse\t");
	 for(j=0;j<course_n;++j)
         printf("%4d\t",sumc[j]);
      printf("\naverofcourse\t");
	  for(j=0;j<course_n;++j)
		  printf("%4.1f\t,averc[j]");
	  printf("\n");



}
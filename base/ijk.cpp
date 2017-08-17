#include<stdio.h>
int main()
{
int i,j,k,n;

for(i=1;i<10;i++)
for(j=0;j<10;j++)
for(k=0;k<10;k++)
{
n=i*100+j*10+k;
if((i*100+j*10+k)==((i*i*i)+(j*j*j)+(k*k*k)))
printf("水仙花数为:%d\n",n);
}
}
/*水仙花数为:153
水仙花数为:370
水仙花数为:371
水仙花数为:407

--------------------------------
Process exited after 3.12 seconds with return value 0
请按任意键继续. . .
*/


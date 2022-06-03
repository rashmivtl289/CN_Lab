/*1. Write a program for distance vector algorithm to find suitable path for transmission.*/
#include<stdio.h>
int a[10][10],n;
int min(int a, int b)
{
return a<b?a:b;
}
void floyd()
{
int i,j,k;
for(k=1;k<=n;k++)
{
for(i=1;i<=n;i++)
{
for(j=0;j<=n;j++)
{
a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
}
}
}
}
void main()
{
int i,j,k;
printf("Enter number of nodes");
scanf("%d",&n);
printf("Enter matrics");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{
scanf("%d",&a[i][j]);
if(a[i][j]==0)
a[i][j]=999;
if(a[i]==a[j])
a[i][j]=0;
}
floyd();
printf("Distance matrics:\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
}

/*3. Write a program for Hamming code generation for error detection and correction.*/
#include<stdio.h>
void main()
{
int Data[7],i,rec[7],c1,c2,c3,c;
printf("Enter mesage");
scanf("%d%d%d%d",&Data[0],&Data[1],&Data[2],&Data[4]);
Data[6]=Data[4]^Data[2]^Data[0];
Data[5]=Data[4]^Data[1]^Data[0];
Data[3]=Data[2]^Data[1]^Data[0];
printf("Encoded bits are\n");
for(i=0;i<7;i++)
{
printf("%d",Data[i]);
}
printf("\nReciver side");
printf("\nEnter encoded bits");
for(i=0;i<7;i++)
{
scanf("%d",&rec[i]);
}
c1=rec[6]^rec[4]^rec[2]^rec[0];
c2=rec[5]^rec[4]^rec[1]^rec[0];
c3=rec[3]^rec[2]^rec[1]^rec[0];
c=c3*4+c2*2+c1;
if(c==0)
{
printf("No errors\n");
}
else
{
printf("There is an error at position %d\n",c);
if(rec[7-c]==0)
rec[7-c]=1;
else
rec[7-c]=0;
printf("Error handled\n");
}
}


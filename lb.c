#include<stdio.h>
void main()
{
int incoming,outgoing,buf_size,n,store=0,i;
printf("Enter n value\n");
scanf("%d",&n);
printf("Enter buffer size\n");
scanf("%d",&buf_size);
printf("Outgoing value\n");
scanf("%d",&outgoing);

while(n!=0)
{
printf("Incoming value\n");
scanf("%d",&incoming);
printf("Incoming\n");
if(incoming<=(buf_size-store))
store=incoming;
else
{
printf("%d Packet is dropped\n",incoming-(buf_size-store));
store=buf_size;
printf("Buffer size %d outof %d\n",store,buf_size);
}
store=store-outgoing;
if(store<0)
store=0;
printf("After outgoing %d packets left in buffer %d\n",store,buf_size);
n--;
}
} 


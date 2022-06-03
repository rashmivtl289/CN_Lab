BEGIN {
count=0
sent1=0;
sent2=0
received=0;
}
{
if($1=="d")
{
count++;
}
else if($1=="+" && $3==1 && $4==2)
{
sent1++;
}
else if($1=="+" && $3==0 && $4==2)
{
sent2++;
}
else if($1=="r" && $3==2 && $4==3)
{
received++;
}
}
END {
printf("\nNumber of packets dropped is:%d\n",count);
printf("\nPackets sent from source node1 is:%d",sent1);
printf("\n Packets sent from source node1 is:%d\n",sent2);
printf("\nPacket Received:%d",received);
sent=sent1+sent2;
printf("\nPacket DEliverdRatio:%.2f\n",(received/sent)*100);
}

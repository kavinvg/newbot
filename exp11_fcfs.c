#include<stdio.h>
#include<stdlib.h>
int main()
{
 int ReadyQueue[100],i,n,TotalHeadMov=0,initial;
 printf("Enter the number of requests\n");
 scanf("%d",&n);
 printf("Enter the sequence of request\n");
 for(i=0;i<n;i++){
 
 scanf("%d",&ReadyQueue[i]);
 }
 printf("Enter initial head position\n");
 scanf("%d",&initial);
 for(i=0;i<n;i++)
 {
 TotalHeadMov=TotalHeadMov+abs(ReadyQueue[i]-
initial);
 initial=ReadyQueue[i];
 }
 printf("Total Head Movement=%d\n",TotalHeadMov);
}
output:
Enter the number of requests
7
Enter the sequence of request
82 170 43 140 24 16 190
Enter initial head position
50
Total Head Movement=642



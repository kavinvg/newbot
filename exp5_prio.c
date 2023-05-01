#include<stdio.h>
  
int main()
{
    int bt[20],p[20],wt[20],tat[20],pr[20],i,j,n,total=0,pos,temp,avg_wt,avg_tat;
    printf("Enter Total Number of Process:");
    scanf("%d",&n);
  
    printf("\nEnter Burst Time and Priority\n");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d]\n",i+1);
        printf("Burst Time:");
        scanf("%d",&bt[i]);
        printf("Priority:");
        scanf("%d",&pr[i]);
        p[i]=i+1;
    }
  
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }
  
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
  
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
  
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
  
    wt[0]=0;
  
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
  
        total+=wt[i];
    }
  
    avg_wt=total/n;
    total=0;
  
    printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        total+=tat[i];
        printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
    }
  
    avg_tat=total/n;
    printf("\n\nAverage Waiting Time=%d",avg_wt);
    printf("\nAverage Turnaround Time=%d\n",avg_tat);
  
return 0;
}


output:
Enter Total Number of Process:5

Enter Burst Time and Priority

P[1]
Burst Time:5
Priority:3

P[2]
Burst Time:24
Priority:1

P[3]
Burst Time:16
Priority:4

P[4]
Burst Time:10
Priority:5

P[5]
Burst Time:3
Priority:2

Process     Burst Time          Waiting Time    Turnaround Time
P[2]              24                0                   24
P[5]              3                 24                  27
P[1]              5                 27                  32
P[3]              16                32                  48
P[4]              10                48                  58

Average Waiting Time=26
Average Turnaround Time=37

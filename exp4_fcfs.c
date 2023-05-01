#include<stdio.h>
int main()
{
int i,j,bt[10],wt[10],tat[10],n;
int awt=0,atat=0;
printf("Enter the no. of processes : \n");
scanf("%d",&n);
printf("Enter the burst time/process time : \n");
for(i=0;i<n;i++)
{
scanf("%d",&bt[i]);
}
printf("Process\t Burst Time\t Waiting Time\t Turn Around Time\n");
for(i=0;i<n;i++)
{
wt[i]=0;
tat[i]=0;
for(j=0;j<i;j++)
{
wt[i]=bt[j]+wt[i];
}
tat[i]=bt[i]+wt[i];
awt=awt+wt[i];
atat=atat+tat[i];
printf("%d \t\t %d\t\t %d\t\t %d\n",i+1,bt[i],wt[i],tat[i]);
}
awt=awt/n;
printf("Avg. Waiting Time: %d\n",awt);
atat=atat/n;
printf("Avg. Turn Around Time: %d \n",atat);
}

output
Enter the no. of processes :
4
Enter the burst time/process time :
3
10
4
6
Process  Burst Time      Waiting Time    Turn Around Time
1                3               0               3
2                10              3               13
3                4               13              17
4                6               17              23
Avg. Waiting Time: 8

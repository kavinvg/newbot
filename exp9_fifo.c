#include<stdio.h>
int main()
{
int i,j,n,a[50],frame[10],no,k,avail,count=0;
            printf("\n ENTER THE NUMBER OF PAGES:\n");
scanf("%d",&n);
            printf("\n ENTER THE PAGE NUMBER :\n");
            for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
            printf("\n ENTER THE NUMBER OF FRAMES :");
            scanf("%d",&no);
for(i=0;i<no;i++)
            frame[i]= -1;
                        j=0;
                        printf("\tref string\t page frames\n");
for(i=1;i<=n;i++)
                        {
                                    printf("%d\t\t",a[i]);
                                    avail=0;
                                    for(k=0;k<no;k++)
if(frame[k]==a[i])
                                                avail=1;
                                    if (avail==0)
                                    {
                                                frame[j]=a[i];
                                                j=(j+1)%no;
                                                count++;
                                                for(k=0;k<no;k++)
                                                printf("%d\t",frame[k]);
}
                                    printf("\n");
}
                        printf("Page Fault Is %d",count);
                        printf("\npage hit is %d",n-count);
                        return 0;
}

ENTER THE NUMBER OF PAGES:
12

 ENTER THE PAGE NUMBER :
1
2
3
4
5
2
1
3
3
2
4
5

 ENTER THE NUMBER OF FRAMES :3
        ref string       page frames
1               1       -1      -1
2               1       2       -1
3               1       2       3
4               4       2       3
5               4       5       3
2               4       5       2
1               1       5       2
3               1       3       2
3
2
4               1       3       4
5               5       3       4
Page Fault Is 10
page hit is 2

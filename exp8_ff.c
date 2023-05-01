#include <stdio.h>
int main()
{
    int bno,pno,bsize[10],psize[10],i,j,allocation[10];
    for(i=0;i<10;i++)
    {
        allocation[i]=-1;
    }
    printf("Enter The No. Of Blocks : ");
    scanf("%d", &bno);
    printf("Enter The Size Of Block : \n");
    for(i=0;i<bno;i++)
    {
        scanf("%d", &bsize[i]);
    }
    printf("Enter The No. Of Process : ");
    scanf("%d", &pno);
    printf("Enter The Size Of Process : \n");
    for(i=0;i<pno;i++)
    {
        scanf("%d" ,&psize[i]);
    }
    for(i=0;i<pno;i++)
    {
        for(j=0;j<bno;j++)
        {
            if(bsize[j]>=psize[i])
            {
                allocation[i]=j;
                bsize[j]=bsize[j]-psize[i];
                break;
            }
        }
    }
    printf("\nProcess No.\tProcess Size\tBlock No.\n");
    for(i=0;i<pno;i++)
    {
        printf("%d\t\t\t %d\t\t", i+1,psize[i]);
        if(allocation[i]!=-1)
        printf("\t\t\t%d\n",allocation[i]+1);
        else
        printf("Not Allocated\n");
    }
    return 0;
}


output:
Enter The No. Of Blocks : 5
Enter The Size Of Block :
100
500
200
300
600
Enter The No. Of Process : 4
Enter The Size Of Process :
212
417
112
426

Process No.     Process Size    Block No.
1                        212                                    2
2                        417                                    5
3                        112                                    2
4                        426            Not Allocated


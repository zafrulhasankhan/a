#include<stdio.h>
int main()
{
    int n,qt,i,bt[20],tat[20],wt[20],temp,sq=0,count=0,avwt=0,avtat=0,rem_bt[20];
    printf("Enter process number:");
    scanf("%d",&n);
    printf("Enter burst time:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
        rem_bt[i]=bt[i];
    }
    printf("Enter quantum time:");
    scanf("%d",&qt);
    while(1)
    {
        for(i=0,count=0;i<n;i++)
        {
            temp=qt;
            if(rem_bt[i]==0)
            {
                count++;
                continue;

            }
            if(rem_bt[i]>qt)
                rem_bt[i]=rem_bt[i]-qt;
            else
                if(rem_bt[i]>=0)
            {
                temp=rem_bt[i];
                rem_bt[i]=0;
            }
            sq=sq+temp;
            tat[i]=sq;

        }
        if(n==count)
            break;
    }
    printf("\nprocess\t\tBurstTime\tturnArround\twaiting time\n");
    for(i=0;i<n;i++)
    {
        wt[i]=tat[i]-bt[i];
        avwt=avwt+wt[i];
        avtat=avtat+tat[i];
        printf("%d\t\t%d\t\t\%d\t\t%d\n",i+1,bt[i],tat[i],wt[i]);
    }

    printf("\n\nAverage Waiting Time=%f",avwt*1.0/n);
    printf("\nAverage Turnaround Time=%f\n",avtat*1.0/n);
}3


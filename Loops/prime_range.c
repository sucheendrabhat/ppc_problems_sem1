/*  Printing Prime numbers between a range  */
#include <stdio.h>
#include<math.h>

int main() {
    int n1,n2,i,j;

    printf("Enter Range  :");
    scanf("%d %d",&n1,&n2);

    for(i = n1;i<=n2;i++)
    {
        int isPrime = 1;
        for(j = 2;j<=sqrt(i);++j)
        {
                if(i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
        }
        if(isPrime  && i > 1)
            printf("\n \t%d",i);
    }



    return 0;
}

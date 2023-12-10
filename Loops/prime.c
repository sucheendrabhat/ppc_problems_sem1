#include <stdio.h>
#include <math.h>

int main()
{
    int i,num,flag=1;
    scanf("%d",&num);
    for(i = 2; i <= sqrt(num);++i){
        if(num%i == 0)
        {
            flag = 0;
            break;
        }
        if(flag)
        {
            printf("The  number  is Prime !");
        }
        else
            printf("The number is not prime ");
    }
    return 0;
}

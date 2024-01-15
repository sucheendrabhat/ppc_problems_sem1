#include <stdio.h>

int factorial(int n){
    int i , result = 1;
    for(i = 1; i <= n;i++){
        result *= i;
    }
    return result;
}
void reverseNum(int n){
    int temp,rem , rev = 0;
    temp = n;
    while(n != 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if(temp == rev){
        printf("The given number is Palindrome and reverse is %d ",rev);
    } else {
        printf("The given number is not a Palindrome and reverse is %d ",rev);
    }
}

void table(int n){
    for (int i = 1; i <= 10 ; ++i) {
        printf("%d x %d = %d\n",n,i,n*i);
    }
}
void oddSum(int n){
    int oddSum = 0 , evenSum = 0;
    for (int i = 0; i < n; i+=2) {
        evenSum+=i;
    }
    for (int i = 1; i < n; i+=2) {
        oddSum+=i;
    }
    printf("The sum of all odd numbers is %d",oddSum);
    printf("\n");
    printf("The sum of even numbers is %d",evenSum);
}
void factors(int n){
    for (int i = 1; i <= n; ++i) {
        if(n % i == 0){
            printf("\n%d",i);
        }
    }
}

void sumArray(){
    // print sum and average of numbers in an array
    int arr[50];
    int n,sum = 0;
    printf("Enter the number of elements (Max Limit = 50) : ");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        printf("Enter the elements : ");
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    int average = (sum / n);
    printf("The sum : %d and Average : %d ",sum,average);
}
int keyElement(int arr[100] , int n,int key){
    int i,flag = 0;
    for ( i = 0; i < n; ++i) {
        if(arr[i] == key){
            flag = 1;
            break;
        }
    }
    if(flag){
        printf("Successful at %d",i);
    } else {
        printf("Not successful");
    }
    
}
int largest(int arr[100], int n){
    int large = arr[0];
    for (int i = 0; i < n; ++i) {
        if(arr[i] > large){
            large = arr[i];
        }

    }
    return large;
}
int smallest(int arr[100],int n){
    int smallest = arr[0];
    for (int i = 0; i < n; ++i) {
        if(arr[i] < smallest){
            smallest = arr[i];
        }

    }
    return smallest;
}
void vowel(char c){
    switch (c) {
        case 'a':
            printf("It's is a vowel");
            break;
        case 'e':
            printf("It's is a vowel");
            break;
        case 'i':
            printf("It's is a vowel");
            break;
        case 'o':
            printf("It's is a vowel");
            break;
        case 'u':
            printf("It's is a vowel");
            break;
        default :
            printf("It's not a vowel");
    }
}
int main() {
    int n;
//    printf("Enter the number : ");
//    scanf("%d",&n);

    // printf("The factorial of the given number is : %d",factorial(n));
//    reverseNum(n);
//    table(n);
//    oddSum(n);
//int arr[100];
//    printf("Enter the number : ");
//    scanf("%d",&n);
//    for (int i = 0; i < n; ++i) {
//        printf("Enter the elements : ");
//        scanf("%d",&arr[i]);
//
//    }
//    int number ;
//    printf("Enter the number to search : ");
//    scanf("%d",&number);
//    keyElement(arr, n, number);
//    factors(n);
//    sumArray();
//    printf("\nAnswer - %d",largest(arr,n));
//    printf("\nAnswer - %d",smallest(arr,n));
char c;
printf("Enter the character :");
scanf("%c",&c);
    vowel(c);
return 0;
}

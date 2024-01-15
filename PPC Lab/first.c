#include <stdio.h>
#include <math.h>
#include <string.h>

// Function to calculate factorial of a number
int factorial(int n) {
    int i, result = 1;
    for (i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to check if a number is palindrome and print its reverse
void reverseNum(int n) {
    int temp, rem, rev = 0;
    temp = n;
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (temp == rev) {
        printf("The given number is Palindrome and reverse is %d ", rev);
    } else {
        printf("The given number is not a Palindrome and reverse is %d ", rev);
    }
}

// Function to print the table of a given number
void table(int n) {
    for (int i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

// Function to calculate the sum of odd and even numbers up to a given number
void oddSum(int n) {
    int oddSum = 0, evenSum = 0;
    for (int i = 0; i < n; i += 2) {
        evenSum += i;
    }
    for (int i = 1; i < n; i += 2) {
        oddSum += i;
    }
    printf("The sum of all odd numbers is %d", oddSum);
    printf("\n");
    printf("The sum of even numbers is %d", evenSum);
}

// Function to print factors of a given number
void factors(int n) {
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            printf("\n%d", i);
        }
    }
}

// Function to input an array, calculate sum and average, and print them
void sumArray() {
    int arr[50];
    int n, sum = 0;
    printf("Enter the number of elements (Max Limit = 50) : ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        printf("Enter the elements : ");
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int average = (sum / n);
    printf("The sum : %d and Average : %d ", sum, average);
}

// Function to search for a key element in an array
int keyElement(int arr[100], int n, int key) {
    int i, flag = 0;
    for (i = 0; i < n; ++i) {
        if (arr[i] == key) {
            flag = 1;
            break;
        }
    }
    if (flag) {
        printf("Successful at %d", i);
    } else {
        printf("Not successful");
    }
}

// Function to find the largest element in an array
int largest(int arr[100], int n) {
    int large = arr[0];
    for (int i = 0; i < n; ++i) {
        if (arr[i] > large) {
            large = arr[i];
        }
    }
    return large;
}

// Function to find the smallest element in an array
int smallest(int arr[100], int n) {
    int smallest = arr[0];
    for (int i = 0; i < n; ++i) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

// Function to check if a character is a vowel
void vowel(char c) {
    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("It's is a vowel");
            break;
        default:
            printf("It's not a vowel");
    }
}

void fibonacci(int n) {
    int firstNum = 0, secondNum = 1, current = 0;

    for (int i = 0; current <= n; ++i) {
        printf("%d \n", current);
        current = firstNum + secondNum;
        secondNum = firstNum;
        firstNum = current;
    }
}

int gcd(int n, int m) {
    if (m > n) {
        int temp = n;
        n = m;
        m = temp;
    }

    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}

void printPrime(int n1, int n2) {
    for (int i = n1; i <= n2; ++i) {
        int isPrime = 1;  // Assume i is prime until proven otherwise

        for (int j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                isPrime = 0;  // i is divisible by j, so it's not prime
                break;
            }
        }

        if (isPrime && i > 1) {
            printf("%d\n", i);
        }
    }
}

void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; ++i) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("%s", str);
}

int main() {
    int n;

    // Uncomment the following lines and input a value for 'n' if needed
    // printf("Enter the number : ");
    // scanf("%d",&n);

    // Uncomment the following lines to test specific functions
    // printf("The factorial of the given number is : %d",factorial(n));
    // reverseNum(n);
    // table(n);
    // oddSum(n);

    // Uncomment the following lines to test array-related functions
    // int arr[100];
    // printf("Enter the number : ");
    // scanf("%d",&n);
    // for (int i = 0; i < n; ++i) {
    //     printf("Enter the elements : ");
    //     scanf("%d",&arr[i]);
    // }
    // int number ;
    // printf("Enter the number to search : ");
    // scanf("%d",&number);
    // keyElement(arr, n, number);
    // factors(n);
    // sumArray();
    // printf("\nAnswer - %d",largest(arr,n));
    // printf("\nAnswer - %d",smallest(arr,n));

    //    char c;
    //    printf("Enter the character :");
    //    scanf(" %c", &c);  // Note: Added a space before %c to consume the newline character
    //    vowel(c);
    // fibonacci


    //    fibonacci(2558);
    //    printf("%d",gcd(25,36));
    //    printPrime(2,25);
    char str[100] = "Hello";
    reverseString(str);
    return 0;
}

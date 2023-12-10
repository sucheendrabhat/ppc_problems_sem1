#include <stdio.h>
#include <math.h>

int main()
{
    int marks;
    char grade ;
    printf("Enter the marks : ");
    
    scanf("%d",&marks);
    if(marks > 0 && marks <= 100)
    {
      switch (marks/10) 
    {
        case 0:
        case 1:
        case 2:
        case 3:
            grade = 'F';
            break;
        case 4:
        grade = 'E';
        break;
        case 5:
        grade = 'D';
        break;
        case 6:
        grade = 'C';
        break;
        case 7:
        grade = 'B';
        break;
        case 8:
        grade = 'A';
        break;
        case 9:
        case 10:
        grade = 'S';
        break;
        
        
    }
    printf("The Obtained Grade is %c ",grade);  
    }
    else 
        printf("Marks out of range ");
    

    return 0;
}

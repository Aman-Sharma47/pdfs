//  Write a program to print day of week using a switch case.
//  Monday is 1, and Sunday is 7

#include<stdio.h>
int main(){
    int x;
    printf("Enter the number from1 to 7 representing wwekdays:");
    scanf("%d",&x);

    switch (x)
    {
    case 1:
    printf("Sunday");  
        break;
    case 2:
    printf("Monday");  
        break;
    case 3:
    printf("Tuesday");  
        break;
    case 4:
    printf("Wednesday");  
        break;
    case 5:
    printf("Thursday");  
        break;
    case 6:
    printf("Friday");  
        break;
    case 7:
    printf("Saturday");  
        break;                 
    
    default: 
    printf("Enter correct number");
        break;
    }
    return 0;
}

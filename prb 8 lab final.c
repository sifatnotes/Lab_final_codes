#include<stdio.h>
    int main(void)

    {
        int number;

            printf("Enter the number: ");
            scanf("%d",&number);

            switch(number)
            {
            case 80 ... 100:
                printf("A+");
                break;
            case 75 ... 79:
                printf("A");
                break;
            case 70 ... 74:
                printf("A-");
                break;
            case 65 ... 69:
                printf("B+");
                break;
            case 61 ... 64:
                printf("B");
                break;
            case 56 ... 60:
                printf("B-");
                break;
            case 50 ... 55:
                printf("C+");
                break;
            case 45 ... 49:
                printf("C");
                break;
            case 40 ... 44:
                printf("D");
                break;
            case 1 ... 39:
                printf("Fail");
                break;

            default:
                printf("Invalid Number");
            }
    }

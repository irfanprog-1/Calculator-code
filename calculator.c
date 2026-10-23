#include <stdio.h>

int main(){
    int a, b;
    int i;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("1 add\n");
    printf("2 sub\n");
    printf("3 multi\n");
    printf("4 div\n");
    

    scanf("%d", &i);

    printf("enter a number: ");
    scanf("%d", &b);

    switch (i)
    {
    case 1:
        printf("%d", a+b);
        break;
    case 2:
        printf("%d", a-b);
        break;
    case 3:
        printf("%d", a*b);
        break;
    case 4:
        printf("%d", a/b);
        break;
        
    
    default:

        printf("enter a valid number");
        break;
    }
    return 0;
}
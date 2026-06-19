#include <stdio.h>

void swap(int *ptr1, int *ptr2)
{
    int temp;        
    temp = *ptr1;    
    *ptr1 = *ptr2;   
    *ptr2 = temp;    
}

int main() {
    int x, y;

    printf("enter the values of x and y:\n");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("%d %d", x, y);

    return 0;
}
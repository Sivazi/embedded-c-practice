#include <stdio.h>

int AreaofRec(int length, int breadth)
{
    int area;
    area = length * breadth;
    return area;
}

int main()
{
    int l = 10, b = 5;
    int area = AreaofRec(l, b);

    printf("%d\n", area);

    l=50,b=10;
    area = AreaofRec(l,b);
    printf("%d\n",area);
    
    getchar();
    return 0;
}
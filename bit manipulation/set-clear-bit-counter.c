#include<stdio.h>
void main()
{
    int num,m=0,n=0;
    printf("enter a number:\n");
    scanf("%d",&num);

    int pos=31;
   
  
l:
    printf("%d",num>>pos&1);
    if((num>>pos&1)==1)
    m++;
   else
    n++;
    pos--;
    if(pos>=0)
        goto l;
    printf("\n");
    printf("the no of set bits = %d\n",m);
    printf("the no of clear bits = %d",n);
getchar();
}

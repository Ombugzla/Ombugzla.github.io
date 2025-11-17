#include <stdio.h>
int product(int x, int y);
int main()
{
    int a,b,c;
    printf("Please input a number\n");
    scanf("%d", &a);
    printf("Please input another number\n");
    scanf("%d", &b);
    c=product(a,b);
    printf("Your product is %d\n",c);
    return 0;
}
int product(int x,int y)
{
    return x*y;
}
#include<stdio.h>
void sum();
void main()
{
    sum();
}
void sum()
{
    int n1,n2,sum=0;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);
    sum = n1 +n2;
    printf("sum=%d",sum);

}

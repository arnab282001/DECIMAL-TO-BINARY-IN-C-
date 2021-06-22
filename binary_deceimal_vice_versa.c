#include<stdio.h>
#include<math.h>
 void binary_decimal(int n)
{
  
  int  k=0,i=0;
    while(n>0)
    {
        k=k+((n%10)*pow(2.0,i++));
        n=n/10;
    }
    printf("decimal is %d",k);
    return;
}
void decimal_binary(int n)
{ 
    double k=0,i=0;
    while(n>0)
    {
        k=k+(n%2)*(pow(10,i++));
        n=n/2;

    }
    printf("binary is %d",(int)k);
}
int main()
{
    int n,i=0;
    printf("enter the numner\n");
    scanf("%d",&n);
    printf("press 1 to convert from decimal to binary and 2 to convert binary to decimal\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1:
        decimal_binary(n);
        break;
        case 2:
        binary_decimal(n);
        break;

        default:
        printf("wrong input\n");


    }
    return 0;
    

}
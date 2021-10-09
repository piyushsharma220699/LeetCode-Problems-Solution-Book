#include <stdio.h>
void main()
{
    int  j, sum = 0;

    printf("The first 10 natural number is :\n");
 
    for (j = 1; j <= 10; j++)
    {
        sum = sum + j;
        printf("%d ",j);    
    }
    printf("\nThe Sum is : %d\n", sum);
}

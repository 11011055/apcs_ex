#include <stdio.h>

// Recursive function
void fun(int n)
{
    if (n > 0) {
        // First statement in the function
        fun(n - 1);
        printf("%2d * %d = %d\n", n,1,n*1);
        printf("%2d * %d = %d\n", n,2,n*2);
        printf("%2d * %d = %d\n", n,3,n*3);
        printf("%2d * %d = %d\n", n,4,n*4);
        printf("%2d * %d = %d\n", n,5,n*5);
        printf("%2d * %d = %d\n", n,6,n*6);
        printf("%2d * %d = %d\n", n,7,n*7);
        printf("%2d * %d = %d\n", n,8,n*8);
        printf("%2d * %d = %d\n", n,9,n*9);
        printf("\n");
    
    
    }
}

// Driver code
int main()
{
    int x = 9;
    fun(x);
    return 0;
}

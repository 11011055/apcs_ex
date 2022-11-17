#include <iostream>
#include <stdio.h>
using namespace std;
int fun(int x){
    int y;
    
    if(x<0){
     y = 1;
    }else if(x>0){
     y = 3;
    }else if(x == 0){
     y = 5;
    }
    return y;
}

int main(void){
    int a,b;
    scanf("%d",&a);
    b= fun(a);
    printf("y = %d\n",b);
}

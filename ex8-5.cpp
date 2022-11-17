#include <iostream>
#include <stdio.h>
using namespace std;
int fun(int x){
    int l, h, y;
    
    printf("please input long:");
          scanf("%d",&l);
   printf("please input h:");
          scanf("%d",&h);
    if(l>=0){
    printf(" y = %d \n",l*h);
    }else
    return y;
}

int main(void){
    int a,b;
    scanf("%d",&a);
    b= fun(a);
    printf("y = %d\n",b);
}

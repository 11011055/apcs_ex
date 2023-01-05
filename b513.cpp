#include <stdio.h>

void is_prime(int num){
     int i;
     int not_prime  = 0;
     for(i=3;i<num/2;i+=2){
    
        if(num % i==0){
            printf("N");
            not_prime = 1;
            break;
        }
    }
    if(not_prime != 1){
            printf("Y");
    } 
  
}


int main(void){
 int i, n,num;
    //("please input a number");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num);
        is_prime(num);
    }
    return 0;
}

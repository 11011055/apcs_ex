#include <iostream>
using namespace std;
int main(){
    int a,b,max;
    
    printf("please input a:");
    scanf("%d",&a);
    printf("please input b:");
    scanf("%d",&b);
    if(a>b){
        //printf(" a > b \n");
        max=a;
    }else{
        //printf(" a < b \n");
        max=b;
    }
    printf("max=%d \n",max);
    cout<<"Hello World";
    return 0;
}

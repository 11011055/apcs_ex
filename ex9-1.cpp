#include <iostream>
using namespace std;
#if 1
int F(int n){
    int tmp=1;
    for(int i=n;i>=1;i--)
        tmp*=i;
    return tmp;
}
#endif
#if 0 
sum(n) = n+ (n-1) + (n-2) + ....+ 3 + 2 + 1 
s(n) = n + s(n-1)
#else
int S(int n) {
    if (n>=1)
    return n*S(n-1);
    else
        return 1;
}
#endif
int main(){
    int i;
    for(i=1;i<=10;i++){
        printf("%d! = %d\n",i,F(i));
    }
    cout<<"Hello World 1;" << F(1) <<" 2;" << F(2);
    return 0;
}

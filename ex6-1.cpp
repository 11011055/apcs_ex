#include <iostream>
using namespace std;
int main(){
   int s;
   printf("please input a score :");
   scanf("%d",&s);s/=10;
   #if 0 
   if(s>80){
       printf("your score level is A\n");
   }else if(s<=80 && s>70){
       printf("your score level is B\n");
   }else if(s<=70 && s>60){
       printf("your score level is C\n");
   }else if(s<=60 && s>40){
       printf("your score level is D\n");
   }else{
       printf("your score level is E\n");
   }
   #else
   switch(s){
       case 1:printf("your score level is E%d\n",10);
       break;
       case 2:printf("your score level is E%d\n",10);
       break;
       case 3:printf("your score level is E%d\n",10);
       break;
       case 4:printf("your score level is E%d\n",10);
       break;
       case 5:printf("your score level is D%d\n",10);
       break;
       case 6:printf("your score level is C%d\n",10);
       break;
       case 7:printf("your score level is B%d\n",10);
       break;
       case 8:printf("your score level is A%d\n",10);
       break;
       case 9:printf("your score level is A%d\n",10);
       break;
       case 10:printf("your score level is A%d\n",10);
       break;
      
      
       default:printf("please input again\n");
       break;
   }
   #endif
   cout<<"Hello world\n";
   return 0;
}

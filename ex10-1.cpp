#include <iostream>

using namespace std;
void display_1(int* age,int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", age[i]);
        age[i] = age[i] + 10;
     }
    printf("\n%p\n",age);
}
void display(int age1, int age2){
    printf("%d %p\n", age1,&age1);
    printf("%d %p\n", age2,&age2);
    
}

int main()
{
    int i,ageArray[] = {2, 8, 4, 12, 24};
    
 //passing second and third elements to
 //display()
    
    display(ageArray[1], ageArray[2]);
    printf("%p \n",&ageArray[1]);
    printf("%p \n",&ageArray[2]);
    display_1(ageArray, 5);
    printf("%p \n",ageArray);
    
    for(i=0;i<10;i++){
        printf("%d ", ageArray[i]);
     }
    
    return 0;
}

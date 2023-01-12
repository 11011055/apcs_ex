#include <iostream>
using namespace std;
struct Distance{
    int m;
    float cm;
    
};

int main() {
    struct Distance d1, d2;
   int len;
   cin >> len;
   d1.m = 1.63;  
   d1.cm = 63;
   //d1.cm; 100 == d1.m; 1;
   
   cout<<"this man is " << d1.m << "meter " << d1.cm << "cm" << " tall" << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
//<< - cout and >> = cin (insert/integer/etc)
double x,y,sum,min,times,dev;
cout << "Enter two numbers"<<endl;
cin>>x>>y; 
//If this was above Enter 2 numbers, it would completely go wrong.
sum = x + y;
if (x>y) 
    min = x-y;
    else 
    min= y - x; 
//A way to make subtraction equal a whole number instead of a negative number
times = x*y;
dev = x/y;
cout<<"sum="<<sum<<endl;
cout<<"min="<<min<<endl;
cout<<"times="<<times<<endl;
cout<<"dev="<<dev<<endl;
return 0;}
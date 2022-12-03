#include <iostream>
using namespace std;
int main () {
long long x, y;

cout << "Welcome to Kalculator: Size! Enter a number."<<endl;
cin>> x;
cout << "Great! Now enter another number, lol"<<endl;
cin>> y;

if (x > y)
cout << "x = "<< x <<"is greater than y = "<< y<<" "<<endl;
else if(x<y)
cout << "y = "<< y<<" " <<"is greater than  x = " <<x<<endl;
else
cout << "y = "<< y<<" " <<"is equal  x = " <<x<<endl;
return 0; }
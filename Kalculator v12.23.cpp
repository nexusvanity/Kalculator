// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    float addition, subtraction, division, multiplcation;
    int x, y, c;
    double mody;
     cout<<"Sup! Welcome to the best Kalculator! Please, enter how many times you want to make a operation"<<endl;
     cin>>c;
     for(int i=0; i<= c; i++){
    cout << "Enter two digits"<<endl;
    cin>>x>>y;
       addition = x + y;
    if (x > y)
    subtraction = x - y;
    else subtraction = y - x;
    division = x / y;
    multiplcation = x * y;
    mody = x % y;
    cout << "Add ="<<addition<<endl;
    cout<<"subtraction ="<<subtraction<<endl;
    cout<<"Division ="<<division<<endl;
    cout<<"Multiplcation ="<<multiplcation<<endl;
    cout<<"Graph ="<<mody<<endl;}


    return 0;
}

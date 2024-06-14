#include <iostream>
using namespace std;
int main () {
int x;
cout<<"enter first number:"<<endl;
cin>>x;

int y , m;
cout<<"the 2nd and value for taking modulus \n ";
cin>>y>>m;
int Z = (x*y) % m;
cout <<"output is : " <<Z;
}
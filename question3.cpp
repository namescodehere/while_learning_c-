//

#include <iostream>
using namespace std;
int main () {
    int principal, rate, time, SI;
    cin>>principal;
    cin>>rate;
    cin>>time;

    SI =  (principal * rate* time)/100;
    cout<<"the si = "<<SI;
}
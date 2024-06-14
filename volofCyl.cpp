#include <iostream>
using namespace std;
int main () {
    int radius, height;
    cout<<"enter radius and height of the cylinder:" <<endl;
    cin>>radius;
    cin>>height;
    float volume = 0;
    volume = 3.14*radius*radius*height;
    cout<<"the volume of the cylinder is:" <<volume;

}

// wap to overload volume function for cube, cylinder and rectangular box



#include <iostream>
#include <cmath>

using namespace std;

inline void volume(int l, int b, int h) {
    cout<<"volume="<<l * b * h<<endl;
}

inline void volume(int r, int h) {
    cout<<"volume="<<3.14 * r * r * h<<endl;
}

inline void volume(int lb) {
    cout<<"volume="<<pow(lb,3)<<endl;
}

int main()
{
    int l,b,h,r,lb; 


    cout<<"Enter the length and breadth and height of rectangular box: ";
    cin>>l>>b>>h;

    cout<<"Enter the Length of cube: ";
    cin>>lb;


    cout<<"Enter the radius and height of cylinder: ";
    cin>>r>>h;


    volume(lb);
    volume(l,b,h);
    volume(r,h);

    return 0 ;
}
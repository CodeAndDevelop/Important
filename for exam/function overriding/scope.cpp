#include<iostream>
using namespace std;

class A{
    public: 
     void show()
    {
        cout<<"Class A"<<endl; 
    }
};

class B: public A{
    public:
    void show()
    {
        cout<<"Class B"<<endl; 
    }
};

int main()
{

    B b; 

    b.A::show(); 

    

    return 0; 
}



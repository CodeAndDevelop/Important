#include<iostream> 

using namespace std; 



class A{


    public: 
    A()
    {
        cout<<"Class A"<<endl; 
    }
}; 

class B:public A{


    public: 
     B()
    {
        cout<<"Class B"<<endl; 
    }
}; 


class c:public B{

    public: 
 c()
    {
        cout<<"Class C"<<endl; 
    }

}; 


int main()
{

    c cas; 

    cout<<endl; 
    B bas; 

    cout<<endl; 
    A la; 

    cout<<endl; 


    return 0; 
}
#include<iostream>

using namespace std;

class length{

    int cm , meter; 

    public: 
    length(int m=0 , int c=0)
    { cm = c; meter = m; }


    bool operator >(length l){
           int cm1, cm2; 

           cm1= meter*100 + cm; 
           cm2= l.meter*100 + l.cm;

           if(cm1>cm2)
           {
            return true; 
           }
           else
           {
            return false; 
           }
    }
}; 

int main(){
        length l1(10,2), l2(5,3); 
    
        if(l1 > l2)
            cout<<"l1 is greater"<<endl; 
        else
            cout<<"l2 is greater"<<endl;
    return 0; 
}
#include<iostream>

using namespace std; 

template<class T, int n> 
class Array{
    T arr[n]; 
   

    public : 
    Array()
    {
        for(int i=0; i<n; i++)
        {

            cout<<"Element" <<i+1<<": "; 
            cin>>arr[i]; 
        }
    }

    void max(); 


};
template<class T, int n> 
void Array <T,n> ::max()
{
    T max=arr[0]; 

    for(int i=0;i<n; i++)
    {
        if(arr[i]>max)
        {
             max=arr[i]; 
        }
    }
    cout<<"Maxiumu value="<< max<<endl; 
    
}

int main()
{

    Array<int,5> a; 
    Array<float,5> b; 


    a.max(); 
    b.max(); 

    return 0; 
}
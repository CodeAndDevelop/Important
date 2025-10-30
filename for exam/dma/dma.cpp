#include<iostream> 

using namespace std;


int main()
{
    int i,sum=0;
    float avg;  

    int*ptr=new int[10]; 

    for(i=0;i<10;i++)
    {
        cout<<"Enter value for element "<<i+1<<": ";
        cin>>ptr[i];

        sum=sum+ptr[i]; 
    }

    avg=sum/10.0;

    cout<<"Avg:"<<avg<<endl; 
    
    delete[] ptr;
    return 0; 
}
#include<iostream> 

using namespace std;


int sum(int*ptr)
{
    int i,sum=0; 
    for(i=0;i<10;i++)
    {
        cout<<"Enter value for element "<<i+1<<": ";
        cin>>ptr[i];

        sum=sum+ptr[i]; 
    }
    return sum;
}
int main()
{
    int i;
    float avg;  

    int*ptr=new int[10]; 



    avg=sum(ptr)/10.0;

    cout<<"Avg:"<<avg<<endl; 
    
    delete[] ptr;
    return 0; 
}
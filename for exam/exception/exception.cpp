#include<iostream> 
#include<cmath> 

using namespace std;

void sqrt(){
  
    int num; 

    cout<<"Enter the number: "; 
    cin>>num; 

   
try{
    if(num>0)
    {
        cout<<"Squre Root= "<<sqrt(num); 
    }
    else{

        throw num; 
    }

    
}
catch(int)
{
    cout<<"Negative Number: "; 
}

}


int main()
{
    sqrt(); 
    return 0; 
}
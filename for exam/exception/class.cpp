#include<iostream> 
#include<string.h> 
#include<math.h>

using namespace std; 


class myexception{

    char des[50]; 
    int num; 
    public:
     myexception(int n=0, char d[50]="|")
    {
        

        num=n; 
        strcpy(des,d); 
    }


    double squre_root()
    {
        if(num<0)
        {
            throw myexception(num,"Negative Number"); 
        }
        else
        return sqrt(num); 
    }

    void display()
    {
        cout<<"Error: "<<des<<"  "<< num<<endl; 
    }

 
}; 

int main()
{
    myexception e(-10); 

       try{
     double result=e.squre_root(); 
     cout<<"square root"<<result<<endl; 
        
    }

    catch(myexception ex)
    {
        ex.display(); 

    }
    
    return 0; 
}
#include<iostream> 
#include<fstream> 

using namespace std;


class student{
    char name[20]; 
    int roll; 
    char address[20]; 
public:
    void getdata(){
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>roll;
        cout<<"Enter address: ";
        cin>>address;
    }
    void putdata(){
        fstream file("student.dat", ios::app|ios::binary);
        if(!file){
            cout<<"Error in opening file"<<endl;
            return;
        }
       file.write(reinterpret_cast<char*>(this), sizeof(*this));
        file.close();
    }


    void search(int r)
    {

      fstream file("student.dat",ios::in|ios::binary); 
      bool found=false;  


      while(file.read(reinterpret_cast<char*>(this),sizeof(*this)))
      {
        

        if(roll==r)
        {
            found=true; 
            cout<<"Found:";
              cout<<"Name="<<name <<endl <<"Address="<<address<<endl<<"Roll= "<<roll<<endl; 

            found=true; 

             
            break; 
        }
      }

      file.close(); 
    }


    void update(int r)
    {
      fstream file("student.dat",ios::in|ios::out|ios::binary); 
     
      bool found=false;  


      while(file.read(reinterpret_cast<char*>(this),sizeof(*this)))
      {
        

        if(roll==r)
        {
            found=true; 
            getdata(); 

            file.seekp(-sizeof(*this),ios::cur);
            file.write(reinterpret_cast<char*>(this),sizeof(*this));
           
         
        }

      }

      file.close(); 

    }



    void display()
    {
        fstream file("student.dat",ios::in|ios::binary); 
         if(!file){
            cout<<"Error in opening file"<<endl;
            return;
        }
        while(file.read(reinterpret_cast<char*>(this),sizeof(*this)))
        {

             cout<<"Name="<<name<< " " <<"Roll="<<roll << " "<<"Address= "<<address<<endl; 

        }
        file.close(); 
    }



  



};


int main()
{
    student s; 

    int choice,roll; 

    int n; 

    
    do{
      
      cout<<"Enter 1 to enter detalis and 2 to serach by roll no 3 to upadte  4 to display  5 to exit: "; 
      cin>>choice;

    switch(choice)
    {
        case 1: cout<<"How many record do you want to provide: "; 
        cin>>n; 

        for(int i=0; i<n; i++)
        {
            s.getdata(); 
            s.putdata(); 
        }
        break; 


        case 2: 
        cout<<"Enter roll number to search: "; 
        cin>>roll; 
        s.search(roll); 

        break; 

         case 3: 
        cout<<"Enter roll number to search: "; 
        cin>>roll; 
        s.update(roll); 
        break; 


        case 4: 
        s.display(); 

        break; 

        default: cout<<"Exiting...."<<endl;
        break;
        
    }
  }while(choice!=5);
}
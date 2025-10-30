#include<iostream>
#include<cstring>

using namespace std; 

class student
{
    int id;
    char name[20];
    float marks; 

    public:
        void setdata(int i, const char*n, float m)
        {
            id=i;
            strcpy(name,n);
            marks=m; 
        }

        void showdata()
        {
            cout<<"Id:"<<id<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Marks:"<<marks<<endl; 
        }
};
int main()
{
    student *p =new student[3];
    for(int i=0;i<3;i++)
    {
        int id;
        char name[20];
        float marks;

        cout<<"Enter details for student "<<i+1<<endl;
        cout<<"Id: ";
        cin>>id;
        cout<<"Name: ";
        cin>>name;
        cout<<"Marks: ";
        cin>>marks;

        p[i].setdata(id,name,marks);
    }

    cout<<"Student Details:"<<endl;
    for(int i=0;i<3;i++)
    {
        p[i].showdata();
    }

    delete[] p;
    return 0;
}
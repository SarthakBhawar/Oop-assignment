/*A hospital management system needs to streamline  its operation by organizing various types of personal and services. The system should manage organizing system should manage  different roles such as doctors,
nurses and administratie staff. Create different classes like Person, Doctor, Nurse,administrative staff .use the concept of inheritance .*/

#include<iostream>
using namespace std;
int rno;

class person
{
public:
string des,name;
int id,sal;
virtual void accept()=0;
virtual void display()=0;  
};

class doctor: public person
{
public:
void accept();
void display();
};

class nurse: public person
{
public:
void accept();
void display();
};

class astaff:public person
{
public:

void accept();
void display();
};

void doctor::accept()
{
    cout<<"\n enter the Id,Name, Designation And Salary";
    cin>>id>>name>>des>>sal;
}

void nurse::accept()
{
    cout<<"\n enter the Id,Name, Designation And Salary";
    cin>>id>>name>>des>>sal;
}

void astaff::accept()
{
    cout<<"\n enter the Id,Name, Designation And salary";
    cin>>id>>name>>des>>sal;
    
}

void doctor::display()
{
    cout<<id<<"\n"<<name<<"\n"<<des<<"\n"<<sal<<"\n";
}

void nurse::display()
{
    cout<<id<<"\n"<<name<<"\n"<<des<<"\n"<<sal<<"\n";
}

void astaff::display()
{
    cout<<id<<"\n"<<name<<"\n"<<des<<"\n"<<sal<<"\n";
}

int main()
{
    doctor d;
    astaff p;
    nurse s;

    d.accept();
    d.display();

    s.accept();
    s.display();

    p.accept();
    p.display();

 return 0;
}


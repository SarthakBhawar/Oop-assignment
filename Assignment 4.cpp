/*Create a C++ program to manage the student information using multiple inheritance. The program should 
1) Accept & display student details
2) Accept display subject & subject marks
3) Accept & display sport name and sport grade
4> Show all in table like format*/

#include<iostream>
using namespace std;
int n;
class student{
    public:
    int rollno;
    string name,prn;
    void accept1();
    void display();
};
void student::accept1(){
    cout<<"enter the name and prn no";
    cin>>name>>prn;
    cout<<"enter the rollno";
    cin>>rollno;
}
void student::display(){
    cout<<rollno<<"\t"<<name<<"\t"<<rollno;
}
class test:virtual public student{
public:
string  sub[5];
int cia1[5],cia2[5],ese1[5];
void accept2();
void display();
};
void test::accept2(){
    cout<<"enter the subject names for each candidate";
    for(int i=0;i<5;i++)
    {
        cin>>sub[i];
    }
    cout<<"enter the cia1 marks out of 20 for each student";
     for(int i=0;i<5;i++)
    {
        cin>>cia1[i];
    }
     cout<<"enter the cia2 marks out of 20 for each student";
    for(int i=0;i<5;i++)
    {
        cin>>cia2[i];
    }
      cout<<"enter the ese1 marks out of 60 for each student";
    for(int i=0;i<5;i++)
    {
        cin>>ese1[i];
    }
    
}
void test::display(){
    for(int i=0;i<5;i++){
    cout<<sub[i]<<"\t"<<cia1[i]<<"\t"<<cia2[i]<<"\t"<<ese1[i]<<"\n";
}
}
class sport:virtual public student{
    public:
    int sport;
    void accept3();
    void display();
};
void sport::accept3(){
    cout<<"enter the sports marks";
    cin>>sport;
}
void sport::display(){
    cout<<sport;
}
class result:public test,public sport{
    public:
    int subtotal[5];
    int overall=0;
    int percentage;
    void total();
    void percent();
    void displayall();
};
 result a[10];
void result::total(){
    for(int i=0;i<5;i++){
subtotal[i]=cia1[i]+cia2[i]+ese1[i];
overall+=subtotal[i];
}
overall+=sport;
    }
void result::percent(){
    for(int i=0;i<5;i++)
    {   
        percentage=(float(overall)/530)*100;
    }
}
void result::displayall(){
    cout<<"NAME\t<ROLLNO\t<PRN\n";
    cout<<name<<"\t"<<rollno<<"\t"<<prn<<"\n";
        cout<<"\nSUBJECTS"<<" "<<"CIA1\tCIA2\tESE1\tTOTAL\n";
   for(int i=0;i<5;i++){
    cout<<sub[i]<<"\t"<<cia1[i]<<"\t"<<cia2[i]<<"\t"<<ese1[i]<<"\t"<<subtotal[i]<<"\t"<<"\n";
   }
    cout<<"sport"<<"\t"<<"0"<<"\t"<<"0"<<"\t"<<sport<<"\t"<<sport<<"\n";
    cout<<"total percent is "<<percentage<<"\n";
}
int main(){
    cout<<"enter the no of records\n";
    cin>>n;
    for(int i=0;i<n;i++){
    a[i].accept1();
    a[i].accept2();
    a[i].accept3();
    a[i].total();
    a[i].percent();
    a[i].displayall();
    }
return 0;
}

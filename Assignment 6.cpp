/*
Create a c++ class name TV that has data member to hold  model numbers screen size and price number function include overloaded insertion and execution operator.
If more than 4 digits are entered for the model number if screen size is smaller than 12 or  greater than 70 inches or if the price is negative or over 
$5000 then throw an integer . W rite  a main function  that instantiates TV Object , allows users to enter data and display the data members.  If an exception
is caught replace all data ember value with zero values.
*/

#include<iostream>
using namespace std;

class television
{
    int mn, pz, sz;
public:
    friend ostream& operator<< (ostream &vout,television &t);
    friend istream& operator>> (istream &vin, television &t);
};

istream& operator>>(istream &vin, television &t)
{
    cout << "Enter the model number, size, and price: ";
    vin >> t.mn >> t.sz >> t.pz;

    try {
        
        if (t.mn > 9999 || t.sz > 70 || t.sz < 12 || t.pz < 0 || t.pz > 5000) {
            throw "Invalid input!";
        }
    }
    catch (const char* e) {
    
        cout << "Exception caught: " << e << endl;
        t.mn = 0;  
        t.sz = 0;
        t.pz = 0;
    }

    return vin; 
}
ostream& operator<<(ostream &vout, television &t)
{
    vout << "Model number: " << t.mn << endl;
    vout << "Size: " << t.sz << " inches" << endl;
    vout << "Price: $" << t.pz << endl;
    return vout; 
}

int main()
{
    television tv;
    cin >> tv;  
    cout << tv; 
    return 0;
}

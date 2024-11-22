/*
Write a function template selection sort . Writeba program that inputs sorts and outputs the sorted arrays of various types such as integer and float and character.
*/


#include <iostream>
using namespace std;
int n;
template <class T>
void selsort(T a[], int n)
{
    T temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}
int main(){
    int ch;
cout<<"enter the size of array";
cin>>n;
int a[n];
cout<<"enter the array elements of integer type";
for(int i=0;i<n;i++){
    cin>>a[i];
}
float b[n];
cout<<"enter the array elements of float  type";
for(int i=0;i<n;i++){
    cin>>b[i];
}
char c[n];
cout<<"enter the array elements of character type";
for(int i=0;i<n;i++){
    cin>>c[i];
}
cout<<"1.ineteger sorting\n2.float sorting \n3.character sorting";
cin>>ch;
switch(ch){
    case 1:selsort(a,n);
    break;
    case 2:selsort(b,n);
    break;
    case 3:selsort(c,n);
    break;
}
return 0;
}


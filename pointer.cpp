#include<iostream>
using namespace std ;

int main(){
int a=3;
int*b=&a;
//&---->(Address of )operator (Determine the address of a variable.)
cout<<"the address of a "<<&a<<endl;
cout<<"the address of a "<<b<<endl;

//*---->(Value at ) dereference operator (Access the value of an address)
cout<<"the value at b "<<*b<<endl;

return 0;
}
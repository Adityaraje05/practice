#include<iostream>
using namespace std ;

// Create a structure variable called adi
struct 
{
int no;
char fav;
float cgpa;

}IIT;

int main(){

// Assign values to members of IIT
 adi.no = 2117;
IIT.fav = 'x' ;
IIT.cgpa = 8.1;

// Print members of IIT
cout <<"value is::"<<IIT.no<<"\n";
cout <<"value is::"<<IIT.fav<<"\n";
cout <<"value is::"<<IIT.cgpa<<"\n";

return 0;
}
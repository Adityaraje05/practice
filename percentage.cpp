#include<iostream>

using namespace std ;

int main(){
int p,c,b,m,co;
int total , percentage;
cout<<"enter marks of physics : ";
cin>>p;
cout<<"enter marks of chemistry : ";
cin>>c;
cout<<"enter marks of biology : ";
cin>>b;
cout<<"enter marks of maths : ";
cin>>m;
cout<<"enter marks of computer : ";
cin>>co;
total=p+c+b+m+co;
cout<<"total : "<< total;
percentage=total/5;
cout<<"\n percentage : "<< percentage;
if (percentage >= 90)
{
 cout<<"Grade A : ";
}
else if (percentage >= 80 )
{
   cout<<"Grade B: "; 
}
else if (percentage >= 70 )
{
   cout<<"Grade B: "; 
}
else if (percentage >=60)
{
   cout<<"Grade C : "; 
}
else if (percentage >=40)
{
   cout<<"Grade D : "; 
}
else {
  cout<<"Grade F: ";   
}
return 0;
}
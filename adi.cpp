#include<iostream>
using namespace std ;

int main(){
    string one[]{"","one","two","three","four","five","six","seven","eight","nine"};
   int a,b;
 cout<<"Enter A \n";
 
    cin>>a;
   cout<<"Enter B \n";

        cin>>b;
    for(int i=a;i<=b;i++){
        if(i<=9){
            cout<<one[i]<<endl;
        }
        else if(i%2==0){
            cout<<"even"<<endl;
        }
        else {
            cout<<"odd"<<endl;
        }
    }         

return 0;
}
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
class Complex{
   
   int a , b;
   public:
   Complex(){ // Default Contructor 

       cout<<"Constructor is created\n";
   }
   Complex(int x ,int y){ // parameterized Constructor
       a=x;
       b=y;
       cout<<a<<" "<<b<<"\n";
   }
   Complex(string s){  // This is constructor overloading first parameter constructor is integer type 
                       // second is string type
       cout<<s;
   }
};
int main(){
 Complex c2;
 Complex c3(2,3);
 Complex c4("aj");
 return 0;
}
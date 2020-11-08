#include<conio.h>
#include<bits/stdc++.h>
using namespace std;
class Complex{
   
   int a , b;
   public:
   Complex(){ 

       cout<<"Destructor is called\n"; // It is called when object is going to destroy
   }
  
};
int main(){
 Complex c2;
 return 0;
}
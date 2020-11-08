#include<iostream>
using namespace std;
class static_members
{
    private:
    int balance;
    static int rate;
    public:
    void set_balance(int a){
        balance=a;
        
    }
    static void set_rate(int b){
        rate=b;
    }
    void show_data(){
        cout<<balance<<" "<<rate;
    }
};

int static_members::rate=3;
int main()
{
    static_members c1,c2;
    c1.set_balance(100;
    static_members ::set_rate(19); // Here I am Calling static member Function with class name
                                   // Also I can call this with the help of object of the class
    c1.show_data();
   return 0;

}
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
    void set_rate(int b){
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
    c1.set_balance(100);
    c1.set_rate(6);
    c1.show_data();
   return 0;

}
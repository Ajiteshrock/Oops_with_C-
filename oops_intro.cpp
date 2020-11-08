#include<iostream>
using namespace std;
class Ajitesh
{
    private:
      int x,y;
    public :
    void set_data(int a , int b)
    {
        x=a;  y=b;
    }
    void show_data()
    {
        cout<<x<<" "<<y<<"\n";
    }
    Ajitesh add(Ajitesh C)
    {
        Ajitesh temp;
        temp.x = C.x + x;
        temp.y = C.y + y;
        return temp;
        
    }
};

int main()
{
    
    Ajitesh c1, c2, c3;
    c1.set_data(3,4);
    c2.set_data(5,6);
   
    c3=c2.add(c1);
    c3.show_data();
    return 0;
 
}
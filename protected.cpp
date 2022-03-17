using namespace std;
#include <iostream>
class Parent {  
  public:  
    Parent () //Constructor
    {
        cout << "\n Parent constructor called\n" << endl;
    }
  public:
    ~Parent() //Dtor
    {
        cout << "\n Parent destructor called\n" << endl;
    };
};

class Child : public Parent 
{
  public:
    Child () //Ctor
    {
        cout << "\nChild constructor called\n" << endl;
    }
    protected:
    ~Child() //dtor
    {
        cout << "\nChild destructor called\n" << endl;
    }
};

int main ()
{
    Parent * p2 = new Child;
    //Child c1;          
   delete p2;
    return 0;
}
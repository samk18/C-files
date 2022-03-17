#include <iostream>
using namespace std;

class A{
    
    public:
     A(int a) { 
         std::cout << "hello2" << std::endl;
         id = 0;
         }
     void setId(int num) { id  = num;}
     int getId() { return id; }
    
    private:
     int id;
};

class B:A{
    
    public:
       A obj1;
       A obj2;
    
      B()
      {
 std::cout << "hello1" << std::endl;
      }
};

int main()
{
   

    B b;
    B b3;
    
    return 0;
}
#include <memory>
#include <iostream>
#include <vector>
class Interface
{
protected:
   int id=2;
   void add2()
   {
         std::cout << "Interfdwdwace111()\n";
   }
   ~Interface()
    {
        std::cout << "1 ~Interface111()\n";
    }; 
public:
    int i=3;
    virtual void add()
    {
         std::cout << "add method\n";
        std::cout << i;
         std::cout << "add method\n";
    }
};
class ImplementationBase : public Interface
{
public:
    int i=4;
    ImplementationBase()
    {
       
       
    };
    ImplementationBase(const char* name)
    {
       
    };
  /*   ~ImplementationBase()
    {
  
   
        std::cout << "2 ~ImplementationBase()\n";
    }; */
     
};
class A: public ImplementationBase
{
public:
   A(const char* name){
      
   }
    ~A()
   {
       std::cout << " 45553 11234 A destructor\n";
   };
};
class Implementation : public A
{

public:
    int i=2; 
    Implementation(int i)
        : i(i),A("re")
    {   
     
    };
     ~Implementation()
    {


        std::cout << "4 ~Implementation() " << mName << "\n";
    };
     virtual void add()
    {
       
        std::cout << i;
    } 
private:
    const char* mName;
};
static std::unique_ptr<A> ptr;

int main()
{
    ImplementationBase *ptr1;
    
 ptr = std::make_unique<Implementation>(20);
 std::cout << "theaddress \n";

 ptr->add();
 ptr1 = ptr.get();
 std::cout << "theaddress \n";

 ptr1->add();
 delete ptr1;
   // Implementation *ba = new Implementation("Instance 1");
  
  //  std::cout << ba->i;
 //   delete ba;
   
}
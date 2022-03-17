using namespace std;
#include <iostream>
// Parent class having virtual
// function disp()
class Parent {
public:
    // Create virtual function
    virtual void disp()
    {
        cout << "This is the public disp"
             << " method of Parent class" << endl;
    }
     Parent() {   cout << "The key is 123467 ";};
};
 
class A
{
public:
    // Constructor of the child class
    A() {   cout << "The key is 1234";};
};

// Child class inherit to parent class
class Child : public Parent {
private:
    int secret_key;
    A s;
    // Private method which will be called
    // Override the method of parent class
    void disp()
    {
        cout << "This is the private disp "
             << "method of child class "
             << endl;
        cout << "The key is "
             << secret_key << endl;
    }
 
public:
    // Constructor of the child class
    Child(int key)  { secret_key = key; }
};
 
// Driver Code
int main()
{
    // Create object of child class
   // Child child(1019);
 
    // Upcasting
    Parent* obj = new Child(1019);
    //Child m(12);
    // Function call of child class
    obj->disp();
    return 0;
}
#include <iostream>
#include <memory>
#include <bits/stdc++.h>
class Task
{
 public:
    std::unique_ptr<int> mId;
    int i=4;
  
    Task(int id ) 
    {
        mId=std::make_unique<int>();
      
        *mId=id;
        std::cout<<"Task::Constructor"<<std::endl;
    };
    ~Task()
    {
        std::cout<<"Task::Destructor"<<std::endl;
    };
};

int main()
{
  
 

   
    Task *a = new Task(23);
     
    std::cout<<*(a->mId)<<std::endl;
   
    std::unique_ptr<Task> x;
    // Create a unique_ptr object through raw pointer
    {
    std::unique_ptr<Task> taskPtr=std::make_unique<Task>(23);
 std::cout<<taskPtr->i<<std::endl;
 //x=std::move(taskPtr);
    }
   std::cout<<"out of scope "<<std::endl; 
// std::cout<<x->i<<std::endl;
    int n = 1;
    std::cout<<""<<std::endl; 
    
    return 0;
}
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
    int* px;
    
    px = (int*)malloc(sizeof(int));
    *px = 3;
   
   
    Task *a = new Task(23);
      std::cout<<"Task::Destrucfqehkftor"<<std::endl;
    std::cout<<*(a->mId)<<std::endl;
    // Create a unique_ptr object through raw pointer
    std::unique_ptr<Task> taskPtr=std::make_unique<Task>(23);
    int n = 1;
    
    
    std::vector<std::pair<int,std::unique_ptr<Task>>> foo;
   foo.push_back(std::make_pair(n, std::move(taskPtr)));
   int z=foo[0].second->i;
   std::cout<<z<<std::endl;
    //Access the element through unique_ptr
  /*  for(auto p: foo){
      std::cout<< p.second->i<<std::endl;
    }*/
  for(auto &it:foo)
  {
std::cout<<it.second->i<<std::endl;
  }
   std::cout<<foo.size()<<std::endl;
   delete a;
    return 0;
}
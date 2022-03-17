#include <iostream>
#include <memory>
#include <bits/stdc++.h>
class Task
{
 public:
    std::unique_ptr<int> mId;
    int i=4;
     std::vector<std::pair<int,std::unique_ptr<int>>> foo;
    Task(int id ) 
    {
        mId=std::make_unique<int>();
        *mId=id;
        std::cout<<"Task::Constructor"<<std::endl;
    }
    ~Task()
    {
        std::cout<<"Task::Destructor"<<std::endl;
    }
};
int main()
{
    Task *a = new Task(23);
    // Create a unique_ptr object through raw pointer
    std::unique_ptr<Task> taskPtr=std::make_unique<Task>(23);
    int n = 1;
    std::vector<std::pair<int,std::unique_ptr<Task>>> foo;
   foo.push_back(std::make_pair(n, std::move(taskPtr)));
   int z=foo[0].second->i;
    //Access the element through unique_ptr
  /*  for(auto p: foo){
      std::cout<< p.second->i<<std::endl;
    }*/
   std::vector<std::pair<int,Task*>> foo1;
  foo1.push_back(std::make_pair(n,a));

    for(int i=0; i< foo1.size();i++)
    {
        delete foo1[i].second;
         std::cout<<"1234"<<std::endl; 
    }
   foo1.clear();
   std::cout<<foo.size()<<std::endl;
    return 0;
}
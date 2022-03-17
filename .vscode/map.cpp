#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<int, std::string> example = {{1, "One"}, {2, "Two"}, 
                                     {3, "Three"}, {56, "Don\'t Panic!!!"}};

    example[4]="1234";
    example[4]="12345";
  static int s=1;
std::cout <<s;
s=5;
std::cout <<s;
    if(example.count(42)) {
        std::cout << "Found\n";
    } else {
        std::cout << "Not found\n";
    }
    //std::cout <<example[4];
       for (auto x : example)
    //  cout << x.first << " " << x.second << endl;
    {
        std::cout << x.first<<"\n";
         std::cout << x.second;
    }
}
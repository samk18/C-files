#include<bits/stdc++.h>
void add1(int m)
{
 std::cout << m;
}
// Driver code
int main()
{
    
    int m;
   // add1(m);
    char *s=(char *)"1234";
std :: cout << s;
   // std::cout<< s;
    std :: cout << "Vector1 contains :";
    std :: vector <int> vec1 {1, 2, 3, 4, 5,6};
    std :: vector <int> vec2 {7, 7, 7, 7, 7};
     
    // Print elements
  //  int a=vec1.pop();
    //std :: cout << a;
    std :: cout << "5678";
    for(int i = 0; i < vec1.size(); i++)
    {    std :: cout << " " << vec1[i];
        std :: cout << " " << &vec1[i];
    }
    std :: cout << "\n";
      
    // Print elements
    std :: cout << "Vector2 contains :";
    for(unsigned int i = 0; i < vec2.size(); i++)
        std :: cout << " " << vec2[i];
    std :: cout << "\n\n";
      
    // std :: move function
    // move first 4 element from vec1 to starting position of vec2
    std :: move (vec1.begin(), vec1.begin() + 6, vec2.begin() );
      
    // Print elements
    std :: cout << "Vector2 contains after std::move function:";
    for(unsigned int i = 0; i < vec2.size(); i++)
    {
        std :: cout << " " << vec2[i];
     
    }
     std :: cout << "\n";
     for(unsigned int i = 0; i < vec1.size(); i++)
    {
       
         std :: cout << " " << vec1[i];
    }
   
  
  
  
    return 0;
}
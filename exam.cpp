
// C++ program to illustrate the
// vector::emplace() function
// insertion at thefront
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<int> vec = { 10, 20, 30 };
 
    // insert element by emplace function
    // at front
    int i=0;
     for (auto it = vec.begin(); it != vec.end(); ++it)
    {    cout << *it << " ";
         cout << &vec[i] << " ";
         if(i==0){
          vector<int> vec1 = { 10, 20, 30 };
         }
         i=i+1;
    }
cout << "The vector elements are: ";

    vector<int>* vec1 = &vec;


     cout << vec1->capacity() << " ";
    auto it = vec.emplace(vec.begin(), 15);
   i=0;
    // print the elements of the vector
cout << "The vector elements are: ";
    for (auto it = vec.begin(); it != vec.end(); ++it)
    {    cout << *it << " ";
        cout << &it << " ";
    }
    return 0;
}
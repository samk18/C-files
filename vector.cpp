#include <iostream>
#include <vector>
#include <iterator>

using std::cout;
using std::endl;
using std::vector;
using std::copy;
using std::string;

int solution(vector<int> &a) {
    if (a.size()<=2)
         return 0;

    int length=a.size();
     
    vector<int> diff(length-1); 
    vector<int> apDiff(length-2); 
 
 
    for (int i=0;i<(length-1);i++)
    {
        diff[i]=a[i+1]-a[i];
    }
     for (int i=0;i<(length-2);i++)
    {
        apDiff[i]=diff[i+1]-diff[i];
    }

    int count=0;
    int stable=0,count=0;

     for (int j=0;i<(length-2);j++)
    {
       if (apDiff[j]!=0)
          {
            stable=stable+((count*(count+1))/2);
            count=0;
          }
          else
          {
              count=count+1;
          }
    }
    stable=stable+((count*(count+1))/2);
    if(stable>1000000000)
     return -1;    
    return stable;
}


int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};

    cout << "arr          - 1";
    copy(arr.begin(), arr.end(),
         std::ostream_iterator<int>(cout,"; "));
    cout << endl;

    auto arr_mult_by2 = multiplyByTwo(arr);

  /*  cout << "arr_mult_by2 -2 ";
    copy(arr_mult_by2.begin(), arr_mult_by2.end(),
         std::ostream_iterator<int>(cout,"; "));
    cout << endl; */

    return EXIT_SUCCESS;
}
#include <iostream>
#include <vector>
using namespace std;
int low_bound(vector<int> &dp,int num){
        int left=0;
        int right=dp.size()-1;
        while(left<right){
            int mid=(right+left)/2;
            if(dp[mid]<num){
               left=mid+1;
            }
            else right=mid;
        }
        return left;
    }
int maxIndices(int N,int K,vector<int> A){
     vector<int> dp;
        for(int i=0;i<N;i++){
            if(dp.empty() || dp[dp.size()-1] < A[i]){
                dp.push_back(A[i]);
            }
            else{
              auto it = low_bound(dp,A[i]/2);
                dp[it]=A[i];10
            }
        }
        return dp.size();
}
int main()
{


    int n=17,k=3;
    vector<int> vect ={33,49,15,27,17,49,3,5,23,19,26,32,43,26,28,13};
   




  cout<< maxIndices(n,k,vect);
  
 
    return 0;
}
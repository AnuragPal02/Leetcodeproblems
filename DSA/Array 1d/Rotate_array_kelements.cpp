#include<bits/stdc++.h>
using namespace std;
 // ------------------------------
 // Brute force approach
 //-----------------------------
 void print(vector<int>arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 }

 void solve(vector<int> arr,int k){
   
    int n = arr.size();
    vector<int> temp;
    for(int i=k;i<n;i++){
        temp.push_back(arr[i]);
    }
    // Now push the starting elements from 0 to k-1
   for(int i=0;i<=k-1;i++){
    temp.push_back(arr[i]);
   }

   // Now the rotated array is ready
 }

 //-----------------------------------
// optimal approach
//------------------------------------
void solve(vector<int> arr,int k)
{
   int n = arr.size();
   k = n%k;

   // reverse appraoch hai ye 
   reverse(arr.begin(),arr.begin() + k);
   reverse(arr.begin()+k+1,arr.end());
   reverse(arr.begin(),arr.end());
   print(arr);
}

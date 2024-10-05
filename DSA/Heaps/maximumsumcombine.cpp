
#include<bits/stdc++.h>
using namespace std;

// ye wala optimal hai heaps me use hoga from n.square to nlogn

vector<int>solve(vector<int> &A, vector<int> &B, int k) {
    sort(A.begin(),A.end());
    sort(begin(B),end(B));
    
    priority_queue<pair<int,pair<int,int>>> pq;
    //a set has to be taken to not repeat the cross multiplication
    set<pair<int,int>> st;
    
    //temperary array to store the array 
    vector<int> ans;
    // while loop
int n = A.size();
int m = B.size();

    int i=n-1;
    int j=m-1;
    // push first sum else if it shows error because it can't iterate over empty 
    // priority_queue
    pq.push(make_pair(A[i]+A[j],make_pair(i,j)));
    
    // push the index in st
    st.insert({i,j});
    while(k--){
        auto p = pq.top();
        int i = p.second.first;
        int j = p.second.second;
        
        ans.push_back(p.first);
        pq.pop();
        if(st.find({i,j-1})==st.end()){
            pq.push({A[i]+B[j-1],{i,j-1}});
            st.insert({i,j-1});
        }
        if(st.find({i-1,j})==st.end()){
            pq.push({A[i-1]+B[j],{i-1,j}});
          st.insert({i-1,j});
        }
    }
    return ans;
}
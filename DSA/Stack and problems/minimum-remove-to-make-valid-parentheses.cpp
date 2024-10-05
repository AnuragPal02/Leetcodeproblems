// #approach - 1
  #include<bits/stdc++.h>
  using namespace std;
  
    string minRemoveToMakeValid(string s) {
         stack<int> st;
         int n = s.length();
         set<int> remove_idx;
         for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(i);
            }else{
                if(!st.empty() && s[i]==')'){
                    st.pop();
                }else if(st.empty() && s[i] == ')'){
                    remove_idx.insert(i);
                }
            }
         }
         while(!st.empty()){
            remove_idx.insert(st.top());
            st.pop();
         }

         string ans = "";
         for(int i=0;i<n;i++){
             if(remove_idx.find(i)==remove_idx.end()){
                ans += s[i];
             }
         }
         return ans;
    }

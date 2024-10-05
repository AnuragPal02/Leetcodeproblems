#include<bits/stdc++.h>
using namespace std;
    // so there is box, you can add any number and when asked about median you should 
    // tell the median of the box
    //********so imporatant questions always look before going to interview */
    priority_queue<int> left_max; // max heap
    priority_queue<int,vector<int>,greater<int>> right_min; // min heap
    
    
    void addNum(int num) {
        // add karo left me check karo
        if(left_max.empty()){
            left_max.push(num);
        }
        else if(left_max.top() < num){
            right_min.push(num);
        }else{
            left_max.push(num);
        }
        if(left_max.size() > right_min.size() + 1){
            right_min.push(left_max.top());
            left_max.pop();
        }
        if(left_max.size() < right_min.size()){
            left_max.push(right_min.top());
            right_min.pop();
        }
    }
    
    double findMedian() {
        if((left_max.size() + right_min.size())&1==1){
            return (double)left_max.top();
        }else{
            double ans =  (left_max.top() + right_min.top())*1.0/2;
            return ans;
        }
    }

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
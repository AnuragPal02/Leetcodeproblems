class Solution {
public:
    bool check(vector<int>& arr) {
        int dip = 0;
int n = arr.size();
        for(int i=0;i<n;i++){
            if(arr[i] > arr[(i+1)%n]){
                dip++;
            }
        }
        if(dip>1)return false;
        else return true;
    }
};

------------------------------
solution Explanation : 
question explanation : to is problem me diya hai ki array hai aur wo k no.of times
rotated hai and wo array sorted tha for example 1,2,3,4 ko hum 2 barr rotate karein to wo 3,4,1,2 jaise dikhega to hame ek array diya jayega aur hame bolna hai ki wo rotated sorted hai ki nhi

soultion explanation : brute force yhi hai ki hum n(size of array) no.of times rotate karein (sorted form of the given array) 
aur check karein ki wo diye hue array se milta hai ki nhi

 optimal approach : agar sorted array ko rotate kareinge to hum dekh sakte hain ki sirf ek hi dip/peak form hoga, 
and the edge case is that we have to check the last and the first element of the given array too

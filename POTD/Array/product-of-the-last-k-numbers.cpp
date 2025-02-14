class ProductOfNumbers {
public:
vector<int> arr;

    ProductOfNumbers() { // when you start then you clear the structure to start new
        arr.clear();
    }
    
    void add(int num) { 
        if(num == 0){ // when the zero comes then product of last k digit will be zero so let's restart the arr so that 
        // it doesn't make issue for the last k digit which doesn't include zero like [0,1,2,3,4..]
            arr = {};
        }else{
            if(arr.empty()){ 
                arr.push_back(num);
            }else{   // if it is not empty then push with the last product arr[n-1]*num
                int n = arr.size();
                arr.push_back(arr[n-1]*num);
            }
        }
    }
    
    int getProduct(int k) {
        int n = arr.size();
        if(arr.size() == 0 || k > arr.size()) return 0; // if last k is greater than arr size then it means it include zero too so we have to return zero; and also if the arr size is empty that means we didn't push anything yet and the last digit is still zero so the product includes zero so the ans is also zero
        if(k == arr.size()){
            return arr[n-1]; // if the k == arr.size() then that means it's asking product of elements after zero occurence
            // so return arr[n-1];
        }

        int product = 1;
        product = arr[n-1]/arr[n-k-1]; // total product - product upto everything leaving last k elements
        return product;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */

class KthLargest {

private:
 int k;
  vector<int> nums;

public:
    KthLargest(int k, vector<int>& nums) {
        //  sort the numbers desc manner  -  O(nlogn) 
        //  pick the (k-1)th index of the array  -  O(n) 
        //  space  O(n)
        this->k = k;
        this->nums = nums;
    }
    
    int add(int val) {
        cout<<k<<endl;
        //  inserts val to the nums array
        nums.push_back(val);

        // sort the array
        int s = nums.size();
        sort(nums.rbegin(), nums.rend());
    

        // kth largest number
        // cout<<nums[k-1];
        return nums[k-1];
    }
};

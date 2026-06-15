class KthLargest {


private:
    int k;
    struct kop{
        bool operator()(int a, int b){
            return a > b;
        }
    };

    // default max heap, we need min type
    priority_queue<int, vector<int>, kop> pq;


public:
    KthLargest(int k, vector<int>& nums) {
        //  sort the numbers desc manner  -  O(nlogn) 
        //  pick the (k-1)th index of the array  -  O(n) 
        //  space  O(n)

        // approach 2 is using priority queue - min heap - O(nlogk)
        // space O(n)

        this->k = k;

        for(int n : nums) {
            pq.push(n);
            if(pq.size() == k + 1) pq.pop();
        }
    }
    
    int add(int val) {

        cout<<k<<endl;
        //  inserts val to the nums array
        // nums.push_back(val);


pq.push(val);

        if(pq.size() == k+1) pq.pop();
    

        // sort the array
        // int s = nums.size();
        // sort(nums.rbegin(), nums.rend());
    

        // kth largest number
        // cout<<nums[k-1];

        // kth largest wouuld be top of min heap
        return pq.top();
        
    
    }
};

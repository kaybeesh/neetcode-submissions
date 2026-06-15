class Solution {
    private:
    struct cmp {
        // true , then b moves closer to top
        bool operator()(int a, int b){
            return a > b;
        }
    };


    // kth largest - 5th largest
    // use min heap - of size limit ok k - 5 - ans is top
    priority_queue<int, vector<int>, cmp> pq;

public:
    int findKthLargest(vector<int>& nums, int k) {
        for(auto& n : nums){
            pq.push(n);
            if(pq.size() == k+1) pq.pop();
        }    

    return pq.top();
    }
};

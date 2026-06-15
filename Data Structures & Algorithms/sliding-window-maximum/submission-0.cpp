class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        int l=0, r=0;
        // monotnic decreasing indices q
        deque<int> dq;
        vector<int> ans;


        while(r < nums.size()){
            // inserting a new el in the q rear always
            while(!dq.empty() && nums[r] > dq.back()){
                dq.pop_back();
            }
            dq.push_back(nums[r]);

            // removing el from front
            int ws = r - l + 1;
            if(ws == k){
                ans.push_back(dq.front());
                if(dq.front() == nums[l]){
                    dq.pop_front();
                }
                l++;
            }

            r++;

        }

        return ans;
        
    }
};

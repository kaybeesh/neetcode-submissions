class Solution {
    
public:
    int part(vector<int>& nums, int l, int r){
        int x = l+1, y = r;
        int pivot = nums[l];

        while(x <= y){
            if(nums[x] < pivot && nums[y] > pivot){
                swap(nums[x], nums[y]);
                x++;
                y--;
            }

            if(nums[x] >= pivot) x++;
            if(nums[y] <= pivot) y--;
        }

        swap(nums[l], nums[y]);
        return y;
    }

// int partition_algo(vector<int>& nums, int L, int R) {
        
//         int P = nums[L];
//         int i = L+1; //0
//         int j = R; //0
        
//         while(i <= j) {
            
//             if(nums[i] < P && nums[j] > P) {
//                 swap(nums[i], nums[j]);
//                 i++;
//                 j--;
//             }
            
//             if(nums[i] >= P) {
//                 i++;
//             }
            
//             if(nums[j] <= P) {
//                 j--;
//             }
            
//         }
        
//         swap(nums[L], nums[j]);
//         return j; //P is at jth index
//     }

    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();

        int L = 0, R = n - 1;
        int p_idx=0;
        
        while(true){
            p_idx = part(nums, L, R);
            
            if(p_idx == k-1) break;
            if(p_idx > k - 1) R = p_idx - 1;
            else if(p_idx < k - 1) L = p_idx + 1;
            else break;
        }

        return nums[p_idx];

        // int n = nums.size();
        
        // int L = 0;
        // int R = n-1;
        
        // int pivot_idx = 0;
        
        // //kth largest pivot element - nums[k-1] (descendinforder me partition karenge)
        
        // while(true) {
            
        //      pivot_idx = part(nums, L, R);
            
        //     if(pivot_idx == k-1) {
        //         break;
        //     } else if(pivot_idx > k-1) { //2nd larget , 4th larget
        //         R = pivot_idx - 1;
        //     } else {
        //         L = pivot_idx + 1;
        //     }
            
        // }
        
        
        // return nums[pivot_idx];
    }

    


};

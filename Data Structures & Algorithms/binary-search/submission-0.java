class Solution {
    public int search(int[] nums, int target) {

        return f(0, nums.length - 1, nums, target);
        
    }

    int f(int l, int r, int[] nums, int t){
        if(l>r) return -1;
        int m = (l+r)/2;
        if(nums[m] == t) return m;
        else if(nums[m] > t) return f(l, m-1, nums, t);
        else if(nums[m] < t) return f(m+1, r, nums, t);

        return -1;
    }


}

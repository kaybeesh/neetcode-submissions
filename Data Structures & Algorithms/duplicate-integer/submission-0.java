class Solution {
    public boolean hasDuplicate(int[] nums) {
        Set<Integer> m = new HashSet<>();
        for(int n: nums){
            if(m.contains(n)) return true;

            m.add(n);
        }
        return false;
    }
}
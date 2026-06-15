class P {
    public List<Integer> i = new ArrayList<>();
    public int f;

    P(int x, int y) {
        this.i.add(x);
        this.f = y;
    }
}

class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, P> m = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            if(!m.containsKey(nums[i])){
              m.put(nums[i], new P(i,1));    
            } else{
                P p = m.get(nums[i]);
                p.f+=1;
                p.i.add(i);

                m.put(nums[i], p);
            }
        }

        for(int n : nums) {
            int nn = target - n;
            if(m.containsKey(nn)){
                int x = m.get(nn).i.get(0);
                if(m.get(n).i.size() == 1 && n == nn) continue;
                
                int y = (n == nn) && m.get(n).i.size() > 1 ? m.get(n).i.get(1) : m.get(n).i.get(0);
                return (y>x) ? new int[]{x,y} : new int[]{y,x};
            }
        }
        return new int[]{0,0};
    }
}

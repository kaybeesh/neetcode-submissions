class Solution {
private:
    // default is max heap
    priority_queue<int, vector<int>> pq;
public:
    int lastStoneWeight(vector<int>& stones) {

        // need max heap
        // pick first two elements - pop
        // push again the new wt in pq

        // O(nlogn)
        // can be imporoved to O(n)
        for(int s : stones){
            pq.push(s);
        }

        int n = pq.size();
        while(pq.size() > 1){
            int q1 = pq.top();
            pq.pop();
            int q2 = pq.top();
            pq.pop();
            cout<<q2<<q1;
            if(q1 > q2) pq.push(q1-q2);
            else pq.push(0);
        }

        return pq.top();
        
    }
};

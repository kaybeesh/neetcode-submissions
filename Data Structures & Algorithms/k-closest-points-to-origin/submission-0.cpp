class Solution {
private: 

// Compare(a, b) == true
// → b goes closer to the top
    struct kbcmp {
        bool operator()(const vector<int>& a, const vector<int>& b){
            int x1 = a[0];
            int y1 = a[1];

            int x2 = b[0];
            int y2 = b[1];

            float d1 = sqrt(x1*x1 + y1*y1);
            float d2 = sqrt(x2*x2 + y2*y2);
            cout<<d1<<endl<<d2<<endl;
        
            return d2 < d1;
        }
    };


// Compare(a, b) == true
// → b goes closer to the top
    priority_queue<vector<int>, vector<vector<int>>, kbcmp> pq;

public:

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // push all the points to min heap
        // sort them by distance from (0,0)

        int r = points.size();
        int c = points[0].size();

        // const auto& row : points

        for( int i = 0; i< r; i++){
            pq.push(points[i]);
        }


        vector<vector<int>> ans;

        while(k-- > 0){
        ans.push_back(pq.top());
        pq.pop();
        }
        return ans;
        
    }
};

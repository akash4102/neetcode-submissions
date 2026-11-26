class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>vec(26,0);
        for(char t : tasks) vec[t - 'A']++;
        int count=0;
        priority_queue<int> pq;
        for(int v : vec){
            if(v > 0) pq.push(v);
        }
        while(!pq.empty()){
            int cycle = n+1;
            vector<int> temp;

            while(cycle-- && !pq.empty()){
                int curr = pq.top(); 
                pq.pop();
                curr--;

                if(curr > 0) temp.push_back(curr);
                count++;
            }

            for(int x : temp) pq.push(x);

            if(pq.empty()) break;

            count += cycle+1; 
        }
        return count;


    }
};

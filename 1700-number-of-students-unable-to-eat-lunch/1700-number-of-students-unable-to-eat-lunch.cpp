class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count =0,i=0;
        queue<int>q;
        for(auto x : students)
            q.push(x);
        while(count<q.size() && i <sandwiches.size()){
            if(sandwiches[i]==q.front()){
                q.pop();
                i++,count=0;
            }
            else{
                q.push(q.front());
                q.pop();
                count++;
            }
        }
        return q.size();
    }
};
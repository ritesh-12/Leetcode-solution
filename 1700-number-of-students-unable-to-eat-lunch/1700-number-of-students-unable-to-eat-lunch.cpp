class Solution {
public:
    int countStudents(vector<int>& A, vector<int>& B) {
       int n=A.size();
       int cnt[2];
        cnt[0]=count(A.begin(),A.end(),0);
        cnt[1] =n-cnt[0];
        for(int i:B){
            if(cnt[i]==0) return cnt[1-i];
            cnt[i]--;
        }
        return 0;
        
    }
};
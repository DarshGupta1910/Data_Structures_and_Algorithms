class Solution {
public:
    string countAndSay(int n) {
        string res="1";
        while(--n){
            string curr="";
            for(int i=0;i<res.size();i++){
                int c=1;
                while(i+1<res.size() && res[i]==res[i+1])
                {
                    c++;
                    i++;
                }
                curr+=to_string(c)+res[i];
            }
            res=curr;
        }
        return res;
        
    }
};

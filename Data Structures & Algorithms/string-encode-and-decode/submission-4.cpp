class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.size()==0) return {};
        string result;
        for(int i=0;i<strs.size();i++){
            result+=strs[i];
            result+='-';
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string>result;
        if(s.size()==0){
            return result;
        };
        string temp;
        for(int i=0;i<s.size();i++){
            if(s[i]=='-'){
                result.push_back(temp);
                temp="";
            }
            else{
                temp+=s[i];
            }
        }
        return result;
    }
};

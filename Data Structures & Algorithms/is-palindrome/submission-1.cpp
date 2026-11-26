class Solution {
public:
    string sanatize(string s){
        string result;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                result+=s[i];
            }
            if(isdigit(s[i])){
                result+=s[i];
            }
        }
        return result;
    }
    bool isPalindrome(string s) {
        string temp = sanatize(s);
        cout<<temp<<endl;
        int a=0,b=temp.size()-1;
        while(a<b){
            if(temp[a]!=temp[b]){
                return false;
            }
            a++;
            b--;
        }
        return true;
    }
};

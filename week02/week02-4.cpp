class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int N = s.length();
        int one = 0;
        for(int i=0; i<N; i++){
            if(s[i]=='1') one += 1;
        }
        string ans;//放答案
        for(int i=0; i<one-1; i++) ans += '1';//有幾個1要放前面？
        for(int i=0; i<N-one; i++) ans += '0';//有幾個0要放前面？
        ans += '1';
        return ans;
    }
};
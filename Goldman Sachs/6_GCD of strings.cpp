
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n=str1.length();
        int m=str2.length();
        if (str1+str2!=str2+str1)
            return "";
        int x=gcd(n,m);
            return (str1.substr(0,x));
        
    
    }
};

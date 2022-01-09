class Solution{
public:	
	ull getNthUglyNo(int n) {
	    set<long long> p;
    	p.insert(1);
    	long long ans;
        while(n--){
            auto it = p.begin();
            ans = *it;
            p.erase(it);
            p.insert(ans*2);
            p.insert(ans*3);
            p.insert(ans*5);
        }
        return ans;
    }
};

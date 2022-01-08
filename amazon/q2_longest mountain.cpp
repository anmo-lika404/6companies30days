class Solution {
public:
    int longestMountain(vector<int>& arr) {
       int n=arr.size()
         if(n<3)
           return 0;
        int ans=0,i=0;
        bool up=false;
        bool down=false;
        while(i<n-1)
        {
            if(arr[i]<arr[i+1])
            {
                int start=i;
                
                while(i<n-1 && arr[i]<arr[i+1])
                {
                    i++;
                    up=true;
                }
                
                while(i<n-1 && arr[i]>arr[i+1])
                {
                    i++;
                    down=true;
                }
                
                if(up==true && down==true)
                {
                    ans= max(ans,i-start+1);
                }
                up=false;
                down=false;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};

string encode(string src)
{     
  //Your code here 
   int n = src.length();
    for (int i = 0; i < n; i++) {
 
        // Count occurrences of current character
        int count = 1;
        while (i < n - 1 && src[i] == src[i + 1]) {
            count++;
            i++;
        }
 
        // Print character and its count
        cout << src[i] << count;
    }
  
}     
 
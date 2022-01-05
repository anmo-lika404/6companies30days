stack<int> st; //stack declared using STL
	for(int i=0;i<=s.length();i++){
		//push i+1 at first, i+1 becuase i is 0-indexed 
		st.push(i+1); 
		//when string length is processed or pattern in I
		if(s.length()==i || s[i]=='I' ){ 
			//pop and print until stack is empty
			while(!st.empty()){ 
				cout<<st.top();
				st.pop();
			}
		}
	}
	cout<<endl;
}

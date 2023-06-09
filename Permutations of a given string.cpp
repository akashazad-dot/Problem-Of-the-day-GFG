class Solution
{
	public:
	    void solve(string s,set<string>& ans,int index){
	        if(index==s.size()){
	            ans.insert(s);
	            return ;
	        }
	        
	        for(int i=index;i<s.size();i++){
	            swap(s[index],s[i]);
	            solve(s,ans,index+1);
	            swap(s[index],s[i]);

	        }
	    }
	    
		vector<string>find_permutation(string S)
		{   
		    set<string>ans;
		    int index=0;
		    solve(S,ans,index);
		    vector<string>t;
		    for(auto x:ans){
		        t.push_back(x);;
		    }
		    
		    return t;
		}
};

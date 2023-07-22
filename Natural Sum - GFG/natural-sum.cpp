//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
   	int find(int n){
   	    // Code here
   	    int check=n;
   	    int sum=0;
   	    int count=0;
   	    for(int i=1;i<=n;i++){
   	        sum=sum+i;
   	        count++;
   	        
   	        if(sum==check){
   	            return count;
   	        }
   	        
   	    }
   	    return -1;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.find(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	    // code here
	    int count=1;
	    for(int i=0;i<n;i++){
	        for(int j=n-i-1;j>=0;j--){
	            cout<<count<<" ";
	            count++;
	        }
	        count=1;
	        cout<<"\n";
	    }
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends
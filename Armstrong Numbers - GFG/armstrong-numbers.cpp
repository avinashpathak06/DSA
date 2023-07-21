//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int check=n;
        int digit=0;
        int ans=0;
        while(n>0){
            digit=n%10;
            ans=ans+(digit*digit*digit);
            n=n/10;
            
        }
     
        if(ans==check){
            return "Yes";
        }
        return "No";
       
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
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
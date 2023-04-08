//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
      
     int count =0;
       int arr[m+n];
       int s;
       for (s=0; s<n; s++)
       {
           arr[s] = a[s];
       }
       int j, k;
       for (j=s, k=0; k<m; k++, j++ )
       {
           arr[j]= b[k];
       }
       sort(arr, arr+m+n);
       
       //now compare 
       for (int i=0; i<m+n; i++)
       { 
           if (arr[i]!= arr[i+1])
           {
               count++;
           }

      }

return count ;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
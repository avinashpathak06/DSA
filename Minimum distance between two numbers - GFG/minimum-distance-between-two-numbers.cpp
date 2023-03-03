//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
  
  
    int minDist(int a[], int n, int x, int y) {
        // code here
        //  int idx1=0;
        //  int idx2=0;
        //  int ans=-1;
        
        // for(int i=0;i<n;i++){
        //     if(a[i]==x){
        //         idx1=i; 
        //         }
        //     if(a[i]==y){
        //         idx2=i;
        //     }
        // }
          
        //       ans=min(ans,abs(idx1-idx2));
            
            
        //     return ans;
        // }
        
         int idx1=0,idx2=0,ans=INT_MAX;

        for(int i=0;i<n;i++){

            if(a[i]==x){

                idx1=i+1;

            }

            else if(a[i]==y){

                idx2=i+1;

            }

            if(idx1>0 && idx2>0){
               //predefined important
                ans=min(ans,abs(idx1-idx2));

            }

        }

        if(idx1==0 || idx2==0){

            return -1;

        }

        else{

            return ans;

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
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends
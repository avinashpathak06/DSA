//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
//     void leftRotate(int arr[], int n, int d) {
//         // code here
   
//   for(int i=0;i<n-d;i++){
//           swap(arr[i],arr[i+d]);
        
//          }
//          for(int i=d+1;i<n;i++){
//              swap(arr[i],arr[n-1]);
//          }
             
//     }



void leftRotate(int arr[], int n, int d) {
        // code here
        vector<int>a;
       
        for(int i=d;i<n;i++)
        {
            a.push_back(arr[i]);
        }
         for(int i=0;i<d;i++)          //concept learn kya nahi krna hain:
        {
            a.push_back(arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            arr[i]=a[i];
        }
    }

// void leftRotate(int arr[], int n, int d) {
//         // code here
//         vector<int>a,b;
//         for(int i;i<d;i++)
//         {
//             a.push_back(arr[i]);
//         }
//         for(int i=d;i<n;i++)
//         {
//             b.push_back(arr[i]);
//         }
//         b.insert(b.end(),a.begin(),a.end());
//         for(int i=0;i<n;i++)
//         {
//             arr[i]=b[i];
//         }
//     }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}



// } Driver Code Ends
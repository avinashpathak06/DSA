//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &matrix, int m, int n, int k)
    {
        // Your code goes here
        
      vector<int>ans;
   
    int total_element = m*n;

//phle jo bhi jha se print krna hain usko initialize kr diya:
    int startingRow = 0;
    int endingCol = n-1;
    int endingRow = m-1;
    int startingCol = 0;
    
    int answer = -1;

    //while ki condition chlane ke liye count ko maintain krenge:
    int count =0;
    while(count < total_element){

        //print startingRow
        for(int i=startingCol;i<=endingCol && count<total_element;i++){
            ans.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++; //catch 

        //print endingCol
          for(int i=startingRow;i<=endingRow && count<total_element;i++){
            ans.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;

        //print endingRow
           for(int i=endingCol;i>=startingCol && count<total_element;i--){
            ans.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;
       
       //print startingCol
          for(int i=endingRow;i>=startingRow && count<total_element;i--){
            ans.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    
    return ans[k-1];
   
    }

};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}
// } Driver Code Ends
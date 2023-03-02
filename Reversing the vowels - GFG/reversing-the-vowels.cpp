//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        string modify (string s)
        {string temp="";
            for(int i=0;i<s.length();i++){
                char c=s.at(i);  
                if( c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
                     temp+=c;
            }
            
            int len=temp.length();
            
            for(int i=0;i<s.length();i++){
                char c=s.at(i);  
                if( c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                    s[i]=temp[len-1];
                    len--;
                }
            }
            return s;
        
        
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends
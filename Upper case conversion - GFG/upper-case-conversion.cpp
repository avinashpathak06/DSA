//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends



string transform(string s)
{
    // code here
    // for(int i=0;i<s.length();i++){
    //     if(i==0 && (s[i] >='a' && s[i]<='z') )

    //     {

    //         s[i] = s[i]-'a'+'A';

    //     }

    //     else if((s[i] != ' ' && s[i-1] ==' ')&& (s[i] >='a' && s[i]<='z'))

    //     {

    //         s[i] = s[i]-'a'+'A';

    //     }
    // }
    // return s;
    
    for(int i=0;i<s.length();i++){
        if(i==0){
            s[i]=s[i]-'a'+'A';
        }
         if(s[i]==' '){
            s[i+1]=s[i+1]-'a'+'A';
        }
    }
    return s;
}
class Solution {
public:
    string removeOccurrences(string &s, string part) {
        int pos=s.find(part);
        
        while(pos!=string::npos){
         // while(pos>0){
            s.erase(pos,part.length());
            pos=s.find(part);
        }
        return s;
    }
};
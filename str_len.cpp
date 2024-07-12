#include <iostream>
using namespace std;
class Solution {
public:
    int length_substr(string s) {
        int max_len=0;
        int start=0;
        int char_index[256]={ -1 }; 
        for (int end=0;end<s.length();++end) {
            if (char_index[s[end]]>=start) {
                start=char_index[s[end]]+1;
            }
            char_index[s[end]]=end;
            max_len=max(max_len,end-start+1);
        }
return max_len+1;
    }
};
int main() {
    Solution sol;
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int result=sol.length_substr(str);
    cout<<"Length of longest substring without repeating characters:"<<result<<endl;
    return 0;
}

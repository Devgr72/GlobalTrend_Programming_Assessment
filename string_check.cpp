#include<iostream>
#include<string>
using namespace std;
class string_check{
public:
bool check_char(string &str){
    for(char c:str){
        if(!isalpha(c)){
            return false;
        }
    }
return true;
}
};
int main(){
    string_check s;
    string str;
    cout<<"Enter a string:";
    cin>>str;
    if(s.check_char(str)){
        cout<<"String contains only Alphabet characters.";
    }
    else{
         cout<<"String does not contains only Alphabet characters.";
    }
return 0;
}

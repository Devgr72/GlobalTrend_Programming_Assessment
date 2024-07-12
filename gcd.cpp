#include<iostream>
using namespace std;
class gcd_no{
public:
int temp;
int cal_gcd(int a,int b){
    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }
    if(b==0){
    return a;
    }
return cal_gcd(b,a%b);
}
};
int main(){
    gcd_no g;
    int a,b;
    cout<<"Enter 1st number:";
    cin>>a;
    cout<<"Enter 2nd number:";
    cin>>b;
    int result=g.cal_gcd(a,b);
    cout<<"GCD of "<<a<<" and "<<b<<":"<<result;
    return 0;
}
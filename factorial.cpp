#include<iostream>
using namespace std;
class factorial{
public:
long long fact=1;
int i;
long long cal_factorial(int num){
    if(num<0){
        cout<<"Number cannot be negative";
    }
    for(i=1;i<=num;i++)
    {
        fact*=i;
    }
return fact;
}
};
int main(){
factorial f;
int num;
cout<<"Enter a number:";
cin>>num;
long long result=f.cal_factorial(num);
cout<<"factorial of "<<num<<":"<<result;
return 0;
}
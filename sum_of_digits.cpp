#include<iostream>
using namespace std;
class sum_of_digit{
public:
int remainder;
int sum=0;
int i;
int cal_sum(int num)
{
    while(num!=0)
    {
    remainder=num%10;
    sum+=remainder;
    num=num/10;
    }
return sum;
}
};
int main()
{
    sum_of_digit s;
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int result=s.cal_sum(num);
    cout<<"The sum of digit of "<<num<<":"<<result;
    return 0;
}
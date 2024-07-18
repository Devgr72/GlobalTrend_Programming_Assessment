#include<iostream>
using namespace std;
class max_diff{
public:
int max,min;
int diff(int a[],int size){
for(int i=0;i<size;i++){
    for(int j=0;j<size-i-1;j++){
        if(a[j]>a[j+1]){
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        }
    }
min=a[0];
max=a[size-1];
return (max-min);
}
}
};
int main(){
    max_diff m;
    int n;
    cout<<"Enter array size:";
    cin>>n;
    if(n<2){
        cout<<"NOt Allowed:Array must contain atleast 2 elements.";
    }
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter array "<<i+1<<" element:";
        cin>>a[i];
    }
    int result=m.diff(a,n);
    cout<<"The maximum difference is:"<<result;
    return 0;
}
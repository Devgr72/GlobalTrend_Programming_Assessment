#include <iostream>
using namespace std;
void rev_array(int arr[],int start,int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void rotate(int arr[],int n,int k) {
    k = k % n;
    if (k==0) 
    return;
    rev_array(arr,0,n-1);
    rev_array(arr,0,k-1);
    rev_array(arr,k,n-1);
}
int main(){
    int n;
    cout<<"enter array size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter array "<<i+1<<" element:";
        cin>>arr[i];
            }
    int k;
    cout<<"Enter the value of k(steps):";
    cin>>k;
    rotate(arr,n,k);
    cout<<"Rotated array:";
    for (int i=0; i<n;++i) {
    cout << arr[i] << " ";
    }
    cout<<endl;
    return 0;
}

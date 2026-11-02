#include <iostream>
using namespace std;
int main(){
    int *arr;
    int size;
    cout<<"Enter size of Array"<<"\n";
    cin>>size;
    arr=new int[size];
    cout<<"Enter Elements"<<"\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter Elements"<<"\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
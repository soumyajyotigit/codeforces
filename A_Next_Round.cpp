#include<iostream>
using namespace std;
int main(){
    int n,k;
    int count=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[k-1]&&arr[i]!=0)
        count++;

    }
    cout<<count<<endl;
    return 0;

}
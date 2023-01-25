#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int r=a/5;
    if(a%5==0){
        cout<<r;
    }
    else
    cout<<r+1;

}
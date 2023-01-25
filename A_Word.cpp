#include<iostream>
#include<bits/stdc++.h>
#include<cctype>
using namespace std;
int main(){
    int l=0,m=0;
    string s;
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++){
        if(isupper (s[i])){
            l++;
        }
        if(islower  (s[i])){
            m++;
        }
    }
    for(int i=0;i<len;i++){
        if(l>m){
            s[i]=toupper(s[i]);
        }
        if(l<=m){
            s[i]=tolower(s[i]);
        }
    }
    cout<<s;

}
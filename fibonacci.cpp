#include<iostream>
using namespace std;

int main(){
    int first=0,second=1,answer=0,n;
    cin>>n;
    for(int i=2;i<n;i++){
        answer=first+second;
        first=second;
        second=answer;
    }
    cout<<n<<"th Fibonacci number is : "<<answer;
}
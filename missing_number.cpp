#include<iostream>
using namespace std;
int main(){
    int ar[]={1,2,4,5,6};
    int n=6;
    int sum=(n*(n+1))/2;
    int alsum=0;
    for(int i=0;i<5;i++){
        alsum+=ar[i];
    }
    cout<<"Missing number is ==> "<<sum-alsum;
}
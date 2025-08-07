#include<iostream>
using namespace std;
int main(){
    int ar[]={12,34,23,44,5,35,45};
    int larg=ar[0],seclarg=ar[0];
    for(int i=1;i<10;i++){
        if(larg<ar[i]){
            seclarg=larg;
            larg=ar[i];
        }
        else if(ar[i]>seclarg&&ar[i]!=larg){
            seclarg=ar[i];
        }
        //larg=34 seclarge=23
    }
    cout<<"largest element is :"<<larg;
    cout<<"\nsecond largest element is :"<<seclarg;
}
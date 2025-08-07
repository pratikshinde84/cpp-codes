#include<iostream>
using namespace std;
int main(){
    int ar[]={1,2,4,5,6,6};
    int min=ar[0],max=ar[0];
    for(int i=0;i<6;i++){
        if(min>ar[i]){
            min=ar[i];
        }
        if(max<ar[i]){
            max=ar[i];
        }
    }
    cout<<"Minimum is :"<<min<<" and maximum is :"<<max;
}
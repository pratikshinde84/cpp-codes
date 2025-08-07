#include<iostream>
using namespace std;
void display(int arr[]){
    for(int i=0;i<9;i++){
        cout<<arr[i]<<"->";
    }
}
int main(){
    
    int ar[]={9,8,7,6,5,4,3,2,1};
    cout<<"0 Iteration => ";
    display(ar);
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(ar[j]>ar[j+1]){
                int temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
        cout<<endl<<i+1<<" Iteration => ";
        display(ar);
    }
    cout<<"\nAfter sorting\n";
    display(ar);
}
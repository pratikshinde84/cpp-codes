#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    string str;
    cin>>str;
    // string reversed=str;
    // reverse(str.begin(),str.end());
    // reversed==str?cout<<"Palindrome":cout<<"Not palindrome";
    int start=0,end=str.length()-1;
    int reverse=0;
    while(start<=end){
        if(str[start]==str[end]){
            start++;
            end--;
        } 
        else{
            reverse=1;
            break;
        }
    }
    if(reverse)
    cout<<"not palindrome";
    else
    cout<<"Palindrome";
}
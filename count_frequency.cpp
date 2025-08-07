#include<iostream>
using namespace std;
int main(){
    string str="aaabbbccc";
    int frequency[26]={0};
    for(int i=0;i<str.length();i++){
        char c =str[i];
        frequency[c - 'A']++;
    }

    cout<<"Printing the frequencies....\n";
    for(int i=0;i<26;i++){
        if(frequency[i]!=0)
        cout<<frequency[i]<<char(i+'a')<<" --> ";
    }
}
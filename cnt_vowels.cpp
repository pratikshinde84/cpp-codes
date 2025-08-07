#include<iostream>
using namespace std;
int main(){
    int vowel=0,consonant=0;
    string str="pratik shinde*&$#";
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowel++;
        }else if(str[i]>97&&str[i]<123){
            consonant++;
        }
    }
    cout<<"Vowels =>"<<vowel;
    cout<<endl<<"consonants =>"<<consonant;
}
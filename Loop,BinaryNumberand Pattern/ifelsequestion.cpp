#include<iostream>
using namespace std;
int main(){
    char c;
    int lowercase,uppercase;
    cout<<"Enter the aphabet: ";
    cin>>c;
    lowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    uppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(lowercase||uppercase)
    cout<<c<<" is a vowel"<<endl;
    else
    cout<<c<<" is a consonant";
    return 0;
}
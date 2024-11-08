#include<iostream>
#include<string>
using namespace std;
int main(){
    int i,j,k;
    string s,t;
    int key = 3;
    cout<<"Enter the encrypted message\n";
    cin>>s;
    for(i=0;i<s.size();i++){
        t+=(s[i] - 'A' - key)%26 + 'A';
    }
    cout<<"\n\nDecrypted message is "<<t<<'\n';
    return 0;
}
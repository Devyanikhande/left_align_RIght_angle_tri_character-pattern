//The C++ program to print the character in th left aslign right angle pattern.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows you want : ";
    cin>>n;

    for(int i=0;i<n;i++){
        char ch ='A';
        for(int j=0 ;j<i+1;j++){
            cout<<ch<<" ";
            ch+=1;
        }
        cout<<endl;
    }
return 0;
}
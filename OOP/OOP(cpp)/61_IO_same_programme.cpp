#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream sout("61sample.txt");  //write 
    string s1; 
    cin>>s1;     //cin>>
    sout<<s1;  //s1 save on file  
    sout.close();

    ifstream sin("61sample.txt");
    string s2;
    sin>>s2;
    cout<<s2;  //cout<<
    sin.close();
    
    return 0;
}
/*
These are some useful classes for working with files in C++

fstreambase
ifstream --> derived from fstreambase
ofstream --> derived from fstreambase


In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

Using the constructor
Using the member function open() of the class
*/
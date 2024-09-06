#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream ob_out;
    ob_out.open("61sample.txt");
    ob_out<<"this is A \n";
    ob_out<<"this is b \n";
    ob_out<<"this is c \n";
    ob_out.close();
    

    ifstream ob_in;
    ob_in.open("61sample.txt");
    string s;  /* ,s1,s2;
    ob_in>>s>>s1>>s2;
    cout<<s<<s1<<s2; // single word== thisisa */

    while(ob_in.eof()==0){
        getline(ob_in,s);
        cout<<s<<endl;
    }
    ob_in.close();
    return 0;
}
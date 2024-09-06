// #include<bits/stdtr1c++.h>
// using namespace std;
// class Pair{
//    public:
//    int first,second;
//    void make_pair(int a,int b){
//       first=a;
//       second=b;
//    }
// };
// int main(){
//    Pair p;
//    p.make_pair(10,20);
//    cout<<p.first<<" "<<p.second<<endl;
//    return 0;
// }


#include<bits/stdtr1c++.h>
using namespace std;
int main(){
   pair<string,int> p;
   // p=make_pair("fbm",2);
   p={"fbm",5};
   cout<<p.first<<" "<<p.second<<endl;
   return 0;
}
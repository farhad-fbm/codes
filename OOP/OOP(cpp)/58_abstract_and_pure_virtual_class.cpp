/* 

Pure virtual function is a function that doesn’t perform any operation 
    and the function is declared by assigning the value 0 to it. 
Derived class must need to override the virtual function otherwisw a compile-time error will result

Abstract base class is a class that has at least one pure virtual function in its body.
can create pointers & references (cann't create object) of abstract
 */

#include <bits/stdc++.h>
using namespace std;
class cwh{
    protected:
    string title;
    float rating;
    public:
    cwh(string t,float r) { title =t; rating=r;}
    virtual void display()=0;  //pure virtual by assign =0;
};
class cwhvideo : public cwh{
    float videolength;
    public:
    cwhvideo(string t,float r,float vl) : cwh(t,r){
        videolength=vl;
    }
    void display(){
        cout<<"video title:  "<<title<<endl;
        cout<<"video lenght: "<<videolength<<endl;
        cout<<"video rating: "<<rating<<endl;
    }
    
};
class cwhtext : public cwh{
    int words;
    public:
    cwhtext(string t,float r,int wc) : cwh(t,r){
        words=wc;
    }
    void display(){
        cout<<"text tuitorial title:  "<<title<<endl;
        cout<<"text tuitorial lenght: "<<words<<endl;
        cout<<"text tuitorial rating: "<<rating<<endl;
    }
    
};

int main() {
    string ttl;
    float rtg,vlen;
    int wrds;

    ttl="Cpp video";
    rtg=4.3;
    vlen=30;
    cwhvideo cppvideo(ttl,rtg,vlen);

    ttl="cpp text";
    rtg=4.2;
    wrds=300;
    cwhtext cpptext(ttl,rtg,wrds);

    // cppvideo.display();
    // cpptext.display();

    cwh* ar[2];      // B_class pointer
    ar[0]=&cppvideo; //acces only B_class members
    ar[1]=&cpptext;

    ar[0]->display(); // display D_class members
    ar[1]->display(); // cause, use Virtual function for B_class
    return 0;
}
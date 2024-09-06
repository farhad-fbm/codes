#include <bits/stdc++.h>
using namespace std;

class cwh{
    protected:
        string title;
        float rating;
    public:
        cwh(string t, float r)  { title=t; rating=r; }
        virtual void display(){}   // by using Virtual
                                  // now B_class pointer invoked with D_class members
                                  //if there no D_class ""display()"", then invoked with ""Virtual display()""
};

class cwhvideo : public cwh{
    float videolenght;
    public:
        cwhvideo(string t, float r, float vl) : cwh(t,r) {
            videolenght = vl;
        }
        void display(){
            cout<<"video title:  "<<title<<endl
                <<"video rating: "<<rating<<endl
                <<"video lenght: "<<videolenght<<endl;
        }
};

class cwhtext : public cwh{
    int words;
    public:
        cwhtext(string t, float r, int wc) : cwh(t,r) {
            words = wc;
        }
        void display(){
            cout<<"text tuitorial title:  "<<title<<endl
                <<"text tuitorial rating: "<<rating<<endl
                <<"text tuitorial lenght: "<<words<<endl;
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

/*
Rules for virtual functions
    1.They cann't be static
    2.should be accessed using pointer/reference of base class
    3.Virtual functions can be a friend of another class
    4.A virtual function in the base class might not be used.
    5.If a virtual function is defined in a base class, 
     there is no necessity of redefining it in the derived class(that case,base func() used)
*/
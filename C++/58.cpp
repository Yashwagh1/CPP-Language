
// Abstract base class and pure virtual function 


#include <iostream>
#include <cstring>
using namespace std;
class CWH
{
protected:
   string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title= s;
        rating = r;

    }
    virtual void display()=0;
};
class CWHVideo: public CWH{
int videolength;
public:
CWHVideo(string s,float r, int vL):CWH(s,r){
    videolength=vL;

}
void display(){
cout<<"this is a amazing video with title "<<title<<endl;
cout<<"Rating :"<<rating<<"out of 5 stars "<<endl;
cout<<"Length of this video is : "<<videolength<<"minutes"<<endl;
}
};
class CWHText: public CWH{
int words;
public:
CWHText(string s,float r, int wc):CWH(s,r){
    words=wc;

}
void display(){
    
cout<<"this is a amazing text tutorial with title "<<title<<endl;
cout<<"Rating of this text tutorial : "<<rating<<" out of 5 stars"<<endl;
cout<<"No of word in this tutorial : "<<words<<" words"<<endl;
    
}
};
int main()
{
    string title;
    float rating, vlen;
    int words;
    //for CWH video 
    title="Django tutorial";
    vlen=4.56;
    rating=4.78;
    CWHVideo djvideo(title,rating,vlen);
    //djvideo.display();
   
   
    //for CWH text 
    title="Django tutorial text";
    words=433;
    rating=4.8;
    CWHText djtext(title,rating,words);
    // djtext.display();


CWH* tut[2];
tut[0]=&djvideo;
tut[1]= &djtext;
tut[0]->display();
tut[1]->display();

    return 0;
}
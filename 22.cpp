#include<iostream>
#include<string>
using namespace std;
class binary {
    string s;
    public :
    void read (void);
    void chk_binary(void);
    void onces(void);

};
void binary :: read (void){
    cout<<"enter the binary number "<<endl;
    cin>>s;
}
void binary :: chk_binary(void){
    for(int i = 0; i < s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"incorrect binary format "<<endl;
            exit(0);
        }
    }
}
void binary :: onces (void){
for(int i = 0; i < s.length(); i++){
        if(s.at(i)+='0'){
            s.at(i) = 1;
        } 
        if( s.at(i)=='1'){
            s.at(i) = 0;
}
int main(){
// OOPs - Classes and the Objects
//  C++ --> initially called --> c with classes by stroutroup
// class --> extension of structure(in c)
// structure had limitations
    // - member are public
    // - no methods
    // classes --> structure + more 
    // classes --> can have methods and properties
    // classes  --> can make few members as private & few as public
// structure in c++ are typedefed
// you can declare object along with the class declarion

/*class employee{
//class definition
}yash, karan, hemant;*/
// yash.salary = 8 makes no sense if salary is private
// nesting of member functions


// };

binary b;
b.read();
b.chk_binary();
b.onces


return 0;

}
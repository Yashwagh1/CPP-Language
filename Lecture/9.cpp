//selection control structure:- If else-if else ladder

#include <iostream>

using namespace std;

int main() {
int age;
cout<<"tell me your age";
cin>>age;
if((age<18)&&(age>0)){
    cout<<"you cannot come to my party"<<endl;
}
else if(age==18){
    cout<<"your are 18+ you eligible for come to my party"<<endl;
}
else if(age<1){
    cout<<"you are not yet born";
}
else{
    cout<<"you come to my party"<<endl;
    
}
    return 0;
}










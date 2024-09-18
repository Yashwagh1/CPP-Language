//Maps in STL by C++

#include<iostream>
#include<map>
#include<string>
using namespace std;
//Map in an associative array
int main(){
map<string, int> marksMap;
marksMap["yash"]=98;
marksMap["harry"]=89;
marksMap["jack"]=69;
marksMap["rocky"]=21;
marksMap.insert({{"kozume",169},{"kuroo",187}});
map<string,int> :: iterator iter;
for(iter=marksMap.begin(); iter!=marksMap.end();iter++)
{
cout<<(*iter).first<<"  "<<(*iter).second<<"\n";
}
cout<<"the size is : "<<marksMap.size()<<endl;
cout<<"the max size is : "<<marksMap.max_size()<<endl;
cout<<"the empty return value is : "<<marksMap.empty()<<endl;
return 0;
}
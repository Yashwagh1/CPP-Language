#include<iostream>
#include<vector>
using namespace std;

template<class T>
void display(vector<T> &v){
    cout<<"Displaying this vector "<<endl;
for (int  i = 0; i < v.size(); i++)
{
   cout<<v[i]<<"  ";
//    cout<<v.at(i)<<"  ";
}
cout<<endl;
}
int main(){
    int element, size;
    // cout<<"enter the size of the vector"<<endl;
    // cin>>size;

//way to create a vector 
vector<int>vec1;// zero length integer vector
vector<char>vec2(4);//4 elemnet character vector
// vec2.push_back('5');
// display(vec2);
vector<char>vec3(vec2);//4 element character vector from vec2
display(vec3);
vector<int>vec4(6,13);//6 element vector of 3s
display(vec4);
cout<<vec4.size();

// for (int i = 0; i < size; i++)
// {
//     cout<<"enter an element to add to this vector";
//     cin>>element;
//     vec1.push_back(element);

// }
// display(vec1);
// vector<int>::iterator iter = vec1.begin();
// // vec1.insert(iter+1,10,45);
// display(vec1);
return 0;
}
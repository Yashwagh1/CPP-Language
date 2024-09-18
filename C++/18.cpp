//******* */ recursion and recursive function *********

// #include<iostream>
// using namespace std;

// int factorial(int n){
//     if(n<=1){
//         return 1;
//     }
//     return n* factorial(n-1);
// }
// int main(){
// // factorial of a number:
// // 6! = 6*5*4*3*2*1 = 720
// // 0! = 1 by definition
// // 1! = 1 by definition
// // n! = n*(n-1)!
// int a;
// cout<<"Enter the number"<<endl;
// cin>>a;
// cout<<"The factorial of the "<<a<<" is :- "<<factorial(a)<<endl;
// return 0;
// // }
// --------------------------------------------second code of fibonacci series-------------------------------------------

#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fibo(n - 2) + fibo(n - 1);
}
int main()
{
    int a;
    cout << "Enter the number :-" << endl;
    cin >> a;
    cout << "The term in fibonacci sequence at the position " << a << " is " << fibo(a) << endl;
    return 0;
}
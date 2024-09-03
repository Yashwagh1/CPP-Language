//Dynamic initialzation of the object using the constructer.
#include<iostream>
using namespace std;
class BankDeposite {
    int principle;
    int year;
    float interstRate;
    float returnValue;

public:
BankDeposite(){}                    //Default Constructor
BankDeposite(int p, int y,float r);//r can be a value like 0.04
BankDeposite(int p, int y,int r);//r can be a value like 14
void show();

};
BankDeposite::BankDeposite(int p,int y, float r){
    principle = p;
    year = y;
    interstRate = r;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interstRate);

    }
    }
    BankDeposite::BankDeposite( int p, int y, int r)
    {
    principle = p;
    year = y;
    interstRate = float(r)/100;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interstRate);

    }
    }
    void BankDeposite ::show(){
        cout<<endl<<"Principal amout was "<<principle<<endl<<"return value after "<<year<<" year is "<<returnValue;

                            }


int main(){
    //BankDeposite b1,b2,b3;
    int p,y;
    float r;
    int R;
    

    cout<<"enter the value of p,r,y,R"<<endl;
    cin>>p>>y>>r>>R;
    BankDeposite b1=BankDeposite(p,y,r);
    b1.show();


return 0;
}
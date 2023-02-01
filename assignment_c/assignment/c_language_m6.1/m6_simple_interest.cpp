

#include <iostream>
#include<string.h>
using namespace std;

class interest
{
public:
    int year;
    float rate = 2.5;
    
    
   private: int amount;
    
public:interest(int p)
    {

        amount= p *1+rate*year;

       
    }
    

};

class get : public interest
{
    int amount;
        public : void display()
    {
        cout<<amount;
    }
};
int main()
{
    int principal,year;
    
   
    
    cout << "enter principal: " << endl;
    cin >> principal;
      cout << "enter no of years : " << endl;
      cin>>year;
    
     
}
#include<iostream>
#include<string>

using namespace std ;

class Template
{
    public : 

    template<typename moeez>
    float add(moeez a , moeez b)
    {
        return a+b ;
    }

    template<typename moeez>
    float multiply(moeez a , moeez b)
    {
        return a*b ;
    }
};



int main()
{
    
    Template t ;
    cout<<t.add(1,2)<<endl ;
    cout<<t.multiply(1,2)<<endl ;
    return 0 ;
}
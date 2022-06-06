#include<iostream>

using namespace std ;


class one {

    protected : 
         int a ; 

    public : 
        one() {
            a = 1 ; 
        }
        virtual void display() ;


class two : public one {
    protected : 
        int b ; 
    public : 
        two() {
            b = 2 ; 
        }
        void display() {
            std::cout << "b = " << b << std::endl ; 
        }
};

class three : public two {
    protected : 
        int c ; 
    public : 
        three() {
            c = 3 ; 
        }
        void display() {
            std::cout << "c = " << c << std::endl ; 
        }
};

int main()
{
    three t ; 
    t.display() ; 
    
    two t1 ;
    t1.display() ;

    one t2 ;
    t2.display() ;

    return 0 ;


}
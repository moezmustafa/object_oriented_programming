#include<iostream>

using namespace std ;

class base {

    public :

        void show()
        {
            std::cout << "base show" << std::endl ; 

        }

};


class driver : public base {

    public : 

        void show()
        {
            std::cout << "driver show" << std::endl ; 
        }

};

int main()
{

cout << endl;
cout << endl;
cout << endl;
    base b ;
    b.show() ;
cout << endl;
cout << endl;
cout << endl;

    driver d ; 
    d.show() ; 

cout << endl;
cout << endl;
    
    return 0 ; 
}
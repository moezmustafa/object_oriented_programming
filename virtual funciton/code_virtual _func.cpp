#include<iostream>

using namespace std;

class animal {

    public :

        void eat()
        {
            std::cout << "animal eat" << std::endl ; 

        }

};

class cat : public animal {

    public : 

        void eat()
        {
            std::cout << "cat eat" << std::endl ; 

        }

};


void functest(animal &a)
{
    a.eat() ; 
}

void functest(cat &c)
{
    c.eat() ; 
}

int main()
{
    animal a ;
    cat c ;
cout << endl;
cout << endl;
    functest(a) ;
cout << endl;
cout << endl;

    functest(c) ;

cout << endl;
cout << endl;



}

#include<iostream>

using namespace std ;


class animal {

    public : 

        virtual void eat ()
        {
            cout << "animal class eat " ; 
        }
};

class cat : public animal {

    public : 

        void eat()
        {
            cout << "cat class eat " ; 
        }
};

class dog : public animal {

    public : 

        void eat()
        {
            cout << "dog class eat " ; 
        }
};


int main()
{
    animal *a ; 
    animal x;
cout << endl;
cout << endl;
cout << endl;

    a = & x ;
    a->eat();
cout << endl;
cout << endl;

    cout << endl;

    cat c ;
    a = &c ;

    a->eat() ;

    cout << endl;
    cout << endl;
    cout << endl;

    dog d ;
    a = &d ;

    a->eat() ;

    cout << endl;
    cout << endl;
    cout << endl;
   

    return 0 ; 
}
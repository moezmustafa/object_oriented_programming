

#include<iostream>

class one {

    protected : 
         int a ; 

    public : 
        one() {
            a = 1 ; 
        }
        void display() {
            std::cout << "a = " << a << std::endl ; 
        }
};


#include<iostream>
#include<string>

using namespace std;

class permanent_one ;
class visiting_one ;

class one {

    protected :
        int id;
        std::string name;

    public :

       virtual void setter(int base_salary , int years_if_service , int id , std::string name);
       virtual void display();
       virtual void display_salary();



        
      
};


class permanent_one:public one {

    private : 
        int base_salary ; 
        int years_of_service ;

        int medical_allowance ;
        int house_rent_allowance ;

    public :

        
        void setter(int base_salary , int years_if_service , int id , std::string name) {
             this->base_salary = base_salary ; 
             this->years_of_service = years_of_service ;

             this -> id = id ;
             this -> name = name ;

               medical_allowance = base_salary * 0.1 ;
               house_rent_allowance = base_salary * 0.25 ; 
         }

        void display(){
            std::cout << "id = " << id << std::endl ; 
            std::cout << "name = " << name << std::endl ; 
            std::cout << "base salary = " << base_salary << std::endl ; 
            std::cout << "years of service = " << years_of_service << std::endl ; 
            std::cout << "medical allowance = " << medical_allowance << std::endl ; 
            std::cout << "house rent allowance = " << house_rent_allowance << std::endl ; 
        }

        float salary(){
            return base_salary + medical_allowance + house_rent_allowance ; 
        }

        void display_salary(){
            std::cout << "salary = " << salary() << std::endl ; 
        }


};


class visting_one:public one {


    protected :
        int hour_rate ;
        int hours_worked ;

    public : 
            
            void setter(int hour_rate , int hours_worked , int id , std::string name) {
                this -> hour_rate = hour_rate ; 
                this -> hours_worked = hours_worked ; 
    
                this -> id = id ;
                this -> name = name ; 
            }
    
            void display(){
                std::cout << "id = " << id << std::endl ; 
                std::cout << "name = " << name << std::endl ; 
                std::cout << "hour rate = " << hour_rate << std::endl ; 
                std::cout << "hours worked = " << hours_worked << std::endl ; 
            }
    
            float salary(){
                return hour_rate * hours_worked ; 
            }
    
            void display_salary(){
                std::cout << "salary = " << salary() << std::endl ; 
            }
};


int main(){


one *p1 = new permanent_one ;

p1 -> setter(100 , 10 , 1 , "abc") ;
p1 -> display() ;
p1 -> display_salary() ;






    
    
}
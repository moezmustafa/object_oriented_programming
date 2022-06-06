

#include<iostream>
#include<string>

using namespace std;


class one {

    protected :
        int id;
        string name;

    public :

       virtual void setter(int base_salary , int years_if_service , int id , string name);
       
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

        
        void setter(int base_salary , int years_if_service , int id , string name) {
             this->base_salary = base_salary ; 
             this->years_of_service = years_of_service ;

             this -> id = id ;
             this -> name = name ;

               medical_allowance = base_salary * 0.1 ;
               house_rent_allowance = base_salary * 0.25 ; 
         }

        void display(){
            cout << "id = " << id << endl ; 
            cout << "name = " << name << endl ; 
            cout << "base salary = " << base_salary << endl ; 
            cout << "years of service = " << years_of_service << endl ; 
            cout << "medical allowance = " << medical_allowance << endl ; 
            cout << "house rent allowance = " << house_rent_allowance << endl ; 
        }

        float salary(){
            return base_salary + medical_allowance + house_rent_allowance ; 
        }

        void display_salary(){
            cout << "salary = " << salary() << endl ; 
        }


};


class visting_one:public one {


    protected :
        int hour_rate ;
        int hours_worked ;

    public : 
            
            void setter(int hour_rate , int hours_worked , int id , string name) {
                this -> hour_rate = hour_rate ; 
                this -> hours_worked = hours_worked ; 
    
                this -> id = id ;
                this -> name = name ; 
            }
    
            void display(){
                cout << "id = " << id << endl ; 
                cout << "name = " << name << endl ; 
                cout << "hour rate = " << hour_rate << endl ; 
                cout << "hours worked = " << hours_worked << endl ; 
            }
    
            float salary(){
                return hour_rate * hours_worked ; 
            }
    
            void display_salary(){
                cout << "salary = " << salary() << endl ; 
            }
};


int main(){


one *p1 = new permanent_one ;

p1 -> setter(100 , 10 , 1 , "abc") ;
p1 -> display() ;
p1 -> display_salary() ;


one *p2 = new visting_one ;

p2 -> setter(100 , 10 , 1 , "abc") ;
p2 -> display() ;
p2 -> display_salary() ;





    
    
}
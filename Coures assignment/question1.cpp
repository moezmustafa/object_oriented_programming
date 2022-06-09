#include<iostream>
#include <string>




using namespace std ;

void spacer()
{
    cout << endl ;
}

class Date 
{
    int day, month, year ;
    public:
        Date(int d, int m, int y)
        {
            day = d ;
            month = m ;
            year = y ;
        }
        void display()
        {
            cout << day << "/" << month << "/" << year << endl ;
        }

    
};

class Flight 
{
    private : 
        Date date ;
        string flight_no ;
        bool international ;
        int economy_baggage = 4;
        int business_baggage = 8;
        int international_baggage = 10;
    public :

        virtual void input() ;
        virtual void display() ;



};


class international : public Flight : public Date
{
    public : 

        void input()
        {
            cout << "Enter the date of the flight : " ;
            cin >> date.day >> date.month >> date.year ;
            cout << "Enter the flight number : " ;
            cin >> flight_no ;
 
            cout << "Enter the number of business baggage : " ;
            cin >> business_baggage ;

        }

        void display()
        {
            cout << "Date of the flight : " ;
            date.display() ;
            cout << "Flight number : " << flight_no << endl ;
            cout << "Type of flight : " << international << endl ;
         
            cout << "Number of business baggage : " << business_baggage << endl ;
            cout << "Number of international baggage : " << international_baggage << endl ;
        }

            
};

class economy : public Flight : public Date
{
    public : 

    void input()
    {
        cout << "Enter the date of the flight : " ;
        cin >> date.day >> date.month >> date.year ;
        cout << "Enter the flight number : " ;
        cin >> flight_no ;
 
        cout << "Enter the number of economy baggage : " ;
        cin >> economy_baggage ;

    }
    void display()
    {
        cout << "Date of the flight : " ;
        date.display() ;
        cout << "Flight number : " << flight_no << endl ;
        cout << "Type of flight : " << economy << endl ;
     
        cout << "Number of economy baggage : " << economy_baggage << endl ;
        cout << "Number of international baggage : " << international_baggage << endl ;
    }

            
};

int main()
{

    system("color 0B") ;
    spacer() ;
    spacer() ;
    spacer() ;

    cout << "Welcome to the flight booking system" << endl ;
    spacer() ;
    cout << "Please enter the date of your flight" << endl ;
    spacer() ;
    int day, month, year ;
    cout << "Day : " ;
    cin >> day ;
    cout << "Month : " ;
    cin >> month ;
    cout << "Year : " ;
    cin >> year ;
    spacer() ;
    //flight type (international, economy)
    cout << "Please enter the type of flight you wish to book" << endl ;
    spacer() ;
    string flight_type ;
    cout << "Enter international or economy : " ;
    cin >> flight_type ;
    spacer() ;

    // if(flight_type == "international")
    // {
    //     Flight *f[5] = new international ;
    //     f[0]->input() ;
    //     f[] ->display() ;
    // }
    // else if(flight_type == "economy")
    // {
    //     Flight *f[5] = new economy ;
    //     f->input() ;
    //     f->display() ;
    // }
    // else
    // {
    //     cout << "Invalid flight type" << endl ;
    // }




}



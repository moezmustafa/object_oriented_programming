#include <iostream>
#include <string>

void spacer()
{
    std::cout << std::endl;
}

//random flight nnumber generator
int random_flight_number()
{
    int flight_number = rand() % 9999 + 1000;
    return flight_number;
}

void cleaner()
{
    system("cls");
}

void pause()
{
    system("pause");
}

class Flight
{
public:

    int flightNumber = random_flight_number();
    int seats = 200;
    std::string departure_city;
    std::string arrival_city;
    std::string departure_time;
    std::string arrival_time;
    std::string date;
    std::string airline = "UwU Airlines";



    virtual void input_details()
    {
        std::cout << "Enter the departure city : ";
        std::cin >> departure_city;
        std::cout << "Enter the arrival city : ";
        std::cin >> arrival_city;
        std::cout << "Enter the departure time : ";
        std::cin >> departure_time;
        std::cout << "Enter the arrival time : ";
        std::cin >> arrival_time;
        std::cout << "Enter the date : ";
        std::cin >> date;

    }
    virtual void display_details()
    {
        std::cout << "Flight Number : " << flightNumber << std::endl;
        std::cout << "Departure City : " << departure_city << std::endl;
        std::cout << "Arrival City : " << arrival_city << std::endl;
        std::cout << "Departure Time : " << departure_time << std::endl;
        std::cout << "Arrival Time : " << arrival_time << std::endl;
        std::cout << "Date : " << date << std::endl;
        std::cout << "Airline : " << airline << std::endl;

        std::cout << "Seats : " << seats << std::endl;
    }

};

class DomesticFlight : public Flight
{
    int baggage_allowance = 5;

public:
    void input_details()
    {
        std::cout << "Enter the departure city : ";
        std::cin >> departure_city;
        std::cout << "Enter the arrival city : ";
        std::cin >> arrival_city;
        std::cout << "Enter the departure time : ";
        std::cin >> departure_time;
        std::cout << "Enter the arrival time : ";
        std::cin >> arrival_time;
        std::cout << "Enter the date : ";
        std::cin >> date;
    }

    void display_details()
    {
        std::cout << "Flight Number : " << flightNumber << std::endl;
        std::cout << "Departure City : " << departure_city << std::endl;
        std::cout << "Arrival City : " << arrival_city << std::endl;
        std::cout << "Departure Time : " << departure_time << std::endl;
        std::cout << "Arrival Time : " << arrival_time << std::endl;
        std::cout << "Date : " << date << std::endl;
        std::cout << "Airline : " << airline << std::endl;
        std::cout << "Baggage Allowance : " << baggage_allowance << std::endl;
        std::cout << "Seats : " << seats << std::endl;
    }

};

class internationalFlight : public Flight
{
    bool direct_flight = true;

    void input_details()
    {
        std::cout << "Enter the departure city : ";
        std::cin >> departure_city;
        std::cout << "Enter the arrival city : ";
        std::cin >> arrival_city;
        std::cout << "Enter the departure time : ";
        std::cin >> departure_time;
        std::cout << "Enter the arrival time : ";
        std::cin >> arrival_time;
        std::cout << "Enter the date : ";
        std::cin >> date;
    }

    void display_details()
    {
        std::cout << "  Flight Number : " << flightNumber << std::endl;
        std::cout << "  Departure City : " << departure_city << std::endl;
        std::cout << "  Arrival City : " << arrival_city << std::endl;
        std::cout << "  Departure Time : " << departure_time << std::endl;
        std::cout << "  Arrival Time : " << arrival_time << std::endl;
        std::cout << "  Date : " << date << std::endl;
        std::cout << "  Airline : " << airline << std::endl;
        std::cout << "  Direct Flight : " << direct_flight << std::endl;
        std::cout << "  Seats : " << seats << std::endl;
    }
};

int main()
{

    system("TITLE Moeez_Jamshed's_Flight_Booking_System");
    system("color 0B");

    int counter = 0;
    int choice;


    Flight* f[5];

   

    do {
        spacer();
        spacer();
        spacer();

        std::cout << "  Are you a domestic or international flight?" << std::endl;
        std::cout << "  1. Domestic" << std::endl;
        std::cout << "  2. International" << std::endl;
        std::cout << "  3. Exit" << std::endl;
        std::cin >> choice;
        


        spacer();
        spacer();
        spacer();
        spacer();



        switch (choice)
        {
        case 1:
        {
            f[0] = new DomesticFlight();
            f[0]->input_details();
            cleaner();
            spacer();
            spacer();
            spacer();
            f[0]->display_details();
            pause();
            cleaner();
            break;
        }

        case 2:
        {
            f[1] = new internationalFlight();
            f[1]->input_details();
            cleaner();
            spacer();
            spacer();
            spacer();
            f[1]->display_details();
            pause();
            cleaner();
            break;
        }
        }

    } while (choice != 3 || counter != 5);


    spacer();
    spacer();
    spacer();
    spacer();

}
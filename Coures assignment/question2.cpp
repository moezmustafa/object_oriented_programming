#include<iostream>
#include<string>


//adds spaces 
void spacer()
{
    std::cout << std::endl;
}

//clears the screen 
void cleaner()
{
    system("cls");
}

//pause
void pause()
{
    system("pause");
}

//diplay system date and time
void display_date_time()
{
    std::cout << "Date : " << __DATE__ << std::endl;
    std::cout << "Time : " << __TIME__ << std::endl;
}

int rooms[10] ;
int laboratory[10];

//fill the array with zeros
void fill_array_with_zeros()
{
    for(int i = 0; i < 10; i++)
    {
        rooms[i] = 0;
    }
}

//fill the array with zeros
void fill_array_with_zeros_laboratory()
{
    for(int i = 0; i < 10; i++)
    {
        laboratory[i] = 0;
    }
}






// classroom allocation function
int classroom_allocator()
{
    //randomly allocate classroom
    
    int classroom = rand() % 10;

    if(rooms[classroom] == 0)
    {
        rooms[classroom] = 1;
        return classroom;
    }
    else
    {
        return classroom_allocator();
    }
}

int rooms_available()
{
    int rooms_available = 0;
    for(int i = 0; i < 10; i++)
    {
        if(rooms[i] == 0)
        {
            rooms_available++;
        }
    }
    return rooms_available;
}


//laboratory allocation function
int laboratory_allocator()
{
    //randomly allocate laboratory
    
    int laboratory1 = rand() % 10;

    if(laboratory[laboratory1] == 0)
    {
        laboratory[laboratory1] = 1;
        return laboratory1;
    }
    else
    {
        return laboratory_allocator();
    }
}


int laboratory_available()
{
    int laboratory_available = 0;
    for(int i = 0; i < 10; i++)
    {
        if(laboratory[i] == 0)
        {
            laboratory_available++;
        }
    }
    return laboratory_available;
}









class Exam {

public:
    //variables for date
    int day;
    int month;
    int year;

    //variables for time
    int hour;
    int minute;

    //variables for exam

    virtual void input_details()
    {
        std::cout << "Enter the day : ";
        std::cin >> day;
        std::cout << "Enter the month : ";
        std::cin >> month;
        std::cout << "Enter the year : ";
        std::cin >> year;
        std::cout << "Enter the hour : ";
        std::cin >> hour;
        std::cout << "Enter the minute : ";
        std::cin >> minute;
    }

    virtual void display_details()
    {

        display_date_time();
    
        spacer();
        std::cout << "Rooms available : " << rooms_available() << std::endl;
        spacer();
        std::cout << "Classroom allocated : " << classroom_allocator() << std::endl;
        spacer();
        std::cout << "Exam time : " << hour << ":" << minute << std::endl;
        spacer();
        std::cout << "Exam date : " << day << "/" << month << "/" << year << std::endl;
        spacer();
    }
    

};

class Theory : public Exam {

    //variables for theory
    

    std::string teacher_name;
    int payment =20;

    int classroom;

    public :

    void input_details()
    {
        std::cout << "Enter the teacher name : ";
        std::cin >> teacher_name;
        std::cout << "Enter the date : ";
        std::cin >> day;
        std::cin >> month;
        std::cin >> year;
        std::cout << "Enter the time : ";
        std::cin >> hour;
        std::cin >> minute;

        classroom = classroom_allocator();

    }

    void display_details()
    {
        display_date_time();
        spacer();
        spacer();
        std::cout << "Rooms available : " << rooms_available() << std::endl;
        spacer();
        spacer();
        std::cout << "Teacher name : " << teacher_name << std::endl;
        spacer();
        std::cout << "Classroom allocated : " << classroom << std::endl;
        spacer();
        std::cout << "Exam time : " << hour << ":" << minute << std::endl;
        spacer();
        std::cout << "Exam date : " << day << "/" << month << "/" << year << std::endl;
        spacer();
        std::cout << "Payment : " << payment << std::endl;
        spacer();
    }

};

class Practical : public Exam {

    //variables for practical
   
  

    std::string teacher_name;
    int payment = 10;

    public :
    void input_details()
    {
        std::cout << "Enter the teacher name : ";
        std::cin >> teacher_name;
        std::cout << "Enter the date : ";
        std::cin >> day;
        std::cin >> month;
        std::cin >> year;
        std::cout << "Enter the time : ";
        std::cin >> hour;
        std::cin >> minute;
    }

    void display_details()
    {
        display_date_time();
        spacer();
        spacer();
        std::cout << "Labs available : " << laboratory_available() << std::endl;
        spacer();
        spacer();
        std::cout << "Teacher name : " << teacher_name << std::endl;
        spacer();
        std::cout << "lab allocated : " << laboratory_allocator() << std::endl;
        spacer();
        std::cout << "Exam time : " << hour << ":" << minute << std::endl;
        spacer();
        std::cout << "Exam date : " << day << "/" << month << "/" << year << std::endl;
        spacer();
        std::cout << "Payment : " << payment << std::endl;
        spacer();


    }



};






int main()
{


    Exam *exam[10];

    int choice;
    int counter = 0;

    do
    {
        system("TITLE MOEEZ_JAMSHED Exam Scheduler");
        system("color 0A");

        spacer();
        spacer();
        spacer();
        std::cout << "  1. Theory" << std::endl;
        std::cout << "  2. Practical" << std::endl;
        std::cout << "  3. Exit" << std::endl;

        std::cout << "Enter your choice : ";
        std::cin >> choice;

        switch(choice)
        {
            case 1:
            {
                Theory *theory = new Theory();
                theory->input_details();
                theory->display_details();
                break;
            }
            case 2:
            {
                Practical *practical = new Practical();
                practical->input_details();
                practical->display_details();
                break;
            }
            case 3:
            {
                system("exit");
                break;
            }
            default:
            {
                std::cout << "Invalid choice" << std::endl;
            }

            counter++;
        }

    } while (counter != 10 || choice != 3);
    
    


}
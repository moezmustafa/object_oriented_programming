#include<iostream>
#include<string>
#include<stack>

int size = 10 ;
using namespace std ; 

class Stack {

    public : 
    
        int top = -1 ;  
        int *arr = new int[size] ;

    void push ( )
    {
        if(top == size-1)
        {
            cout<<"Stack Overflow"<<endl ;
        }
        else
        {
            top++ ;
            cout<<"Enter the value to be pushed"<<endl ;
            cin>>arr[top] ;
        }
    }

    void pop ( )
    {
        if(top == -1)
        {
            cout<<"Stack is empty"<<endl ;
        }
        else
        {
            cout<<"Popped value is "<<arr[top]<<endl ;
            top-- ;
        }
    }

    // void top()
    // {
    //     if(top == -1)
    //     {
    //         cout<<"Stack is empty"<<endl ;
    //     }
    //     else
    //     {
    //         cout<<"Top value is "<<arr[top]<<endl ;
    //     }

    // }

    void empty()
    {
        if(top == -1)
        {
            cout<<"Stack is empty"<<endl ;
        }
        else
        {
            cout<<"Stack is not empty"<<endl ;
        }
    }


    void display ( )
    {
        if(top == -1)
        {
            cout<<"Stack is empty"<<endl ;
        }
        else
        {
            for(int i=top; i>=0; i--)
            {
                cout<<arr[i]<<" " ;
            }
            cout<<endl ;
        }
    }
};


int main ()
{
    Stack object ;
    object.push() ;
    object.push() ;
    object.push() ;
    object.push() ;
    object.push() ;
  

    object.display() ;

    object.pop() ;

    object.display() ;

    object.pop() ;

    object.display() ;
    
     object.pop() ;

    object.display() ;
     object.pop() ;

    object.display() ;

    
}
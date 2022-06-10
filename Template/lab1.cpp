#include<iostream>
#include<string>

using namespace std ; 

//template function returns the average of the array
template<typename moeez>
    float average(moeez *arr, int size)
    {
        moeez sum = 0;
        for(int i=0; i<size; i++)
        {
            sum += arr[i];
        }
        return sum/size;
    }

//template to find minimum of the array
template<typename moeez>
    float minimum(moeez *arr, int size)
    {
        moeez min = arr[0];
        for(int i=1; i<size; i++)
        {
            if(arr[i]<min)
            {
                min = arr[i];
            }
        }
        return min;
    }
//template to find the maximum of the array
template<typename moeez>
    float maximum(moeez *arr, int size )
    {
        moeez max = arr[0];
        for(int i=1; i<size; i++)
        {
            if(arr[i]>max)
            {
                max = arr[i];
            }
        }
        return max;
    }



int main ()
{
    int arr[10];
    float arr2[10];

    //fill int array with random numbers
    for(int i=0; i<10; i++)
    {
        arr[i] = rand()%100;
    }

    //fill float array with random numbers
    for(int i=0; i<10; i++)
    {
        arr2[i] = rand()%100;
    }

    

    // std::string arr3[10] = {"hello", "world", "this", "is", "a", "test", "of", "the", "string", "array"};
    cout << endl;
    cout << endl;
    cout << endl;

    cout<<"Average of int array: "<<average(arr, 10)<<endl;
    cout<<"Average of float array: "<<average(arr2, 10)<<endl;
    // cout<<"Average of string array: "<<average(arr3, 10)<<endl;

    cout << endl;
    cout << endl;
    cout << endl;

    cout<<"Minimum of int array: "<<minimum(arr, 10)<<endl;
    cout<<"Minimum of float array: "<<minimum(arr2, 10)<<endl;

    cout << endl;
    cout << endl;
    cout << endl;

    cout << "Maximum of int array: "<<maximum(arr, 10)<<endl;
    cout << "Maximum of float array: "<<maximum(arr2, 10)<<endl;

    cout << endl;
    cout << endl;


    return 0;



}
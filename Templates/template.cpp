#include<iostream>
#include<string>

//create a template 

template<typename moeez>
    void printarray(moeez *arr, int size)
    {
        for(int i=0; i<size; i++)
        {
            std::cout<<arr[i]<<" ";
        }
        std::cout<<std::endl;
    }


int main(){
    int arr[] = {1,2,3,4,5};
    printarray(arr, 5);
    std::string arr2[] = {"hello", "world"};
    printarray(arr2, 2);
    return 0;
}
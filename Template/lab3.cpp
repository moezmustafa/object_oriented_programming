#include <iostream> 
#include <stack> 
using namespace std;



int main() {
    stack<int> moeez;
    
    moeez.push(1);
    moeez.push(2);
    moeez.push(3);
    moeez.push(4);
    moeez.push(5);



  
    while (!moeez.empty()) {
        cout << "This is a value " << moeez.top() << endl;
        moeez.pop();
    }

    //display the stack
    cout << endl;
    

    return 0;


}
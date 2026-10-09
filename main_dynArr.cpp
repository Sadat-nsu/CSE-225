#include <iostream>
#include ".git/dynArr.h"
#include "dynArr.h"
using namespace std;

int main(){
    dynArr obj1;
    dynArr obj2(5);

    cout << "Enter 5 integer values: " << endl;
    for(int i=0;i<5;i++){
        int input;
        cin >> input;
        obj2.setValue(i, input); 
    }
        
    cout << "Values stored in the obj2: " << endl;
    for (int i=0; i<5; i++) {
        cout << obj2.getValue(i) << " " ;

        }
    
    cout << endl;
    return 0;
    
}
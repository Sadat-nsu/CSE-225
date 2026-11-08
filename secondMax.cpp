#include "UnsortedTypeLL.h"
#include <iostream>
#include "UnsortedTypeLL.cpp"

using namespace std;

template<class ItemType>
int findSecondMax(UnsortedTypeLL<ItemType>& list){
    int length = list.LengthIs();
    if(length<2) return -1;

    list.ResetList();
    int maxVal;
    list.GetNextItem(maxVal);
    for(int i=1;i<length;i++){
        int current;
        list.GetNextItem(current);
        if(current>maxVal){
            maxVal=current;
        }
    }

    list.ResetList();
    int secondMax;
    bool found=false;
    for(int i=0;i<length;i++){
        int current;
        list.GetNextItem(current);
        if(current<maxVal){
            if(!found || current > secondMax){
            secondMax=current;
            found=true;
            }
        }    
    }
    if(found) return secondMax;
    else return -1;
}

int main(){
     UnsortedTypeLL<int> list1;
    list1.InsertItem(4);
    list1.InsertItem(12);
    list1.InsertItem(8);
    list1.InsertItem(7);
    list1.InsertItem(1);
    list1.InsertItem(8);
    list1.InsertItem(9);
    cout << "Second Largest number in List 1 is " << findSecondMax(list1) << endl;

      UnsortedTypeLL<int> list2;
    list1.InsertItem(7);
    list1.InsertItem(7);
    list1.InsertItem(7);
    list1.InsertItem(7);
  
    cout << "Second Largest number in List 2 is " << findSecondMax(list2) << endl;
}

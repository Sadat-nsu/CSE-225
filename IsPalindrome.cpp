#include <iostream>
#include "UnsortedTypeLL.h"
#include "UnsortedTypeLL.cpp"

using namespace std;

template<class ItemType>
bool isPalindrome(UnsortedTypeLL<ItemType>& list){
    int length = list.LengthIs();
    if(length<2) return true;

    
    int arr[length];
    list.ResetList();
    for(int i=0;i<length;i++){
        list.GetNextItem(arr[i]);
    }
    int left=0;
    int right=length-1;
    while(left<right){
        if(arr[left]!=arr[right])return false;
        left++;
        right--;
    }
    return true;
}

int main(){
    UnsortedTypeLL<int> list1;
    list1.InsertItem(1);
    list1.InsertItem(2);
    list1.InsertItem(2);
    list1.InsertItem(1);
    cout << " list 1 [1 2 2 1] " << isPalindrome(list1) << endl;

     UnsortedTypeLL<int> list2;
    list2.InsertItem(1);
    list2.InsertItem(2);
    list2.InsertItem(3);
    list2.InsertItem(4);
    cout << " list 1 [1 2 3 4] " << isPalindrome(list2) << endl;
    return 0;
}
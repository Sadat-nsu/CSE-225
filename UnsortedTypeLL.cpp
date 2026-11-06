#include "UnsortedTypeLL.h"
#include <iostream>
#include <new>

using namespace std;

template <class ItemType>
UnsortedTypeLL<ItemType>::UnsortedTypeLL(){
    length=0;
    listData=NULL;
    currentPos=NULL;
}

template <class ItemType>
UnsortedTypeLL<ItemType>::~UnsortedTypeLL(){
    MakeEmpty();
}

template <class ItemType>
int UnsortedTypeLL<ItemType>::LengthIs(){
    return length;
}

template <class ItemType>
void UnsortedTypeLL<ItemType>::MakeEmpty(){
    NodeType<ItemType>* temp;
    while(listData!=NULL){
    temp=listData;
    listData=listData->next;
    delete temp;
    }
    length=0;
}

template <class ItemType>
bool UnsortedTypeLL<ItemType>::IsFull(){
    NodeType<ItemType>* temp;
    try{
        temp = new NodeType<ItemType>;
        delete temp;
        return false;
    }

    catch(bad_alloc&){
        return true;
    }
}

template <class ItemType>
void UnsortedTypeLL<ItemType>::InsertItem(ItemType item){
    NodeType<ItemType>* location = new NodeType<ItemType>;
    location->info=item;
    location->next=listData;
    listData=location;
    length++;
}

template <class ItemType>
void UnsortedTypeLL<ItemType>::RetrieveItem(ItemType& item, bool& found){
    found=false;
    NodeType<ItemType>* location=listData;

    while (!found && location != NULL) {
      if (location->info == item) {
        found = true;
        item = location->info;
      }
      location = location->next;
    }
}

template <class ItemType>
void UnsortedTypeLL<ItemType>::DeleteItem(ItemType item){
    NodeType<ItemType>* location=listData;
    NodeType<ItemType>* temp;

    if(item==location->info){
        temp=location;
        listData=listData->next;
    } else{
        while(!(item==(location->next)->info))
            {   
                location=location->next;

            }   
                temp=location->next;
                location->next=(location->next)->next;
            
        }
        delete temp;
        length--;
}

template <class ItemType>
void UnsortedTypeLL<ItemType>::ResetList(){
    currentPos=NULL;
}

template <class ItemType>
void UnsortedTypeLL<ItemType>::GetNextItem(ItemType& item){
    if(currentPos==NULL){
        currentPos=listData;
    } else {
        currentPos=currentPos->next;
    }

    item = currentPos->info;
}
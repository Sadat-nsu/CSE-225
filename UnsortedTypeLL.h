#ifndef UNSORTEDTYPELL_H
#define UNSORTEDTYPELL_H
template <class ItemType>
struct NodeType{
    ItemType info;
    NodeType* next;
};

template <class ItemType>
class UnsortedTypeLL{
private:
    NodeType<ItemType>* listData;
    NodeType<ItemType>* currentPos;
    int length;

public:    
    UnsortedTypeLL();
    ~UnsortedTypeLL();
    int LengthIs();
    void MakeEmpty();
    bool IsFull();
    void InsertItem(ItemType);
    void RetrieveItem(ItemType&, bool&);
    void DeleteItem(ItemType);
    void ResetList();
    void GetNextItem(ItemType&);

};
#endif
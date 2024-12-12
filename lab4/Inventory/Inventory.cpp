#include <iostream>
#include "Inventory.h"
using namespace std;
int Inventory::talItemsSold=0;

Inventory::Inventory(){
    itemID=0;
    itemName=" ";
    quantityOnHand=0;

}
Inventory::Inventory(int itemID,string itemName,int quantityOnHand){
    this->itemID=itemID;
    this->itemName=itemName;
    this->quantityOnHand=quantityOnHand;
}
void Inventory::setItemID(int itemID){
    if (itemID>0)
    {
        this->itemID=itemID;
    }

}

void Inventory::setItemName(string itemName){
    if (itemName.length()>0)
    {
        this->itemName=itemName;
    }

}
void Inventory::setQuantityOnHand(int quantityOnHand){
    if (quantityOnHand>0)
    {
        this->quantityOnHand=quantityOnHand;
    }

}
int Inventory::getTalItemsSold()
{
    return talItemsSold;
}
void Inventory::updateTalItemsSold(int quantity)
{
    if (quantity > 0)
    {
        talItemsSold += quantity;
    }
}
void Inventory::sellItem(int quantity)
{
     if (quantity > 0 && quantity <= quantityOnHand)
    {
        quantityOnHand -= quantity;
        updateTalItemsSold(quantity);
    }
    else
    {
        cout << "Invalid quantity to sell!" << endl;
    }
}

void Inventory::print()
{
    cout << "Item ID: " << itemID << endl;
    cout << "Item Name: " << itemName << endl;
    cout << "Quantity on Hand: " << quantityOnHand << endl;
}
Inventory::~Inventory(){
    cout << "Product Destructor" << endl;
}


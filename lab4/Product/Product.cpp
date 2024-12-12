#include <iostream>
#include "Product.h"

using namespace std;
Product::Product(){
    productID = 0;
    productName = "";
    productPrice = 0.0;
}
Product::Product(int id,string name,double price){
    setProduct(id,name,price);
}
void Product::setProductID(int id){
    if (id > 0)
    {
        this->productID = id;
    }

}
void Product::setProductName(string name){
    if (name.length() > 0)
    {
        this->productName = name;
    }


}
void Product::setProductPrice(double price){
    if (price > 0)
    {
        this->productPrice = price;
    }

}
int Product::getProductID(){
    return productID;
}
string Product::getProductName(){
    return productName;
}
double Product::getProductPrice(){
    return productPrice;
}
void Product::setProduct(int id,string name,double price){
    setProductID(id);
    setProductName(name);
    setProductPrice(price);
}
void Product::printProduct(){
    cout << "Product ID: " << getProductID() << endl;
    cout << "Product Name: " << getProductName() << endl;
    cout << "Product Price: " << getProductPrice() << endl<<endl;

}
Product::~Product(){
    cout << "Product Destructor" << endl;
}

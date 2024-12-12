#ifndef PRODUCT_H_INCLUDED
#define PRODUCT_H_INCLUDED
#include <iostream>
using namespace std;
struct Product{
    private:
    int productID;
    string productName;
    double productPrice;
    public:
    Product();
    Product(int,string,double);
    void setProductID(int);
    void setProductName(string);
    void setProductPrice(double);
    int getProductID();
    string getProductName();
    double getProductPrice();
    void setProduct(int,string,double);
    void printProduct();
    ~Product();
};

#endif // PRODUCT_H_INCLUDED

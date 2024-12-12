#include <iostream>
#include "Product.h"
using namespace std;

int main()
{
    Product p1;
    Product p2(1001,"Laptop",10000.00);

    p1.setProduct(1002,"Mouse",100.00);
    p1.printProduct();

    p2.printProduct();
    return 0;
}

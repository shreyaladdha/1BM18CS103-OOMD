/**
 * Project Untitled
 */


#ifndef _PRODUCTDISPENSER_H
#define _PRODUCTDISPENSER_H

#include "Product.h"


class ProductDispenser {
public: 
    void product;
    void quantity;
    vector<Product> dispense;
    
void dispense();
    
void giveProduct();
};

#endif //_PRODUCTDISPENSER_H
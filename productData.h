/***********************************************************
*   Author: Johnny Huang
*   Class: CPTS 223
*   Date: October 10 2025
*   Assignment: PA 3: inventory management
*   Description: 
***********************************************************/

#pragma once

#define CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <list>


using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::list;

class ProductData
{
    public:
    // default constructor
    ProductData();

    // copy constructor
    ProductData(ProductData &r);
    
    // deconstructor
    ~ProductData();

    // overloaded operator
    ProductData& operator=(const ProductData &rhs);

    // getters




    // setters

    

    private:
    string uniqId, productName, brandName, asin, upcEanCode, listPrice, sellingPrice, quantity, modelNumber, aboutProduct, productSpecification,
    technicalDetails, shippingWeight, productDimensions, image, variants, sku, productUrl, stock, productDetails, dimensions, color, ingredients, directionToUse,
    isAmazonSeller, sizeQuantityVariant, productDescription;
    list<string> categories;
};
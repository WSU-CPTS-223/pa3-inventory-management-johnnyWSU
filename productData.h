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
    string getUniqId() const; 
    
    string getProductName() const; 
    
    string getBrandName() const; 
    
    string getAsin() const; 
    
    string getUpcEanCode() const; 
    
    string getListPrice() const; 
    
    string getSellingPrice() const; 
    
    string getQuantity() const; 
    
    string getModelNumber() const; 
    
    string getAboutProduct() const; 
    
    string getProductSpecification() const; 
    
    string getTechnicalDetails() const; 
    
    string getShippingWeight() const; 
    
    string getProductDimensions() const; 
    
    string getImage() const; 
    
    string getVariants() const; 
    
    string getSku() const; 
    
    string getProductUrl() const; 
    
    string getStock() const; 
    
    string getProductDetails() const; 
    
    string getDimensions() const; 
    
    string getColor() const; 
    
    string getIngredients() const; 
    
    string getDirectionToUse() const; 
    
    string getIsAmazonSeller() const; 
    
    string getSizeQuantityVariant() const; 
    
    string getProductDescription() const;

    // list string??

    // setters
    void setUniqId(const string newUniqId);

    void setProductName(const string newProductName);

    void setBrandName(const string newBrandName);

    void setAsin(const string newAsin);

    void setUpcEanCode(const string newUpcEanCode);

    void setListPrice(const string newListPrice);

    void setSellingPrice(const string newSellingPrice);

    void setQuantity(const string newQuantity);

    void setModelNumber(const string newModelNumber);

    void setAboutProduct(const string newAboutProduct);

    void setProductSpecification(const string newProductSpecification);

    void setTechnicalDetails(const string newTechnicalDetails);

    void setShippingWeight(const string newShippingWeight);

    void setProductDimensions(const string newProductDimensions);

    void setImage(const string newImage);
    
    void setVariants(const string newVariants);

    void setSku(const string newSku);

    void setProductUrl(const string newProductUrl);

    void setStock(const string newStock);

    void setProductDetails(const string newProductDetails);

    void setDimensions(const string newDimensions);

    void setColor(const string newColor);

    void setIngredients(const string newIngredients);

    void setDirectionToUse(const string newDirectionToUse);

    void setIsAmazonSeller(const string newIsAmazonSeller);

    void setSizeQuantityVariant(const string newSizeQuantityVariant);

    void setProductDescription(const string newProductDescription);


    // public element
    list<string> categories;


    private:
    string uniqId, productName, brandName, asin, upcEanCode, listPrice, sellingPrice, quantity, modelNumber, aboutProduct, productSpecification,
    technicalDetails, shippingWeight, productDimensions, image, variants, sku, productUrl, stock, productDetails, dimensions, color, ingredients, directionToUse,
    isAmazonSeller, sizeQuantityVariant, productDescription;
    
};
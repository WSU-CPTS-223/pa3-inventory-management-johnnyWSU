/***********************************************************
*   Author: Johnny Huang
*   Class: CPTS 223
*   Date: October 10 2025
*   Assignment: PA 3: inventory management
*   Description: 
***********************************************************/

#include "productData.h"

    // default constructor
    ProductData::ProductData()
    {
        this->uniqId = "";
        this->productName = "";
        this->brandName = "";
        this->asin = "";
        this->upcEanCode = "";
        this->listPrice = "";
        this->sellingPrice = "";
        this->quantity = "";
        this->modelNumber = "";
        this->aboutProduct = "";
        this->productSpecification = "";
        this->technicalDetails = "";
        this->shippingWeight = "";
        this->productDimensions = "";
        this->image = ""; 
        this->variants = "";
        this->sku = "";
        this->productUrl = "";
        this->stock = "";
        this->productDetails = "";
        this->dimensions = "";
        this->color = "";
        this->ingredients = "";
        this->directionToUse = "";
        this->isAmazonSeller = "";
        this->sizeQuantityVariant = "";
        this->productDescription = "";
    }

    // copy constructor
    ProductData::ProductData(ProductData &r)
    {
        r.uniqId = "";
        r.productName = "";
        r.brandName = "";
        r.asin = "";
        r.upcEanCode = "";
        r.listPrice = "";
        r.sellingPrice = "";
        r.quantity = "";
        r.modelNumber = "";
        r.aboutProduct = "";
        r.productSpecification = "";
        r.technicalDetails = "";
        r.shippingWeight = "";
        r.productDimensions = "";
        r.image = ""; 
        r.variants = "";
        r.sku = "";
        r.productUrl = "";
        r.stock = "";
        r.productDetails = "";
        r.dimensions = "";
        r.color = "";
        r.ingredients = "";
        r.directionToUse = "";
        r.isAmazonSeller = "";
        r.sizeQuantityVariant = "";
        r.productDescription = "";
    }
    
    // deconstructor
    ProductData::~ProductData()
    {

    }

    // overloaded operator
    ProductData& ProductData::operator=(const ProductData &rhs)
    {
        this->uniqId = rhs.uniqId;
        this->productName = rhs.productName;
        this->brandName = rhs.brandName;
        this->asin = rhs.asin;
        this->upcEanCode = rhs.upcEanCode;
        this->listPrice = rhs.listPrice;
        this->sellingPrice = rhs.sellingPrice;
        this->quantity = rhs.quantity;
        this->modelNumber = rhs.modelNumber;
        this->aboutProduct = rhs.aboutProduct;
        this->productSpecification = rhs.productSpecification;
        this->technicalDetails = rhs.technicalDetails;
        this->shippingWeight = rhs.shippingWeight;
        this->productDimensions = rhs.productDimensions;
        this->image = rhs.image; 
        this->variants = rhs.variants;
        this->sku = rhs.sku;
        this->productUrl = rhs.productUrl;
        this->stock = rhs.stock;
        this->productDetails = rhs.productDetails;
        this->dimensions = rhs.dimensions;
        this->color = rhs.color;
        this->ingredients = rhs.ingredients;
        this->directionToUse = rhs.directionToUse;
        this->isAmazonSeller = rhs.isAmazonSeller;
        this->sizeQuantityVariant = rhs.sizeQuantityVariant;
        this->productDescription = rhs.productDescription;
    }

    // getters
    string ProductData::getUniqId() const
    {
        return this->uniqId;
    }
    
    string ProductData::getProductName() const
    {
        return this->productName;
    }
    
    string ProductData::getBrandName() const
    {
        return this->brandName;
    }
    
    string ProductData::getAsin() const
    {
        return this->asin;
    }
    
    string ProductData::getUpcEanCode() const
    {
        return this->upcEanCode;
    }
    
    string ProductData::getListPrice() const
    {
        return this->listPrice;
    }
    
    string ProductData::getSellingPrice() const
    {
        return this->sellingPrice;
    }
    
    string ProductData::getQuantity() const
    {
        return this->quantity;
    }
    
    string ProductData::getModelNumber() const
    {
        return this->modelNumber;
    }
    
    string ProductData::getAboutProduct() const
    {
        return this->aboutProduct;
    }
    
    string ProductData::getProductSpecification() const
    {
        return this->productSpecification;
    }
    
    string ProductData::getTechnicalDetails() const
    {
        return this->technicalDetails;
    }
    
    string ProductData::getShippingWeight() const
    {
        return this->shippingWeight;
    } 
    
    string ProductData::getProductDimensions() const
    {
        return this->productDimensions;
    }
    
    string ProductData::getImage() const
    {
        return this->image;
    }
    
    string ProductData::getVariants() const
    {
        return this->variants;
    }
    
    string ProductData::getSku() const
    {
        return this->sku;
    }
    
    string ProductData::getProductUrl() const
    {
        return this->productUrl;
    }
    
    string ProductData::getStock() const
    {
        return this->stock;
    }
    
    string ProductData::getProductDetails() const
    {
        return this->productDetails;
    }
    
    string ProductData::getDimensions() const
    {
        return this->dimensions;
    }
    
    string ProductData::getColor() const
    {
        return this->color;
    }
    
    string ProductData::getIngredients() const
    {
        return this->ingredients;
    }
    
    string ProductData::getDirectionToUse() const
    {
        return this->directionToUse;
    }
    
    string ProductData::getIsAmazonSeller() const
    {
        return this->isAmazonSeller;
    }
    
    string ProductData::getSizeQuantityVariant() const
    {
        return this->sizeQuantityVariant;
    }
    
    string ProductData::getProductDescription() const
    {
        return this->productDescription;
    }

    // setters
    void ProductData::setUniqId(const string newUniqId)
    {
        this->uniqId = newUniqId;
    }

    void ProductData::setProductName(const string newProductName)
    {
        this->productName = newProductName;
    }

    void ProductData::setBrandName(const string newBrandName)
    {
        this->brandName = newBrandName;
    }

    void ProductData::setAsin(const string newAsin)
    {
        this->asin = newAsin;
    }

    void ProductData::setUpcEanCode(const string newUpcEanCode)
    {
        this->upcEanCode = newUpcEanCode;
    }

    void ProductData::setListPrice(const string newListPrice)
    {
        this->listPrice = newListPrice;
    }

    void ProductData::setSellingPrice(const string newSellingPrice)
    {
        this->sellingPrice = newSellingPrice;
    }

    void ProductData::setQuantity(const string newQuantity)
    {
        this->quantity = newQuantity;
    }

    void ProductData::setModelNumber(const string newModelNumber)
    {
        this->modelNumber = newModelNumber;
    }

    void ProductData::setAboutProduct(const string newAboutProduct)
    {
        this->aboutProduct = newAboutProduct;
    }

    void ProductData::setProductSpecification(const string newProductSpecification)
    {
        this->productSpecification = newProductSpecification;
    }

    void ProductData::setTechnicalDetails(const string newTechnicalDetails)
    {
        this->technicalDetails = newTechnicalDetails;
    }

    void ProductData::setShippingWeight(const string newShippingWeight)
    {
        this->shippingWeight = newShippingWeight;
    }

    void ProductData::setProductDimensions(const string newProductDimensions)
    {
        this->productDimensions = newProductDimensions;
    }

    void ProductData::setImage(const string newImage)
    {
        this->image = newImage;
    }
    
    void ProductData::setVariants(const string newVariants)
    {
        this->variants = newVariants;
    }

    void ProductData::setSku(const string newSku)
    {
        this->sku = newSku;
    }

    void ProductData::setProductUrl(const string newProductUrl)
    {
        this->productUrl = newProductUrl;
    }

    void ProductData::setStock(const string newStock)
    {
        this->stock = newStock;
    }

    void ProductData::setProductDetails(const string newProductDetails)
    {
        this->productDetails = newProductDetails;
    }

    void ProductData::setDimensions(const string newDimensions)
    {
        this->dimensions = newDimensions;
    }

    void ProductData::setColor(const string newColor)
    {
        this->color = newColor;
    }

    void ProductData::setIngredients(const string newIngredients)
    {
        this->ingredients = newIngredients;
    }

    void ProductData::setDirectionToUse(const string newDirectionToUse)
    {
        this->directionToUse = newDirectionToUse;
    }

    void ProductData::setIsAmazonSeller(const string newIsAmazonSeller)
    {
        this->isAmazonSeller = newIsAmazonSeller;
    }

    void ProductData::setSizeQuantityVariant(const string newSizeQuantityVariant)
    {
        this->sizeQuantityVariant = newSizeQuantityVariant;
    }

    void ProductData::setProductDescription(const string newProductDescription)
    {
        this->productDescription = newProductDescription;
    }

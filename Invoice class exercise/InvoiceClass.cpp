#include <iostream>
#include "InvoiceClass.h"
using std::cout;
using std::cin;
using std::endl;
using std::string;

InvoiceClass::InvoiceClass(string number, string description, int quantity, int price)
{
   setPartNumber(number);
   setPartDescription(description);
   setQuantityOfItem(quantity);
   setPricePerItem(price);
}

void InvoiceClass::setPartNumber( string num ) {
    partNumber = num;
}

void InvoiceClass::setPartDescription( string des ) {
    partDescription = des;
}

void InvoiceClass::setQuantityOfItem( int num ) {
    quantityOfItem = num;
}

void InvoiceClass::setPricePerItem( int price ) {
    pricePerItem = price;
}

string InvoiceClass::getPartNumber() {
    return partNumber;
}

string InvoiceClass::getPartDescription() {
    return partDescription;
}

int InvoiceClass::getQuantityOfItem() {
    return quantityOfItem;
}

int InvoiceClass::getPricePerItem() {
    return pricePerItem;
}

int InvoiceClass::getInvoiceAmount() {
    if (quantityOfItem < 0){ quantityOfItem = 0; }
    if (pricePerItem < 0){ pricePerItem = 0; }

    int amount = quantityOfItem * (double) pricePerItem;
    return amount;
}

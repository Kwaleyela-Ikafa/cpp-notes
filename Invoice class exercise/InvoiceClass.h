#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class InvoiceClass
{
private:
   string partNumber;
   string partDescription;
   int quantityOfItem;
   int pricePerItem;
   
public:
   InvoiceClass(string, string, int, int);
   void setPartNumber( string );
   void setPartDescription( string );
   void setQuantityOfItem( int );
   void setPricePerItem( int );

   string getPartNumber();
   string getPartDescription();
   int getQuantityOfItem();
   int getPricePerItem();
   int getInvoiceAmount();
};



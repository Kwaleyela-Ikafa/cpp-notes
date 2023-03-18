#include <iostream>
#include <string>
#include "InvoiceClass.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
    InvoiceClass myInvoice("213", "This is a wrench spanner", 10, 15);

    cout << "The par number is: " << myInvoice.getPartNumber() << endl;
    cout << "The part desciption is: " << myInvoice.getPartDescription() << endl;
    cout << "The quantity is: " << myInvoice.getQuantityOfItem() << endl;
    cout << "Th price is: " << myInvoice.getPricePerItem() << endl;
    cout << "The amount is: " << myInvoice.getInvoiceAmount() << endl;
}
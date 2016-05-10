#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
void itemsOrdered ();
void outputOrder (int, int, char);

int spoolsOrdered = 0;
int spoolInStock = 0;
char specialOrder;
string readyToShip = "The number of spools ready to ship from current stock: ";
string inStock = "The number of spools in stock is: ";
string backOrderMess = "Number of spools on backorder: ";


int main(int argc, char *argv[])
{
    itemsOrdered();
    if ( spoolsOrdered >= 1 && spoolInStock >= 0)
    { 
    outputOrder ( spoolsOrdered, spoolInStock, specialOrder);
    }
    else
    {
    cout << "Sorry you entered invalid data" << endl;
    }
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void itemsOrdered ()//prompts for user input
{
 cout << "Number of spools ordered: " << endl;
 cin >> spoolsOrdered;
 
 cout << "Number of spools in stock: " << endl;
 cin >> spoolInStock;
 
   
     
     if (spoolInStock <= 0)
       {
       cout << "Insufficient Stock Available" << endl;
       
        }
     else 
       {
       cout << "Any special shipping and handling charges?( y for yes, n for no.) " << endl;
       cin >> specialOrder;
       }
 }
 
 void outputOrder ( int value1, int value2, char value3)//(spoolsordered, spoolsInStock, switchCase)
 {
      
      double shippingCharges = 0.0;
      double totalShipping = 0.0;
      double subTotal = 0.0;
      double grandTotal = 0.0;
      int nowShip = 0;
      int backOrder = 0;
      const double SHIPPING = 10.00;
      
  cout << setprecision(2) << fixed;    
 switch (value3)
    {
        case 'y': cout << "What are the special shipping and handling charges per spool? " << endl;
        //get shipping charges
                  cin >> shippingCharges;
               if (shippingCharges > 0)// test for incorrect shipping charges value
                 {
                  //test for negative stock
                  if (value1 > value2)
                  {
                  
                  
                            
                   backOrder = value1 - value2; //number of spools on backorder         
                   nowShip = value2;//number of spools to ship
                   totalShipping = (nowShip * SHIPPING) + (nowShip * shippingCharges);
                   subTotal = nowShip * 100.00;
                   grandTotal = subTotal + totalShipping;
                   cout << "The order is greater than current inventory in stock." << endl;
                   cout << readyToShip << nowShip << endl;
                   cout << backOrderMess << backOrder<< endl;
                   cout << "Subtotal of portion of order ready to ship: $" << subTotal << endl;
                   cout << "Total Shipping and Handling charges: $" << totalShipping << endl;
                   cout << "Grandotal of order ready to ship: $" << grandTotal << endl; 
                   break;        
                  }
                  else
                  {
                  subTotal = value1 * 100.00;
                  totalShipping = (nowShip * SHIPPING) + (nowShip * shippingCharges); 
                  grandTotal = subTotal + totalShipping;   
                  cout << readyToShip << value1 << endl;
                  cout << "Subtotal: $" << subTotal << endl;
                  cout << "Total Shipping and Handling: $" << totalShipping << endl;
                  cout << "Grandtotal: $" << grandTotal << endl;
                  break;
                  }
               }
             else 
             {
                cout << "You entered invalid special shipping charges." << endl;
                break;
             }   
        case 'n': if ( value1 > value2)
                  {
                  backOrder = value1 - value2; //number of spools on backorder         
                  nowShip = value2;//number of spools to ship
                  subTotal = value1 * 100.00;
                  totalShipping = SHIPPING * value1;
                  grandTotal = subTotal + totalShipping;
                  cout << "The order is greater than current inventory in stock." << endl;
                  cout << readyToShip << nowShip << endl;
                  cout << backOrderMess << backOrder<< endl;   
                  cout << "Subtotal: $" << subTotal << endl;
                  cout << "Total Shipping and Handling: $" << totalShipping << endl;
                  cout << "Grandtotal: $" << grandTotal << endl;
                  break;
                  } 
                  else
                  {
                  subTotal = value1 * 100.00;
                  totalShipping = SHIPPING * value1;
                  grandTotal = subTotal + totalShipping;   
                  cout << readyToShip << value1 << endl;
                  cout << "Subtotal: $" << subTotal << endl;
                  cout << "Total Shipping and Handling: $" << totalShipping << endl;
                  cout << "Grandtotal: $" << grandTotal << endl;
                  break; 
                      
                  }
        
        case 'x': cout << "Insufficient Stock Available" << endl;
             
       default: cout << "Sorry you did not specify if there was additional shipping charges." << endl;
                break;
    }                      
      
  }

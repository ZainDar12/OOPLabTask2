#include <iostream>
using namespace std;
class StationeryShop{
   string items[100];//assume shop lists only 100 items
   double prices[100]; 
   int index;
   public:
    void addItem(string item, double price){
         if(index >=0 && index < 100){
              items[index] = item;
              prices[index] = price;
              cout << "Item added: " << item << " with price $" << price << endl;
              index++;
         } else {
              cout << "Index out of bounds!" << endl;
         }
    }
    void deleteItem(string item){
         for(int i=0; i<index; i++){
              if(items[i] == item){
                   for(int j=i; j<index-1; j++){
                        items[j] = items[j+1];
                        prices[j] = prices[j+1];
                   }
                   index--;
                   cout << "Item deleted: " << item << endl;
                   return;
              }
         }
         cout << "Item not found: " << item << endl;
    }
    void ChangePrice(string item, double newPrice){
         for(int i=0; i<index; i++){
              if(items[i] == item){
                   prices[i] = newPrice;
                   cout << "Price changed for " << item << " to $" << newPrice << endl;
                   return;
              }
         }
         cout << "Item not found: " << item << endl;
    }
    void DisplayItems(){
         cout << "Items in the shop:" << endl;
         for(int i=0; i<index; i++){
              cout << items[i] << " - $" << prices[i] << endl;
         }
    }
    void GenerateBill(string purchasedItems[], int quantities[], int itemCount){
         double total = 0.0;
         cout << "Bill Details:" << endl;
         for(int i=0; i<itemCount; i++){
              for(int j=0; j<index; j++){
                   if(items[j] == purchasedItems[i]){
                        double itemTotal = prices[j] * quantities[i];
                        total += itemTotal;
                        cout << purchasedItems[i] << " x" << quantities[i] << " - $" << itemTotal << endl;
                   }
              }
         }
         cout << "Total Amount: $" << total << endl;
    }
};
int main(){
    StationeryShop shop1;
    cout << "Welcome to the Stationery Shop!" << endl;
    cout<<"Please select an option:"<<endl;
    cout<<"1. Add Item"<<endl;
    cout<<"2. Delete Item"<<endl;
    cout<<"3. Change Price"<<endl;
    cout<<"4. Display Items"<<endl;
    cout<<"5. Generate Bill"<<endl;
    int input;
    cin>>input;
    switch(input){
        case 1:{
            string item;
            double price;
            cout<<"Enter item name: ";
            cin>>item;
            cout<<"Enter item price: ";
            cin>>price;
            shop1.addItem(item,price);
            break;
        }
        case 2:{
            string item;
            cout<<"Enter item name to delete: ";
            cin>>item;
            shop1.deleteItem(item);
            break;
        }
        case 3:{
            string item;
            double newPrice;
            cout<<"Enter item name to change price: ";
            cin>>item;
            cout<<"Enter new price: ";
            cin>>newPrice;
            shop1.ChangePrice(item,newPrice);
            break;
        }
        case 4:{
            shop1.DisplayItems();
            break;
        }
        case 5:{
            int itemCount;
            cout<<"Enter number of different items purchased: ";
            cin>>itemCount;
            string purchasedItems[itemCount];
            int quantities[itemCount];
            for(int i=0;i<itemCount;i++){
                cout<<"Enter item name: ";
                cin>>purchasedItems[i];
                cout<<"Enter quantity: ";
                cin>>quantities[i];
            }
            shop1.GenerateBill(purchasedItems,quantities,itemCount);
            break;
        }
        default:
            cout<<"Invalid option selected."<<endl;
    }
    return 0;
}

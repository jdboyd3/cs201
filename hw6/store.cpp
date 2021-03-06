// Jakobe Boyd
// CS 201X
//4/11/20
//This program creates a shopping cart for the user
//shop.cpp

#include <map>
#include <algorithm>
#include <iostream>
#include <string>
#include <numeric>
#include <vector>

using namespace std;

struct Record
{
   double unitPrice;
   int units;
};

int main()
{
   map<string, Record> cart, itemsAvailable = {
       {"Milk",{1,5}},
       {"Banana",{2,4}},
       {"Rice",{3,3}},
       {"Soap",{4,2}},
       {"Bread",{5,1}}
   };
   
   while (true)
   {
       cout << "Price/amount available\n";
       for (auto element : itemsAvailable)
       {
           cout << element.first << " " << element.second.unitPrice << " " << element.second.units << endl;
       }
       cout << "\nPress the key that corresponds to what you want to do";
       cout << "\n1. Add item ";
       cout << "\n2. Remove items from cart";
       cout << "\n3. Display the items you have in the cart";
       cout << "\n4. Exit";
       cout << "\nEnter option : ";
       int option;
       cin >> option;
       cin.ignore(numeric_limits<streamsize>::max(), '\n');

       switch (option)
       {
       case 1:
       {
           cout << "\n Enter the item name : ";
           string name;
           getline(cin, name);

           cin.ignore(numeric_limits<streamsize>::max(), '\n');

           cout << "\nEnter how many units you'd like : ";
           int units;
           cin >> units;

           if (itemsAvailable.find(name) != itemsAvailable.end())
           {
               cart[name] = { itemsAvailable[name].unitPrice,units };
               itemsAvailable[name].units -= units;
           }

       }
       break;
       case 2:
       {
           cout << "\n Enter the item to remove from the cart : ";
           string name;
           getline(cin, name);

           if (cart.find(name) != cart.end())
           {
               itemsAvailable[name].units += cart[name].units;
               cart.erase(name);
           }
       }
       break;
       case 3:
       {
           cout << "\n Cart items\n";
           for (auto element : cart)
           {
               cout << element.first << " " << element.second.unitPrice << " " << element.second.units << endl;
           }
           cout << "\n Total cost: ";
           double total = std::accumulate(cart.begin(), cart.end(), 0, [&](double acc, std::pair<string, Record> aPair) {
               return acc + (aPair.second.unitPrice * aPair.second.units);
           });
           cout << total << endl;
       }
       break;
       case 4:
           exit(0);
           break;
       default:
           break;
       }
   }

   return 0;
}

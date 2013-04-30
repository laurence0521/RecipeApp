/*
Testing Ratchet Recipe.h C++ code written by Nik Kunkel

Jonathan Laurence
Android App Project
4/29/2013

*/

#include <iostream>
#include <map>
#include <string>
/*#include "Recipe.h"
#include "Category.h"
#include "Ingredients.h"
#include "ShoppingList.h"
#include "Refrigerator.h"
*/
using namespace std;

int main() {
  // Testing Map
  string id1 = '1', id2 = '2', id3 = '3';
  string* ids = {id1,id2,id3};
  int* address1, address2, address3;

  mAddresses = new map;
  (*m).put(id1,address1);
  (*m).put(id2,address2);
  (*m).put(id3,address3);

  cout << "Our addressing map contains the following keys and values:\n";
  for (int i = 0; i < (*m).size(); i++)
  {
    cout << "\tKey (" << ids[i] <<"): "<< (*m).get(ids[i]) << endl;
  }

  return 0;
}

#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include "id.h"
// #include <id.cpp> // in lieu of makefile

const size_t arraySize = 10;
const size_t numDigits = 2; 

ID CopyCheck (ID id)  // pass in by value calls CC
{
  ID x = id;  // initialization calls CC (NOT assignment!)
  return x;   // return by value calls CC
}

int main()
{
  ID p1, p2("Chris Lacher", 100);
  std::cout << " IDs after declaration:\n"; 
  std::cout << "  p1 = " << p1 << '\n';
  std::cout << "  p2 = " << p2 << '\n';

  p1.SetName("Tony Harris");
  p1.SetAge(21);
  p2.SetName("Rick Hurst");
  p2.SetAge(21);
  std::cout << " IDs after Set:\n"; 
  std::cout << "  p1 = " << p1 << '\n';
  std::cout << "  p2 = " << p2 << '\n';

  p1 = CopyCheck(p2);
  std::cout << " IDs after p1 = CopyCheck(p2):\n"; 
  std::cout << "  p1 = " << p1 << '\n';
  std::cout << "  p2 = " << p2 << '\n';

  ID p3 ("Assignment Check", 50);
  p1 = p2 = p3;
  std::cout << " IDs after p1 = p2 = p3:\n"; 
  std::cout << "  p1 = " << p1 << '\n';
  std::cout << "  p2 = " << p2 << '\n';
  std::cout << "  p3 = " << p3 << '\n';

  ID * idarray = new ID [arraySize];
  std::cout << " ID Array after declaration:\n";
  for (size_t i = 0; i < arraySize; ++i)
  {
    std::cout << "  id[" << std::setw(numDigits) << i << "] = " << idarray[i] << '\n';
  } 


  for (size_t i = 0; i < arraySize; ++i)
  {
    idarray[i].SetName("A. B. Student");
    idarray[i].SetAge(17 + i);
  } 
  std::cout << " ID Array after Set:\n";
  for (size_t i = 0; i < arraySize; ++i)
  {
    std::cout << "  id[" << std::setw(numDigits) << i << "] = " << idarray[i] << '\n';
  } 
}

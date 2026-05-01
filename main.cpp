#include<iostream>
#include"Templated_Array.h"
using namespace std:
int main()
{
   Array arr{1, 2, 3, 4, 5}; 
   cout << "Array size: " << arr.getSize() << endl;  //5
   cout << "Elements: " << arr << endl;  //Elements: 1 , 2 , 3 , 4 , 5
   arr.reSize(3);
   cout << "After resize to 3: " << arr << endl; //After resize to 3: 1 , 2 , 3
   return 0;
}


#include <iostream>
#include <limits>

using namespace std;

int main() {
  // เขียนโปรแกรมเพิ่ม เพื่อหาขนาดตัวแปรที่กำหนด
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of signed char : " << sizeof(signed char) << endl;
   cout << "Size of short unsigned int : " << sizeof(short unsigned int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;


   // เขียนโปรแกรมเพิ่มเพื่อหาช่วงของค่าที่เก็บได้
   cout << "Min of char : " << numeric_limits<char>::min() << endl;
   cout << "Max of char : " << numeric_limits<char>::max() << endl;

   cout << "Min of char : " << numeric_limits<signed char>::min() << endl;
   cout << "Max of char : " << numeric_limits<signed char>::max() << endl;

   cout << "Min of char : " << numeric_limits<unsigned char>::min() << endl;
   cout << "Max of char : " << numeric_limits<unsigned char>::max() << endl;

   cout << "Min of short int : " << numeric_limits<short int>::min() << endl;
   cout << "Max of short int : " << numeric_limits<short int>::max() << endl;
  return 0;
}

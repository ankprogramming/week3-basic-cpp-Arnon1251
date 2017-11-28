#include <iostream>
#include <limits>

using namespace std;

int main() {
  // เขียนโปรแกรมเพิ่ม เพื่อหาขนาดตัวแปรที่กำหนด
   cout << "Size of char : " << sizeof(char) << endl;
   cout << "Size of signed char : " << sizeof(signed char) << endl;
   cout << "Size of signed char : " << sizeof(unsigned char) << endl;
   cout << "Size of signed char : " << sizeof(int) << endl;
   cout << "Size of signed char : " << sizeof(signed int) << endl;
   cout << "Size of signed char : " << sizeof(unsigned int) << endl;
   cout << "Size of short unsigned int : " << sizeof(short int) << endl;
   cout << "Size of short unsigned int : " << sizeof(signed short int) << endl;
   cout << "Size of short unsigned int : " << sizeof(unsigned short int) << endl;
   cout << "Size of long int : " << sizeof(long int) << endl;
   cout << "Size of long int : " << sizeof(signed long int) << endl;
   cout << "Size of long int : " << sizeof(unsigned long int) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of float : " << sizeof(double) << endl;
   cout << "Size of float : " << sizeof(long double) << endl;
   cout << "Size of float : " << sizeof(wchar_t) << endl;
   cout << "Size of float : " << sizeof(bool) << endl;



   // เขียนโปรแกรมเพิ่มเพื่อหาช่วงของค่าที่เก็บได้
   cout << "Min of char : " << numeric_limits<char>::min() << endl;
   cout << "Max of char : " << numeric_limits<char>::max() << endl;

   cout << "Min of char : " << numeric_limits<signed char>::min() << endl;
   cout << "Max of char : " << numeric_limits<signed char>::max() << endl;

   cout << "Min of char : " << numeric_limits<unsigned char>::min() << endl;
   cout << "Max of char : " << numeric_limits<unsigned char>::max() << endl;

   cout << "Min of short int : " << numeric_limits<int>::min() << endl;
   cout << "Max of short int : " << numeric_limits<int>::max() << endl;

   cout << "Min of short int : " << numeric_limits<signed int>::min() << endl;
   cout << "Max of short int : " << numeric_limits<signed int>::max() << endl;

   cout << "Min of short int : " << numeric_limits<unsigned int>::min() << endl;
   cout << "Max of short int : " << numeric_limits<unsigned int>::max() << endl;

   cout << "Min of short int : " << numeric_limits<short int>::min() << endl;
   cout << "Max of short int : " << numeric_limits<short int>::max() << endl;

   cout << "Min of short int : " << numeric_limits<signed short int>::min() << endl;
   cout << "Max of short int : " << numeric_limits<signed short int>::max() << endl;

   cout << "Min of short int : " << numeric_limits<unsigned short int>::min() << endl;
   cout << "Max of short int : " << numeric_limits<unsigned short int>::max() << endl;

   cout << "Min of short int : " << numeric_limits<long int>::min() << endl;
   cout << "Max of short int : " << numeric_limits<long int>::max() << endl;

   cout << "Min of short int : " << numeric_limits<signed long int>::min() << endl;
   cout << "Max of short int : " << numeric_limits<signed long int>::max() << endl;

   cout << "Min of short int : " << numeric_limits<unsigned long int>::min() << endl;
   cout << "Max of short int : " << numeric_limits<unsigned long int>::max() << endl;

   cout << "Min of short int : " << numeric_limits<float>::min() << endl;
   cout << "Max of short int : " << numeric_limits<float>::max() << endl;

   cout << "Min of short int : " << numeric_limits<double>::min() << endl;
   cout << "Max of short int : " << numeric_limits<double>::max() << endl;

   cout << "Min of short int : " << numeric_limits<long double>::min() << endl;
   cout << "Max of short int : " << numeric_limits<long double>::max() << endl;

   cout << "Min of short int : " << numeric_limits<wchar_t>::min() << endl;
   cout << "Max of short int : " << numeric_limits<wchar_t>::max() << endl;

   cout << "Min of short int : " << numeric_limits<bool>::min() << endl;
   cout << "Max of short int : " << numeric_limits<bool>::max() << endl;
  return 0;
}

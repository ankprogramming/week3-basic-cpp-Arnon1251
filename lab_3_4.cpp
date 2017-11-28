#include <iostream>

using namespace std;

int main() {

    //กำหนดค่าเริ่มต้น
    int a = 4, b, c, d;
  	b = a + 5;
  	c = a - 5;
  	d = -c;

    // แสดงข้อมูล
  	cout << "a, b, c and d is " << endl;
  	cout << a << endl;
  	cout << b << endl;
  	cout << c << endl;
  	cout << d << endl;

    // แก้ไขค่า
  	b = a * 5;
  	c = a / 5;
  	d = a % 5;

    // แสดงข้อมูลหลังแก้ไข
  	cout << "a, b, c and d is " << endl;
  	cout << a << endl;
  	cout << b << endl;
  	cout << c << endl;
  	cout << d << endl;

    // เขียนโปรแกรมเพื่อหาค่า a = b * a + 20 * (20 - 15) / 10
    a = b * a + 20 * (20 - 15) / 10;
    // เขียนแสดงผลค่า a
    cout << a << endl;
  return 0;
}

#include <iostream>

using namespace std;

int main() {
    int a = 8;
  	float b = 7.7;
  	char c = 'Z';
  	int cast1;
  	float cast2;

  	// comment here

  	cast1 = (int)b; // float ->> int
  	cast1 = (int)c;
  	cast1 = (int) 20.1;
  	cast2 = (float) a;
  	cast2 = (float) c;
  	cast2 = (float) 'T';

    // กำหนดค่า cast1 = cast2 ต้องแปลงชนิดตัวแปรอย่างไร
    cast1 = (int) cast2;

  return 0;
}

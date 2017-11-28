#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, num4, num5, sum;
  	float avg;
  	cout << "Enter First Number: ";
  	cin >> num1;
  	cout << "Enter Second Number: ";
  	cin >> num2;
  	cout << "Enter Third Number: ";
  	cin >> num3;
  	cout << "Enter four Number: ";
  	cin >> num4;
  	cout << "Enter five Number: ";
  	cin >> num5;
  	sum = num1 + num2 + num3 + num4 + num5;
  	avg = sum / 5;
  	cout << "Average of the five number is: ";
  	cout << avg;
  return 0;
}

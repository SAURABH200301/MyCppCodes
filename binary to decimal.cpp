// C++ program to convert binary to decimal
// when input is represented as binary string.
#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(string n)
{
	string num = n;
	int dec_value = 0;
	int base = 1;

	int len = num.length();
	for (int i = len - 1; i >= 0; i--) {
		if (num[i] == '1')
			dec_value += base;
		base = base * 2;
	}

	return dec_value;
}
int main()
{
	string num = "00111001011110000010100101000000";
	cout << binaryToDecimal(num) << endl;
}


#include<bits/stdc++.h>
using namespace std;

string xor1(string a, string b)
{
	string result = "";
	int n = b.length();
	for(int i = 1; i < n; i++)
	{
		if (a[i] == b[i])
			result += "0";
		else
			result += "1";
	}
	return result;
}
// Performs Modulo-2 division
string mod2div(string divident, string divisor)
{
	// Number of bits to be XORed at a time.
	int pick = divisor.length();
	// Slicing the divident to appropriate
	// length for particular step
	string tmp = divident.substr(0, pick);
	int n = divident.length();
	
	while (pick < n)
	{
		if (tmp[0] == '1')
			tmp = xor1(divisor, tmp) + divident[pick];
		else
		        tmp = xor1(std::string(pick, '0'), tmp) +
				divident[pick];
				cout<<"tmp"<<tmp<<endl;
				
		// Increment pick to move further
		pick += 1;
	}
	
	// For the last n bits, we have to carry it out
	// normally as increased value of pick will cause
	// Index Out of Bounds.
	if (tmp[0] == '1')
		tmp = xor1(divisor, tmp);
	else
		tmp = xor1(std::string(pick, '0'), tmp);
		
	return tmp;
}

// Function used at the sender side to encode
// data by appending remainder of modular division
// at the end of data.
void encodeData(string data, string key)
{
	int l_key = key.length();
	
	// Appends n-1 zeroes at end of data
	string appended_data = (data +std::string(l_key - 1, '0'));
	
	string remainder = mod2div(appended_data, key);
	
	// Append remainder in the original data
	string codeword = data + remainder;
	cout << "Remainder : "
		<< remainder << "\n";
	cout << "Encoded Data (Data + Remainder) :"
		<< codeword << "\n";
}

// Driver code
int main()
{
	string data = "100100";
	string key = "1101";
	
	encodeData(data, key);
	
	return 0;
}

// This code is contributed by MuskanKalra1


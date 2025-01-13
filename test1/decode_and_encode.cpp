#include "decode_and_encode.h"
// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

string encode(const string& sentence, int shift) {
	string encoded = "";
	for (char ch : sentence) {
		if (isalpha(ch)) {
			char base = islower(ch) ? 'a' : 'A';
			encoded += char((ch - base + shift) % 26 + base);
		}
		else {
			encoded += ch;
		}
	}
	return encoded;
}

string decode(const string& sentence, int shift) {
	string decoded = "";
	shift = 26 - shift;
	for (char ch : sentence) {
		if (isalpha(ch)) {
			char base = islower(ch) ? 'a' : 'A';
			decoded += char((ch - base + shift) % 26 + base);
		}
		else {
			decoded += ch;
		}
	}
	return decoded;
}
int decode_and_encode() {
	string sentence = "";
	int shift;
	string i = "";

	cout << "Do you want to encode or decode" << endl;
	cin >> i;
	cin.clear();
	cin.ignore(1000, '\n');
	if (i == "encode") {
		cout << "Enter the sentence to encode: " << endl;
		getline(cin, sentence);
		cout << "Enter a shift value (1-25): " << endl;
		cin >> shift;
		string encoded = encode(sentence, shift);
		cout << "Encoded Sentence: " << encoded << endl;
	}
	else if (i == "decode") {
		cout << "Enter the sentence to decode: " << endl;
		getline(cin, sentence);
		cout << "Enter the shift value" << endl;
		cin >> shift;
		string decoded = decode(sentence, shift);
		cout << "Decoded Sentence: " << decoded << endl;
	}


	return 0;
}
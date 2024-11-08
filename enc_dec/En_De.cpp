#include <bits/stdc++.h>
using namespace std;

class encdec {
	int key;

public:
	void encrypt();
	void decrypt();
};

void encdec::encrypt()
{	
	char str[50];
	cout << "Enter your text: ";
	cin >> str;
	cout << "key: ";
	cin >> key;

	for(char i=0; str[i] !='\0';i++)
    {
        char c1=str[i];
        c1 = c1 + key + 20;
        str[i] = c1;
    }
    cout<<"Encrypted text: "<<str;
}

void encdec::decrypt()
{
	char str[50];
	cout << "Enter your text: ";
	cin >> str;
	cout << "key: ";
	cin >> key;

	for(char i=0; str[i] !='\0';i++)
    {
        char c1=str[i];
        c1 = c1 - key - 20;
        str[i] = c1;
    }
    cout<<"Decrypted text: "<<str;
}

int main()
{
	encdec enc;
	char c;
	cout << "\n";
	cout << "Enter Your Choice : -> \n";
	cout << "1. encrypt \n";
	cout << "2. decrypt \n";
	cin >> c;
	cin.ignore();

	switch (c) {
	case '1': {
		enc.encrypt();
		break;
	}
	case '2': {
		enc.decrypt();
		break;
	}
	}
}

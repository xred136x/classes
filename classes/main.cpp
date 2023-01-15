#include<iostream>
#include "PhoneBook.h"

int main() {

	setlocale(LC_ALL, "ru");
	PhoneBook book1;
	std::string name = "bob";
	std::string num = "12345";
	for (int i = 0; i < 9; i++)
		book1.AddNumber(name, num);
	std::cout << "Name: " << book1.getName(0) << "\nNumber: " << book1.getNum(0);
	return 0;
}
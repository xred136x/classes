#include "PhoneBook.h"

PhoneBook::PhoneBook()
{
	_index = 0;
}

PhoneBook::~PhoneBook()
{
	delete[] _name;
	delete[] _num;
}

void PhoneBook::AddNumber(std::string& name, std::string& num)
{
	std::string* tmpNames = new std::string[_index + 1];
	std::string* tmpNums = new std::string[_index + 1];

	for (size_t i = 0; i < _index; i++) {
		tmpNames[i] = _name[i];
		tmpNums[i] = _num[i];
	}
	tmpNames[_index] = name;
	tmpNums[_index] = num;
	delete[] _name;
	delete[] _num;
	_num = tmpNums;
	_name = tmpNames;
	_index++;
}

int PhoneBook::getLen()
{
	return _index;
}

std::string PhoneBook::getNum(int index)
{
	return _num[index];
}

std::string PhoneBook::getName(int index)
{
	return _name[index];
}

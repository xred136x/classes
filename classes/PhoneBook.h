#pragma once
#include<iostream>
#include<string>
class PhoneBook
{
private:
	int _index;
	std::string* _num;
	std::string* _name;
public:
	PhoneBook();
	~PhoneBook();
	void AddNumber(std::string& name, std::string& num);

};


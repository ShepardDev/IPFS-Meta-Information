#pragma once
#include <iostream>
#include<string>
class Object
{
private:
	std::string m_hash;
	std::string m_name;
public:
	Object();
	Object(std::string hash, std::string name);
	std::string getHash();
	std::string getName();
	void setHash(std::string hash);
	void setName(std::string name);
	virtual ~Object() = 0;
};


#pragma once
#include<iostream>
#include<string>

class Block
{
private:
	std::string m_hash;
	int m_index;
	int m_size;


public:
	Block();
	Block(std::string hash, int index, int size);
	std::string getHash();
	int getIndex();
	int getSize();
	void setHash(std::string hash);
	void setIndex(int index);
	void setSize (int size);
	
	
};


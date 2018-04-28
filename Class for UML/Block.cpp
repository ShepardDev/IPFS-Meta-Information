#include "Block.h"

Block::Block()
{
	m_hash = "";
	m_index = -1;
	m_size = -1;
}

Block::Block(std::string hash, int index, int size)
{
	m_hash = hash;
	m_index = index;
	m_size = size;
}

std::string Block::getHash()
{
	return m_hash;
}

int Block::getIndex()
{
	return m_index;
}

int Block::getSize()
{
	return m_size;
}

void Block::setHash(std::string hash)
{
	m_hash = hash;
}

void Block::setIndex(int index)
{
	m_index = index;
}

void Block::setSize(int size)
{
	m_size = size;
}



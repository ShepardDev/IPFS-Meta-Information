#include "File.h"

File::File():Object()
{
	m_blocks = std::vector<Block>(10);
	m_block_count = 0;
	m_extension = "";
	m_size = 0;
}

File::File(std::string hash, int size, std::string name, std::string extension, int block_count, std::vector<Block> blocks):Object(hash, name)
{
	m_size = size;
	m_extension = extension;
	m_block_count = block_count;
	m_blocks = blocks;
}

std::vector<Block> File::getBlocks()
{
	return m_blocks;
}

int File::getBlockCount()
{
	return m_block_count;
}

std::string File::getExtension()
{
	return m_extension;
}

int File::getSize()
{
	return m_size;
}

Block File::operator[](int index)
{
	try
	{
		if (index <0|| index>=m_blocks.size()|| m_blocks[index].getSize()==-1)
		{
			throw std::out_of_range("Invalid index or pointing to bad block!");

		}
		return m_blocks[index];
	}
	catch (const std::out_of_range x)
	{
		std::cout << x.what();
	}
	
}

void File::setBlockCount(int block_count)
{
	m_block_count = block_count;
}

void File::setBlocks(std::vector<Block>blocks)
{
	m_blocks = blocks;
}

void File::setCounts()
{
	for (int i = 0;(m_blocks[i].getSize()!= -1 || i< m_blocks.size()); i++)
	{
		m_blocks[i].setIndex(i);
	}
}

void File::setExtension(std::string extension)
{
	m_extension = extension;
}

void File::setSize(int size)
{
	m_size = size;
}






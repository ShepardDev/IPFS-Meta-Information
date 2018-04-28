#include "Object.h"
#include "Block.h"
#include <vector>

class File:public Object
{
private:
	std::vector<Block> m_blocks;
	int m_block_count;
	std::string m_extension;
	int m_size;

public:
	File();
	File(std::string hash, int size, std::string name, std::string extension, int block_count, std::vector<Block> blocks);
	std::vector<Block> getBlocks();
	int getBlockCount();
	std::string getExtension();
	int getSize();
	Block operator[](int index);
	void setBlockCount(int block_count);
	void setBlocks(std::vector<Block> blocks);
	void setCounts();
	void setExtension(std::string extension);
	void setSize(int size);

};


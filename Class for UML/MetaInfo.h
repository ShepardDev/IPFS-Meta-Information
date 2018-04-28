#pragma once
#include "Object.h"
#include "Folder.h"
#include "File.h"
class MetaInfo
{
private:
	std::string m_hash;
	Object& m_root;
public:
	MetaInfo();
	MetaInfo(std::string hash, Folder root);
	MetaInfo(std::string hash, File root);
	std::string getHash();
	Object& getRoot();
	void setHash(std::string hash);
	void setRoot(Object& root);

	
};


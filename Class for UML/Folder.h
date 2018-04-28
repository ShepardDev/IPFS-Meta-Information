#pragma once
#include "File.h"
class Folder :
	public Object
{
private:
	std::vector<Object&> m_object;
	int m_object_count;
public:
	Folder();
	Folder(std::string hash, std::string name, int object_count, std::vector<Object&>object);
	std::vector<Folder>getDirectories();
	int getDirectoriesSize();
	std::vector<File> getFiles();
	int getFilesSize();
	int getObjectCount();
	std::vector<Object&> getObjects();
	bool isWrapperDirectory();
	void setObjectCount(int object_count);
	void setObjects(std::vector<Object&> objects);
};


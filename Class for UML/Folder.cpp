#include "Folder.h"

Folder::Folder()
{
	m_object = std::vector<Object&>(10);
	m_object_count = 0;
}

Folder::Folder(std::string hash, std::string name, int object_count, std::vector<Object&> object) : Object(hash, name)
{
	m_object = object;
	m_object_count = object_count;
}

std::vector<Folder> Folder::getDirectories() //TODO Check if works (if not look closer to references of child and parent)
{
	std::vector<Folder> dirs(10);
	for (int i = 0; i<m_object.size(); i++)
	{
		if (typeid(m_object[i]) == typeid(Folder))
		{
			Folder& tmp = dynamic_cast<Folder&>(m_object[i]);
			Folder actual(tmp.getHash(), tmp.getName(), tmp.getObjectCount(), tmp.getObjects());
			dirs.push_back(actual);
		}
	}
	return dirs;
}

int Folder::getDirectoriesSize()
{
	int counter=0;
	for (int i = 0; i < m_object.size(); i++)
	{
		if (typeid(m_object[i]) == typeid(Folder))
		{
			counter++;
		}

	}
	return counter;
}

std::vector<File> Folder::getFiles()
{
	std::vector<File> files(10);
	for (int i = 0; i<m_object.size(); i++)
	{
		if (typeid(m_object[i]) == typeid(File))
		{
			File& tmp = dynamic_cast<File&>(m_object[i]);
			File actual(tmp.getHash(), tmp.getSize(), tmp.getName(), tmp.getExtension(), tmp.getBlockCount(), tmp.getBlocks());
			files.push_back(actual);
		}
	}
	return files;
}

int Folder::getFilesSize()
{
	int counter = 0;
	for (int i = 0; i < m_object.size(); i++)
	{
		if (typeid(m_object[i]) == typeid(File))
		{
			counter++;
		}
	}
	return counter;
}

int Folder::getObjectCount()
{
	return m_object_count;
}

std::vector<Object&> Folder::getObjects()
{
	return m_object;
}

bool Folder::isWrapperDirectory()
{
	if (getName() == "root")
	{
		return true;
	}
	return false;
}

void Folder::setObjectCount(int object_count)
{
	m_object_count = object_count;
}

void Folder::setObjects(std::vector<Object&> objects)
{
	m_object = objects;
}




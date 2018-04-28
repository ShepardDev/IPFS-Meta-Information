#include "MetaInfo.h"

MetaInfo::MetaInfo() : m_root(File())
{
	m_hash = "";
}

MetaInfo::MetaInfo(std::string hash, Folder root) : m_root(root)
{
	m_hash = hash;
}

MetaInfo::MetaInfo(std::string hash, File root) : m_root(root)
{
	m_hash = hash;
}

std::string MetaInfo::getHash()
{

	return m_hash;
}

Object& MetaInfo::getRoot()
{
	return m_root;
}

void MetaInfo::setHash(std::string hash)
{
	m_hash = hash;
}

void MetaInfo::setRoot(Object& root)
{
	m_root = root;
}




#include "Object.h"



Object::Object()
{
	m_hash = "";
	m_name = "";
}

Object::Object(std::string hash, std::string name)
{
	m_hash = hash;
	m_name = name;
}

std::string Object::getHash()
{
	return m_hash;
}

std::string Object::getName()
{
	return m_name;
}

void Object::setHash(std::string hash)
{
	m_hash = hash;
}

void Object::setName(std::string name)
{
	m_name = name;
}


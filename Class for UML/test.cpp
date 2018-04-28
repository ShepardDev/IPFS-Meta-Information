#include <iostream>
#include "MetaInfo.h"
using namespace std;

void main() {
	MetaInfo m("Lol", File("Lol", 12, "Twelve", "exe", 1, vector<Block>{Block("Lol", 0, 12)}));
	/*File& tmp = dynamic_cast<File&>(m.getRoot());
	File actual(tmp.getHash(), tmp.getSize(), tmp.getName(), tmp.getExtension(), tmp.getBlockCount(), tmp.getBlocks());
	cout << actual.getHash() << " " << actual.getSize() << " " << actual.getName() << " " << actual.getExtension() << " " << actual.getBlockCount() << "\n";*/
}
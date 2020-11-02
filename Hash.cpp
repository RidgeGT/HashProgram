//======================================================================================================
// Ridge Tejuco
// CSIT 832
// Assignment # 4: Hash Table
//======================================================================================================
#include "Hash.h"
#include <string>
using namespace std;
Hash::Hash()
{
	for(int i = 0; i < 100; i++){
		list[i].id = "";
		list[i].name = "";
	}
}

void Hash::insert(string insertId,string insertName)
{
	int HashKey;
	int x = 0;
	do
	{
		HashKey = (stoi(insertId) + x) % 100;
		x++;
	}
	while(list[HashKey].id != "");
	list[HashKey].id = insertId;
	list[HashKey].name = insertName;
}

string Hash::retrieve(string retrieveId){
	int HashKey = (stoi(retrieveId)) % 100;
	int max = 100 - HashKey;
	int x = 0;
	string result = "";
	do
	{
		HashKey = (stoi(retrieveId) + x) % 100;
		x++;
	}
	while(retrieveId != list[HashKey].id && x != max);
	if(retrieveId == list[HashKey].id)
	{
			result = list[HashKey].name;
	}
	return result;
}
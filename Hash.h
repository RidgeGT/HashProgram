//======================================================================================================
// Ridge Tejuco
// CSIT 832
// Assignment # 4: Hash Table
//======================================================================================================
#include <string>
using namespace std;
struct Student{
	string id;
	string name;
};


class Hash{	
		private:
			Student list[100];
		public:
			Hash();
			void insert(string,string);
			string retrieve(string);
};

// LNK2019 TODO(Ridge): Reorganize includes 
// Using this method since I am am recieving LNK compiler eroors


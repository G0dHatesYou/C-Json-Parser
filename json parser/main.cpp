#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <sstream>
#include <fstream>
#include <cstring>
#include "Json.h"
using namespace std;

int main() {

	JsonObject obj = parser::parseFile("data.json");
	cout << obj.toString() << endl;
	system("pause");
	return 0;
}
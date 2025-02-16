#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool contain_double(vector<int>& n) {
	unordered_set<int> sett;


	for (int num : n) {
		if (sett.find(num) != sett.end()) {
			return true;
		}
		else
		{
			sett.insert(num);
		}

	}
	return false;

}
int main() {

	vector<int> nu = { 2,43,5,12,23,43 };
	cout << contain_double(nu);

}

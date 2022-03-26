#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string, pair<int, int> > a,
			 pair<string, pair<int, int> > b) {
		if(a.second.first == b.second.first) {
			return a.second.second > b.second.second;
		} else {
			return a.second.first > b.second.first;
		}
 }

int main(void) {
	vector<pair<string, pair<int, int> > > v;
	v.push_back(pair<string, pair<int, int> >("노규선1", pair<int, int>(100, 19991020)));
	v.push_back(pair<string, pair<int, int> >("노규선2", pair<int, int>(90, 19991021)));
	v.push_back(pair<string, pair<int, int> >("노규선3", pair<int, int>(80, 19991022)));
	v.push_back(pair<string, pair<int, int> >("노규선4", pair<int, int>(70, 19991023)));
	v.push_back(pair<string, pair<int, int> >("노규선5", pair<int, int>(90, 19991024)));
	
	sort(v.begin(), v.end(), compare);
	for(int i = 0; i < v.size(); i++) {
		cout << v[i].first << ' ';
	}
	
	return 0;	
}


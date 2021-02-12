#include <vector>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
using namespace std;




int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector <int> myvector;
	int N;
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		int p;
		cin >> p;
		myvector.push_back(p);
	}
	sort(myvector.begin(), myvector.end());

	vector<int>::iterator it;
	for (it = myvector.begin(); it != myvector.end(); it++) {
		cout << *it << "\n";
	}

	return 0;
}

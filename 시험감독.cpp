#include <iostream>
#include <vector>
using namespace std;

int main(){
	int a;
	cin >> a;
	vector<int> v; //자료형 써주세요

	for (int b = 0; b < a; b++) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	long long cnt;
	int c, d;
	cin >> c >> d;

	for (int j = 0; j < a; j++) {
		cnt += 1;
		if (v[j] <= c) {
			continue;
		}
		else {
			if ((v[j]-c)%d == 0) {
				cnt += (v[j] - c) / d;
			}
			else {
				cnt += ((v[j] - c) / d) + 1;
			}
		}
	}
	cout << cnt;

}

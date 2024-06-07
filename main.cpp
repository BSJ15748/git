#include<iostream>
#include<vector>

using namespace std;

int N,M;
vector<int> vec;

void func(int cnt) {
	if (cnt == M){
		for (int number : vec){
			cout << number << " ";
		}
		cout << "\n";
		return;
	}

	int strt = vec.empty() ? 1: vec.back()+1;

	for (int i=strt; i<=N; i++){
	vec.push_back(i);
	func(cnt+1);
	vec.pop_back();
	}
}

int main() {
   cin >> N >> M;
   func(0);
   return 0;
}

#include <bits/stdc++.h>

#define ll long long int
#define F first
#define S second
#define pb push_back
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)

using namespace std;


template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}


int main(){
	string a[3];
	bool aGreaterB = false, aGreaterC = false, bGreaterC = false;
	for(int i = 0;i < 3; ++i){
		cin >> a[i];
		if(a[i][1] == '<') {
			a[i][1] = '>';
			reverse(a[i].begin() , a[i].end());
		}
	}
	sort(a, a + 3);
	for(int i = 0;i < 3; ++i){
		if(a[i][0] == 'A' && a[i][2] == 'B'){
			aGreaterB = true;
		}
		if(a[i][0] == 'A' && a[i][2] == 'C'){
			aGreaterC = true;
		}
		if(a[i][0] == 'B' && a[i][2] == 'C'){
			bGreaterC = true;
		}
	}
	if(aGreaterB && aGreaterC && bGreaterC){
		cout << "CBA" << endl;
		return 0;
	}
	if(aGreaterB && aGreaterC && !bGreaterC){
		cout << "BCA" << endl;
		return 0;
	}
	// if(aGreaterB && !aGreaterC && bGreaterC){
	// 	cout << "CBA" << endl;
	// 	return 0;
	// }
	if(aGreaterB && !aGreaterC && !bGreaterC){
		cout << "BAC" << endl;
		return 0;
	}
	if(!aGreaterB && aGreaterC && bGreaterC){
		cout << "CAB" << endl;
		return 0;
	}
	if(!aGreaterB && !aGreaterC && bGreaterC){
		cout << "ACB" << endl;
		return 0;
	}
	// if(!aGreaterB && aGreaterC && !bGreaterC){
	// 	cout << "CAB" << endl;
	// 	return 0;
	// }
	if(!aGreaterB && !aGreaterC && !bGreaterC){
		cout << "ABC" << endl;
		return 0;
	}
	cout << "Impossible" << endl;
	return 0; 
}

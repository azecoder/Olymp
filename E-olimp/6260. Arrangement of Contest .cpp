#include <stdio.h>
#include <set>
#include <map>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	bool was[256];
	for ( char c = 'A'; c <= 'Z'; c++ ) {
		was[c] = false;
	}
	for ( int i = 0; i < n; i++ ) {
		string s;
		cin >> s;
		was[s[0]] = true;
	}
	int ans = 0;
	for ( char c = 'A'; c <= 'Z'; c++ )
		if ( was[c] ) {
			ans++;
		} else {
			break;
		}
	printf( "%d\n", ans );
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

int m[128][128];
string jawaban[128*128];

void fillQuadTree(int x, int r, int c, int k, string s) {
	if(x == s.length() ) {
		int i,j;
		for(i=r; i<r+k; i++) {
			for(j=c; j<c+k; j++) {
				m[i][j] = 1;
			}
		}
	}else {
		if(s[x] == '0') {
			fillQuadTree(x+1, r,c, k/2, s);
		}else if(s[x] == '1') {
			fillQuadTree(x+1, r, c+(k/2), k/2, s);
		}else if(s[x] == '2') {
			fillQuadTree(x+1, r+(k/2), c, k/2, s);
		}else if(s[x] == '3') {
			fillQuadTree(x+1, r+(k/2), c+(k/2), k/2, s);
		}
	}
}


int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int i,j;
	for(i=0; i<n; i++) {
		cin >> jawaban[i];
	}

	int r,c;
	cin >> r >> c;

	int p2 = 1;
	int maks = max(r,c);

	while(p2 < maks) {
		p2 *= 2;
	}

	for(i=0; i<p2; i++) {
		for(j=0; j<p2; j++) {
			m[i][j] = 0;
		}
	}

	for(i=0; i<n; i++) {
		fillQuadTree(1, 0, 0, p2, jawaban[i]);
	}

	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			if(j == c-1) {
				cout << m[i][j] << endl;
			}else {
				cout << m[i][j] << ' ';
			}
		}
	}
	return 0;
}
/*input
2
1
1
5
1 3 5 2 2
*/

/*~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX(a, b) ((a > b) ? a : b)
#define MIN(a, b) ((a < b) ? a : b)
#define set_bit(n, x, i) (n ^ ((-x ^ n) & (1 << i)))
#define get_bit(n, i) ((n >> i) & 1) 
using namespace std;

template<typename T>void scan(T&x){bool n=false;register T c=getchar();x=0;if(c=='-'){n=true;c=getchar();}for(;(c>47&&c<58);c=getchar()){x=(x<<1)+(x<<3)+c-48;}if(n){x*=-1;}}
template<typename T>void allocate(T **x,T n){*x=(T*)malloc(sizeof(T)*n);}

int main() {
	int t, n, data[110], s, c, ans;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		s = c = 0; ans = -1;
		for (int i = 0; i < n; i++) {
			scanf("%d", &data[i]);
			s += data[i];
		}
		for (int i = 0; i < n; i++) {
			if (2*c == s-data[i]) {
				ans = i+1;
				break;
			}
			c += data[i];
		}
		printf("%d\n", ans);
	}
	return 0;
}
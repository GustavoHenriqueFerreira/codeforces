#include <bits/stdc++.h>
#define fst first
#define snd second
#define fore(i,a,b) for(int i=a,ThxDem=b;i<ThxDem;++i)
#define pb push_back
#define ALL(s) s.begin(),s.end()
#define FIN ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define SZ(s) int(s.size())
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef long double ld;

ld EPS=1e-11;

struct Event {
	ld x,val;
	bool isStart;
	int id;

	bool operator <(const Event &e) const{
		if(abs(x-e.x)>EPS) return x<e.x+EPS;
		return isStart<e.isStart;
	}
};

struct Node{
	ld x;
	int id;

	bool operator <(const Node &e) const{
		if(abs(x-e.x)>EPS) return x<e.x+EPS;
		return id<e.id;
	}
};

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/trie_policy.hpp>
using namespace __gnu_pbds;
typedef tree<Node, null_type, less<Node>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main(){FIN;
	int n, P, Q; cin >> n >> P >> Q;

	vector<Event> v;

	fore(i,0,n){
		ll A,B; cin>>A>>B;

		ll det=A*A-4LL*P*(Q-B);

		// no solution
		if(det<=0)continue;

		ld lef=ld(A)-sqrtl(det);
		ld rig=ld(A)+sqrtl(det);

		v.pb({lef,lef,1,i});
		v.pb({rig,lef,0,i});
	}

	
	sort(ALL(v));
	n=SZ(v);

	ordered_set s;
	ll ans=0, pos=0;

	while(pos<n){

		int id=pos;
		while(id<n && !(v[pos]<v[id])) id++;

		// open ranges
		if(v[pos].isStart){
			fore(i,pos,id){
				s.insert({v[i].x, v[i].id});
			}
		}

		// close ranges (remove first, then compare)
		else{
			fore(i,pos,id){
				s.erase({v[i].val, v[i].id});
			}

			fore(i,pos,id){
				ans+=SZ(s)-s.order_of_key({v[i].val, 1000000000});
			}
		}

		pos=id;
	}

	cout<<ans<<"\n";
}
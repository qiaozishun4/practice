#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

typedef long long ll;
const ll INF = (1ll << 60);
const ll BIG = 1000000001;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll n, m, q;
	cin >> n >> m >> q;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	
	vector<ll> c_opp(n, 0);
	vector<int> count_pos_arr(n, 0);
	if (n > 0) {
		c_opp[0] = (a[0] > 0) ? a[0] : 0;
		count_pos_arr[0] = (a[0] > 0) ? 1 : 0;
		for (int i = 1; i < n; i++) {
			c_opp[i] = c_opp[i-1] + (a[i] > 0 ? a[i] : 0);
			count_pos_arr[i] = count_pos_arr[i-1] + (a[i] > 0 ? 1 : 0);
		}
	}
	
	ll min_neg_val = INF;
	ll cm = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			ll cm_prev = cm;
			cm += (-a[i]);
			if (cm_prev < m && cm >= m) {
				min_neg_val = min(min_neg_val, (ll)i);
			}
		}
	}
	
	vector<tuple<ll, int, ll>> events_queries;
	
	for (int i = 0; i < n; i++) {
		if (a[i] > 0 && i < min_neg_val) {
			ll c_opp_before = c_opp[i] - a[i];
			if (c_opp_before >= m) continue;
			
			ll k = count_pos_arr[i];
			ll d = m - c_opp[i];
			ll L_i = (d > 0) ? (d - 1) / k + 1 : 0;
			
			ll R_i;
			if (k == 1) {
				R_i = BIG;
			} else {
				ll d_prev = m - c_opp_before;
				R_i = (d_prev - 1) / (k - 1);
			}
			
			if (L_i > 1000000000) continue;
			if (R_i > 1000000000) {
				R_i = 1000000000;
			}
			
			if (L_i <= R_i) {
				ll end_point = min(R_i + 1, BIG);
				events_queries.push_back({L_i, 0, 1});
				events_queries.push_back({end_point, 0, -1});
			}
		}
	}
	
	vector<ll> qxs(q);
	for (int i = 0; i < q; i++) {
		cin >> qxs[i];
		events_queries.push_back({qxs[i], 1, i});
	}
	
	sort(events_queries.begin(), events_queries.end(),
		[](const tuple<ll, int, ll>& a, const tuple<ll, int, ll>& b) {
			if (get<0>(a) != get<0>(b)) 
				return get<0>(a) < get<0>(b);
			return get<1>(a) < get<1>(b);
		});
	
	vector<string> ans(q, "Tie");
	ll active = 0;
	for (const auto& e : events_queries) {
		ll x_val = get<0>(e);
		int type = get<1>(e);
		ll data = get<2>(e);
		
		if (type == 0) {
			active += data;
		} else {
			if (active > 0) {
				ans[data] = "Yes";
			} else if (min_neg_val < INF) {
				ans[data] = "No";
			} else {
				ans[data] = "Tie";
			}
		}
	}
	
	for (int i = 0; i < q; i++) {
		cout << ans[i] << '\n';
	}
	
	return 0;
}

#include <bits/stdc++.h>
#define s(x) (x * x)

using namespace std;

namespace RealDream {
	typedef long long ll;
	
	double a, b, c, d, e, f;
	
	double helen(double a, double b, double c) {
		double p = (a + b + c) / 2;
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
	
	int main() {
		/**
		 * RealDream AK IOI
		 */
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
		cout.tie(nullptr);
		int t;
		scanf("%d", &t);
		while (t--) {
			scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
			double v = s(a * b * e) + s(a * b * f) + s(a * c * d) + s(a * c * f) + s(a * d * f) + s(a * f * e) + s(b * c * d) + s(b * c * e) + s(b * d * e) + s(b * f * e) + s(c * d * e) + s(c * d * f) - s(a * b * d) - s(a * c * e) - s(b * c * f) - s(d * e * f) - s(c * c * d) - s(c * d * d) - s(a * a * f) - s(a * f * f) - s(b * b * e) - s(b * e * e);
			v = sqrt(v) / 12; //计算体积
			double s = helen(a, b, d) + helen(a, c, e) + helen(b, c, f) + helen(d, e, f); //计算表面积
			double r = v / s * 3; //计算半径
			printf("%.4f\n", r);
		}
		return 0;
	}
};

int main() {
	/**
	 * Made By RealDream
	 */
	RealDream::main();
	return 0;
}

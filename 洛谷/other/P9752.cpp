#include <bits/stdc++.h>

using namespace std;

const int maxn = 10 + 2;
int n, ans, wpwd[maxn][maxn], rpwd[maxn];

bool check() {
    for (int i = 1; i <= n; i++) {
        vector<int> cnt;
        for (int j = 0; j < 5; j++) {
            if (rpwd[j] != wpwd[i][j]) {
                cnt.push_back(j);
            }
        }
        if (cnt.empty() || (cnt.size() > 2)) {
            return false;
        }
        if (cnt.size() == 2) {
            int x = cnt[0], y = cnt[1];
            if (((x + 1) != y) && ((y + 1) != x)) {
                return false;
            }
            int dx = (rpwd[x] - wpwd[i][x] + 10) % 10;
            int dy = (rpwd[y] - wpwd[i][y] + 10) % 10;
            if (dx != dy) return false;
        }
    }
    return true;
}

void bfs() {
    queue<vector<int>> q;
    q.push(vector<int>(5, 0));  // 初始化一个全为0的密码组合

    while (!q.empty()) {
        vector<int> current = q.front();
        q.pop();

        // 将 current 赋值给 rpwd
        for (int i = 0; i < 5; i++) {
            rpwd[i] = current[i];
        }

        // 如果满足条件，增加答案计数
        if (check()) {
            ans++;
        }

        // 生成下一层的密码组合
        for (int i = 0; i < 5; i++) {
            if (current[i] < 9) {
                vector<int> next = current;
                next[i] += 1;
                q.push(next);
            }
        }
    }
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &wpwd[i][j]);
        }
    }
    bfs();
    printf("%d\n", ans);
    return 0;
}

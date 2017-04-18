#include <bits/stdc++.h>

using namespace std;

char s[1234567];

int main() {
  freopen("in", "r", stdin);
  freopen("out", "w", stdout);
  int tt;
  scanf("%d", &tt);
  for (int qq = 1; qq <= tt; qq++) {
    printf("Case #%d: ", qq);
    int n;
    scanf("%d %s", &n, s);
    int ans = 0;
    int sum = 0;
    for (int i = 0; i <= n; i++) {
      if (sum < i) {
        sum++;
        ans++;
      }
      sum += s[i] - '0';
    }
    printf("%d\n", ans);
  }
  return 0;
}

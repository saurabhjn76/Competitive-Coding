#include <bits/stdc++.h>

using namespace std;

//char s[1234567];

int main() {
  //freopen("in", "r", stdin);
  //freopen("out", "w", stdout);
  long long int tt;
  scanf("%lld", &tt);
  for (int qq = 1; qq <= tt; qq++) {
    printf("Case #%d: ", qq);
    long long int n,s,k;
    scanf("%lld %lld %lld", &k, &n,&s);
    int ans = 0;
    int sum = 0;
    long long int total=pow(k,n);
    long long int incre=pow(k,n-1);
    for (long long int i = 1; i <=total; i+=incre) {
      printf("%lld ",i );
    }
    printf("\n");
  }
  return 0;
}

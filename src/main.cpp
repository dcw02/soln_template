#ifdef LOCAL
#    include "yastdlib.hpp"
#else
#    include <bits/stdc++.h>
#endif

using namespace std;

void from_file(string name, string in = ".in", string out = ".out") {
    freopen((name + in).c_str(), "r", stdin);
    freopen((name + out).c_str(), "w", stdout);
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cin.exceptions(cin.failbit);
}

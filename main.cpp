#include <bits/stdc++.h>

using ll = long long;
using vll = std::vector<ll>;
using vvll = std::vector<vll>;

#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define RANGE_CIN(a) for (auto& x : a) std::cin >> x;
#define CHMAX(x,y) x = std::max(x,y)
#define CHMIN(x,y) x = std::min(x,y)
#define UNIQUE_ERASE(v) v.erase(std::unique(ALL(v)), v.end());
#define F_DIG_NUM(a) std::fixed << std::setprecision(a)
#define REP(i, n) for (ll i = 0; i < (ll)(n); i++)
#define REPR(i,n) for(ll i = (ll)(n); i >= 0; i--)
#define FOR(i, a, b) for (ll i = (a); i < (b); i++)
#define EB(x) emplace_back(x)
#define EM(x) emplace(x)
#define PSORT(v, fs) std::sort(ALL(v), [](const auto& a, const auto& b) { return a.fs < b.fs; })
#define PRSORT(v, fs) std::sort(RALL(v), [](const auto& a, const auto& b) { return a.fs < b.fs; })

namespace math_a {
    namespace set {
        vll Cup(const vll& a, const vll& b) {
            vll s_a = a, s_b = b;
            std::sort(ALL(s_a));
            std::sort(ALL(s_b));
            vll res;
            std::set_union(ALL(s_a), ALL(s_b), std::back_inserter(res));
            return res;
        }

        vll Cap(const vll& a, const vll& b) {
            vll s_a = a, s_b = b;
            std::sort(ALL(s_a));
            std::sort(ALL(s_b));
            vll res;
            std::set_intersection(ALL(s_a), ALL(s_b), std::back_inserter(res));
            return res;
        }

        vll Not(const vll& a, const vll& u) {
            vll s_a = a, s_u = u;
            std::sort(ALL(s_a));
            std::sort(ALL(s_u));
            vll res;
            std::set_difference(ALL(s_u), ALL(s_a), std::back_inserter(res));
            return res;
        }
    }
}

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    vll u, a, b, c, res;
    FOR(i, 1, 11) {
        u.EB(i);
        if (i % 2 == 0) {
            a.EB(i);
        }
        if (i % 3 == 0) {
            b.EB(i);
        }
        if (i % 4 == 0) {
            c.EB(i);
        }
    }
    res = math_a::set::Cup(math_a::set::Not(a, u), math_a::set::Not(c, u));
    std::sort(ALL(res));
    if (res.empty()) {
        std::cout << "Null" << std::endl;
    }
    else {
        for (const auto& x : res) {
            std::cout << x << std::endl;
        }
    }
    return 0;
}
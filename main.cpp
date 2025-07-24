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

namespace math_a_tools {
    namespace set {
        vll LFill(ll min, ll max) {
            vll res;
            FOR (i, min, max + 1) res.EB(i);
            return res;
        }
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

        void Show(const vll& a) {
            if (a.empty()) {
                std::cout << "Null" << std::endl;
            }
            else {
                for (const auto& x : a) {
                    std::cout << x << std::endl;
                }
            }
        }
    }
}

int main() {
    using namespace math_a_tools;
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    return 0;
}
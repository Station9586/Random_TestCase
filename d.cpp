#include <bits/stdc++.h>
#include <random>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(v) ((int) (v).size())

typedef long long ll;
typedef std::vector<int> vi;
typedef std::pair<int, int> pi;

using namespace std;

const int mxN = 4e5;
// const int mxM = mxN << 1;
const int mxX = 1e8;
auto seed = std::chrono::high_resolution_clock::now().time_since_epoch().count();
mt19937 Generate(seed);
uniform_int_distribution<int> gen_n(2, mxN);
// uniform_int_distribution<int> gen_m(0, mxN);

int n, m;
int main () {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    // n = gen_n(Generate);
    n = mxN;
    uniform_int_distribution<int> gen_x(0, mxX);
    cout << n << "\n";
    for (int i = 0; i < n; i ++) cout << gen_x(Generate) << " \n"[i == n - 1];
    return 0;
}
// int main (int argc, const char *argv[]) {
//     cin.tie(NULL);
//     ios_base::sync_with_stdio(false);
//     int n = gen(Generate), q = gen(Generate);
//     cout << n << " " << q << "\n";
//     int k = 1;
//     uniform_int_distribution<int> gen3(1, n);
//     for (int i = 1; i <= n; i ++) {
//         cout << gen5(Generate) << " \n"[i == n];
//     }
//     for (int i = 0; i < q; i ++) {
//         uniform_int_distribution<int> gen4(1, k);
//         int op = gen2(Generate);
//         if (op == 1) {
//             int a = gen3(Generate), x = gen5(Generate);
//             int c = gen4(Generate);
//             cout << op << " " << c << " " << a << " " << x << "\n";
//         }else if (op == 2) {
//             int a = gen3(Generate), b = gen3(Generate);
//             int c = gen4(Generate);
//             if (a > b) swap(a, b);
//             cout << op << " " << c << " " << a << " " << b << "\n";
//         }else if (op == 3) {
//             int c = gen4(Generate);
//             k ++;
//             cout << op << " " << c << "\n";
//         }
//     }
//     return 0;
// }

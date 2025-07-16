#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string polyhedrons[] = {

        "Tetrahedron",
        "Cube",
        "Octahedron",
        "Dodecahedron",
        "Icosahedron"

    };
    int ans = 0; 
    for (int i = 0; i < n; i++) {
        string v;
        cin >> v;

        if (v == polyhedrons[0]) {
            ans += 4;
        } else if (v == polyhedrons[1]) {
            ans += 6;
        } else if (v == polyhedrons[2]) {
            ans += 8;
        } else if (v == polyhedrons[3]) {
            ans += 12;
        } else if (v == polyhedrons[4]) {
            ans += 20;
        }
    }

    cout << ans << endl;

    return 0;
}

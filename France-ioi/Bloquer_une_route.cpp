#include <bits/stdc++.h>
using namespace std;

int Boucle(pair<vector<int>, bool> *node, pair<pair<int, int>, bool> *edge, int pos) {
    if(node[pos].second)
        return pos;
    for (auto i:node[pos].first) {
        if(Boucle(node, edge, i) == pos)
            ;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("input.txt.txt", "r", stdin);
    freopen("output.txt", "w+", stdout);

    int nbI, nbS;
    cin >> nbI >> nbS;
    pair<vector<int>, bool> node[nbI];
    pair<pair<int, int>, bool> edge[nbS];
    for (int i = 0; i < nbS; ++i) {
        cin >> edge[i].first.first >> edge[i].first.second;
        edge[i].first.first--;
        edge[i].first.second--;
        node[edge[i].first.first].first.push_back(edge[i].first.second);
        node[edge[i].first.second].first.push_back(edge[i].first.first);
    }

    Boucle(node, edge, 0);
    for (int i = 0; i < nbS; ++i)
        if(!edge[i].second)
            cout <<;



    return 0;
}
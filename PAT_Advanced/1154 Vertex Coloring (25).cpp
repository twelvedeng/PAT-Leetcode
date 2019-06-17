#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
struct node {int ind1, ind2;};
int main() {
    int n, m;
    scanf("%d %d\n", &n, &m);
    vector<node> edge(m);
    for (int i = 0; i < m; i++) 
        scanf("%d %d\n", &edge[i].ind1, &edge[i].ind2);
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        int ver[10001] = {0};
        //int cnt = 0;
        unordered_set<int> color;
        bool flag = true;
        for (int j = 0; j < n; j++) {
            scanf("%d", &ver[j]);
          //  cnt++;
            color.insert(ver[j]);
        }
        for (int j = 0; j < m; j++) {
            if(ver[edge[j].ind1] == ver[edge[j].ind2])
                flag = false;
        }
        if(flag)
            printf("%d-coloring\n", color.size());
        else
            printf("No\n");
    }
    return 0;
}

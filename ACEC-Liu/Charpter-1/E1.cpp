/*
Title: 勇士斗恶龙
Date: 2020-05-05
*/
#include<iostream>
#include<algorithm>

using namespace std;

const int maxn = 20000 + 5;

int main(){
    int n, m;
    int N[maxn], M[maxn];
    while(scanf("%d %d", &n, &m) == 2 && n && m){
        for(int i=0; i < n; i++) cin >> N[i];
        for(int i=0; i < m; i++) cin >> M[i];
        if(m < n){
            cout << "Loowater is doomed!" << endl;
        }
        sort(N, N+n);
        sort(M, M+m);
        int curNum = 0; // 当前所砍头的编号
        int cost = 0; // 当前的总开销
        for(int i=0; i < m; i++){
            if(curNum == n) break;
            if(M[i] >= N[curNum]){
                cost += M[i];
                curNum++;
            }
        }
        if(curNum == n) cout << cost << endl;
        else cout << "Loowater is doomed!" << endl;
    }
    return 0;
}
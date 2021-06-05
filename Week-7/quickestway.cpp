#include <bits/stdc++.h>

using namespace std;
#define M 100000000
static int d[101],s[101];
int f(int x){if(x>100){return (-1);}if(d[x]>=0){return d[x];}if(d[x]==(-2)){return (-1);}
  if(x==100){d[x]=0;return d[x];}
  if(s[x]>0){if(s[x]<x){d[x]=(-2);int p=f(s[x]);d[x]=d[s[x]];return p;}if(f(s[x])<0){d[x]=(-2);return (-1);}d[x]=f(s[x]);return d[x];}
  int r=M,b=0;for(int i=1;i<=6;i++){if((x+i<=100 && d[x+i]==(-2))|| x+i>100){continue;}
    int p=f(x+i);if(p>=0){b++;r=min(r,1+p);}}if(b>0){d[x]=r;return d[x];}d[x]=(-2);return (-1);
}
int quickestWayUp(vector<vector<int>> l, vector<vector<int>> v) {
int n=l.size(),m=v.size();for(int i=0;i<101;i++){d[i]=(-1);s[i]=(-1);}for(int i=0;i<n;i++){s[l[i][0]]=l[i][1];}for(int i=0;i<m;i++){
  s[v[i][0]]=v[i][1];
}int h=f(1);cout<<d[1]<<endl;
for(int i=1;i<101;i++){cout<<d[i]<<endl;}if(d[1]==(-2)){return (-1);}return d[1];

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<vector<int>> ladders(n);
        for (int i = 0; i < n; i++) {
            ladders[i].resize(2);

            for (int j = 0; j < 2; j++) {
                cin >> ladders[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        int m;
        cin >> m;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<vector<int>> snakes(m);
        for (int i = 0; i < m; i++) {
            snakes[i].resize(2);

            for (int j = 0; j < 2; j++) {
                cin >> snakes[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        int result = quickestWayUp(ladders, snakes);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
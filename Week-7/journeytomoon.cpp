#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);long long int t=0;
class graph{
  long long int n;list<long long int>* a;
  public:
  graph(long long int n);void add(long long int x,long long int y);void dfs(int v[],long long int x);
};
graph::graph(long long int n){this->n=n;a=new list<long long int>[n];}
void graph::add(long long int x,long long int y)
{a[x].push_back(y);a[y].push_back(x);return;}void graph::dfs(int v[],long long int x){v[x]=1;
for(auto i=a[x].begin();i!=a[x].end();i++){
  if(!v[*i]){t++;dfs(v,*i);}}return ;
}
// Complete the journeyToMoon function below.
long long int journeyToMoon(long long int n, vector<vector<long long int>> c) {
  long long int m=c.size();graph g(n);for(long long int i=0;i<m;i++){
    g.add(c[i][0],c[i][1]);
  }long long int l=0,r=0;int v[n];memset(v,0,sizeof(v));vector<long long int>s;for(long long int i=0;i<n;i++){
    if(!v[i]){l++;t=1;g.dfs(v,i);s.push_back(t);}
  }long long int p[l];memset(p,0,sizeof(p));p[0]=s[0];for(long long int i=1;i<l;i++){
    p[i]=s[i]+p[i-1];
  }for(int i=0;i<l;i++){
    r+=(s[i]*(p[l-1]-p[i]));
  } 

return r;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string np_temp;
    getline(cin, np_temp);

    vector<string> np = split_string(np_temp);

    int n = stoi(np[0]);

    int p = stoi(np[1]);

    vector<vector<long long int>> astronaut(p);
    for (int i = 0; i < p; i++) {
        astronaut[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> astronaut[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    long long int result = journeyToMoon(n, astronaut);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

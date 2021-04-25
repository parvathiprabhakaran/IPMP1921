#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);long long int t=0;
class graph{
  long long int n;list<long long int>* a;
  public:
  graph(long long int n);
  void add(long long int x,long long int b);void dfs(int v[],long long int x);
};
graph::graph(long long int n){
  this->n=n;this->a=new list<long long int>[n];}
  void graph::add(long long int x,long long int b){a[x].push_back(b);a[b].push_back(x);return;}
void graph::dfs(int v[],long long int x){
  v[x]=1;for(auto i=a[x].begin();i!=a[x].end();i++){
    if(!v[*i]){t++;dfs(v,*i);}
  }return;
}
long long int roadsAndLibraries(long long int n,long long int lib,long long int r, vector<vector<long long int>> c) {
  if(n==1){return lib;}
graph g(n);long long int s=0,l=0;long long int f=n*lib,m=c.size();if(m==0 || lib<=r){return f;}
for(long long int i=0;i<m;i++){
  g.add(c[i][0]-1,c[i][1]-1);
}int v[n];memset(v,0,sizeof(v));for(long long int i=0;i<n;i++){
  if(!v[i]){l++;t=1;g.dfs(v,i);s+=(t-1);cout<<t<<endl;}
}
return min(s*r+l*lib,f);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string nmC_libC_road_temp;
        getline(cin, nmC_libC_road_temp);

        vector<string> nmC_libC_road = split_string(nmC_libC_road_temp);

        int n = stoi(nmC_libC_road[0]);

        int m = stoi(nmC_libC_road[1]);

        int c_lib = stoi(nmC_libC_road[2]);

        int c_road = stoi(nmC_libC_road[3]);

        vector<vector<long long int>> cities(m);
        for (int i = 0; i < m; i++) {
            cities[i].resize(2);

            for (int j = 0; j < 2; j++) {
                cin >> cities[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        long long int result = roadsAndLibraries(n, c_lib, c_road, cities);

        fout << result << "\n";
    }

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

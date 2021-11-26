#include <bits/stdc++.h>
using namespace std;

int main()
{
    string filename;
    cout << "Introdu numele fisierului:\n";
    cin >> filename;
    cout << "#include <bits/stdc++.h>\n";
    cout << "using namespace std;\n";
    cout << endl;
    cout << "ifstream fin(\"" << filename << ".in\");\n";
    cout << "ofstream fout(\"" << filename << ".out\");\n";
    ofstream(filename + ".in");
    ofstream(filename + ".out");
}
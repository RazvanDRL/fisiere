#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cout << "Enter the fstream file name:\n";
    cin >> input;
    cout << "#include <bits/stdc++.h>\n";
    cout << "using namespace std;\n";
    cout << endl;
    cout << "ifstream fin(\"" << input << ".in\");\n";
    cout << "ofstream fout(\"" << input << ".out\");\n";
}

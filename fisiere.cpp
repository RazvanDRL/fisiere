#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    string filename;
    cout << "Introdu numele fisierului:\n";
    cin >> filename;
    cout << "#include <iostream>\n";
    cout << "#include <fstream>\n";
    cout << "using namespace std;\n";
    cout << endl;
    cout << "ifstream fin(\"" << filename << ".in\");\n";
    cout << "ofstream fout(\"" << filename << ".out\");\n";
    ofstream(filename + ".in");
    ofstream(filename + ".out");
    return 0;
}

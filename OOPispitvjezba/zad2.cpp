//--------------------------------------------------------------------
//2. Koristeći STL funkcije copy i transform, napisati funkciju koja čita tekst iz da -
//totrema u vektor stringova te napisati funkciju koja ispisuje stringove iz
//vektora stringova na eke i spkonzolu tako da početno slovo svakog reda pretvori u veliko
//slovo.

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void read_text(string& filename, vector<string>& lines) {
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        lines.push_back(line);
    }
}

void print_lines(vector<string>& lines) {
    for (auto line : lines) {
        string modified_line = line;
        modified_line[0] = toupper(modified_line[0]);
        cout << modified_line << endl;
    }
}

int main() {
    vector<string> lines;
    read_text("text.txt", lines);
    print_lines(lines);

    return 0;
}
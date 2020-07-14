#include <iostream>
#include <set>
#include <limits>

#define size_to_index(size) (size == "P" ? 0 : size == "M" ? 1 : 2)

using namespace std;

int main(int argc, char **argv) {
    int shirts_amount;
    cin >> shirts_amount;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    bool first_case = true;

    while (shirts_amount != 0) {
        if (first_case) first_case = false;
        else cout << endl;

        multiset<string> cam_brancas[3], cam_vermelhas[3];
        for (int i = 0; i < 3; ++i) {
            cam_brancas[i] = multiset<string>();
            cam_vermelhas[i] = multiset<string>();
        }

        for (int sa = 0; sa < shirts_amount; ++sa) {
            string name, color, size;

            getline(cin, name);
            cin >> color >> size;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            if (color[0] == 'b')
                cam_brancas[size_to_index(size)].insert(name);
            else
                cam_vermelhas[size_to_index(size)].insert(name);
        }

        for (auto const &p : cam_brancas[0])
            cout << "branco P " << p << endl;
        for (auto const &m : cam_brancas[1])
            cout << "branco M " << m << endl;
        for (auto const &g : cam_brancas[2])
            cout << "branco G " << g << endl;

        for (auto const &p : cam_vermelhas[0])
            cout << "vermelho P " << p << endl;
        for (auto const &m : cam_vermelhas[1])
            cout << "vermelho M " << m << endl;
        for (auto const &g : cam_vermelhas[2])
            cout << "vermelho G " << g << endl;

        cin >> shirts_amount;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return 0;
}

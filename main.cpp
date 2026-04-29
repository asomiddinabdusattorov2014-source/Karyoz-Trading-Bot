
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // random boshlash
    int sir = rand() % 100 + 1; // 1 dan 100 gacha

    int taxmin;

    cout << "1 dan 100 gacha son toping!" << endl;

    while (true) {
        cout << "Taxmin: ";
        cin >> taxmin;

        if (taxmin > sir) {
            cout << "Katta!" << endl;
        } else if (taxmin < sir) {
            cout << "Kichik!" << endl;
        } else {
            cout << "Topding! 🎉" << endl;
            break;
        }
    }

    return 0;
}

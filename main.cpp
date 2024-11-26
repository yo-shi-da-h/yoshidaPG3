#include <iostream>
#include <list>
#include <cstring> // strcmpを使用

using namespace std;

// 駅一覧を表示する関数
void printStations(const list<const char*>& stations, const char* year) {
    cout << "Stations in " << year << ":" << endl;
    for (const auto& station : stations) {
        cout << station << endl;
    }
    cout << endl;
}

int main() {
    
    list<const char*> yamanote = {
        "Tabata", "Nippori", "Ueno", "Okachimachi", "Akihabara", "Kanda",
        "Tokyo", "Yurakucho", "Shimbashi", "Hamamatsucho", "Tamachi",
        "Shinagawa", "Osaki", "Gotanda", "Meguro", "Ebisu", "Shibuya",
        "Harajuku", "Yoyogi", "Shinjuku", "Shin-Okubo", "Takadanobaba",
        "Mejiro", "Ikebukuro", "Otsuka", "Sugamo", "Komagome"
    };

    printStations(yamanote, "1970");

    auto it = yamanote.begin();
    for (; it != yamanote.end(); ++it) {
        if (strcmp(*it, "Nippori") == 0) {
            yamanote.insert(next(it), "Nishi-Nippori");
            break;
        }
    }

    printStations(yamanote, "2019");

    it = yamanote.begin();
    for (; it != yamanote.end(); ++it) {
        if (strcmp(*it, "Tamachi") == 0) {
            yamanote.insert(next(it), "Takanawa Gateway");
            break;
        }
    }

    printStations(yamanote, "2022");

    return 0;
}

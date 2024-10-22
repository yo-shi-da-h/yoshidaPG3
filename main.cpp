#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <functional>

void setTimeout(std::function<void(int*)> func, int second) {
    Sleep(second * 1000);
    func(&second);
}

int main() {
    int userChoice;
    int dice;

    
    srand(static_cast<unsigned int>(time(0)));
    dice = rand() % 6 + 1; 

    std::cout << "サイコロの目を奇数か偶数かを当てる。\n";
    std::cout << "1: 奇数, 2: 偶数\n";
    std::cout << "選択肢を入力 (1または2): ";
    std::cin >> userChoice;

    std::cout << "start\n";

    
    std::function<void(int*)> callback = [](int* s) {
        std::cout << *s << "秒待って実行されたよ\n";
    };

    
    setTimeout(callback, 3);

    std::cout << "サイコロの目は: " << dice << std::endl;

    
    if (dice % 2 == 0) {
        if (userChoice == 2) {
            std::cout << "正解\n";
        } else {
            std::cout << "不正解\n";
        }
    } else {
        if (userChoice == 1) {
            std::cout << "正解\n";
        } else {
            std::cout << "不正解\n";
        }
    }

    return 0;
}

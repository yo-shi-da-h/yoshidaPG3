#include <stdio.h>
#include "Enemy.h"

int main() {
    Enemy enemy;


    for (int i = 0; i < 6; ++i) {
        enemy.Update();
    }

    return 0;
}
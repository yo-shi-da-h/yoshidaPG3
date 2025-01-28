#include "Enemy.h"
#include <cstdio>

void (Enemy::* Enemy::functionTable[])() = {

    &Enemy::Getcloser,
    &Enemy::separation,
    &Enemy::LeaveUpdate 

};

Enemy::Enemy() : Phase(0) {}

void Enemy::Update() {

    (this->*functionTable[Phase])();

    printf("Updating matrices...\n");

    printf("Current phase: %d\n", Phase);

    Phase = (Phase + 1) % 2;

}

void Enemy::Getcloser() {

    printf("Enemy is approaching.\n");

}

void Enemy::separation() {

    printf("Enemy is retreating.\n");

}

void Enemy::LeaveUpdate()
{
	printf("Enemy is withdrawal");
}
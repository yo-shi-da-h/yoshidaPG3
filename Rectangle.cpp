#include "Rectangle.h"

void Rectangle::Size() {
	answer = wide * height;
}

void Rectangle::Draw() {
	printf("%d\n", answer);
}
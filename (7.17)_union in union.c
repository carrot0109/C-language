#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Flower {
	char name[30];
	enum{red, white, yellow, pink, etc} color;		// color는 앞 열거 참조 변수(지역변수)
};

struct Fruit {
	char name[30];
	int cal;
};

struct Vegetable {
	char name[30];
	int cal;
	int cooking_time;
};

union flower_fruit_vegetable {
	struct Flower flower;
	struct Fruit fruit;
	struct Vegetable vegetable;
};

typedef struct {
	char type;
	union flower_fruit_vegetable ffv;
} things;

enum type { flower, fruit, vegetable };
char* color[] = { "red","white","yellow","pink","etc" };
// char color[5][6] = { "red","white","yellow","pink","etc" }; 와 동일

int main()
{
	int i;
	things x[3];

	x[0].type = flower;
	strcpy(x[0].ffv.flower.name, "Sunflower");
	x[0].ffv.flower.color = yellow;	// yellow -> 2
	
	x[1].type = fruit;
	strcpy(x[1].ffv.fruit.name, "Apple");
	x[1].ffv.fruit.cal = 52;
	
	x[2].type = vegetable;
	strcpy(x[2].ffv.vegetable.name,"Carrot");
	x[2].ffv.vegetable.cal = 41;
	x[2].ffv.vegetable.cooking_time = 5;
	
	for (i = 0; i < 3; i++)
	{
		if (x[i].type == flower) 
			printf("%s, %s\n", x[i].ffv.flower.name, color[x[i].ffv.flower.color]);
		else if (x[i].type == fruit)
			printf("%s, %dkcal\n", x[i].ffv.fruit.name, x[i].ffv.fruit.cal);
		else if (x[i].type == vegetable)
			printf("%s, %dKcal, %dMin\n", x[i].ffv.vegetable.name, x[i].ffv.vegetable.cal, x[i].ffv.vegetable.cooking_time);
	}
}

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct score {
	unsigned char name[20];
	unsigned char kor, eng, math, sci;
	unsigned int tot;
	float avg;
};

int cmpare(const void* a, const void* b) {
	struct score* ia = (struct score*)a;		// void형태를 struct score*형으로 형변환
	struct score* ib = (struct score*)b;

	printf("%s %s\n", ia->name, ib->name);
	// 출력해줌으로써 어떤 알고리즘인지 확인

	return strcmp(ia->name, ib->name);
}


int main()
{
	int i = 0;
	struct score st[20] = {
		{"강인한",95,89,97,90,},{"장윤아",90,91,93,89,},
		{"김수영",76,87,89,79,},{"민효연",92,91,87,77,},
		{"성유리",87,90,78,70,},{"한태연",88,77,68,78,},
		{"곽서현",88,99,66,77,},{"박규리",79,87,97,99,},
		{"강지영",67,69,79,78,},{"한지영",98,78,97,88,},
		{"한준수",57,67,65,76,},{"홍준호",78,73,69,79,},
		{"임찬성",68,78,67,65,},{"강우영",80,90,89,77,},
		{"박택훈",47,65,55,67,},{"조성권",76,56,67,87,},
		{"이창훈",88,89,85,92,},{"정진석",89,90,78,80,},
		{"김유정",91,93,89,90,},{"홍민수",89,99,87,93,}
	};

	for (i = 0; i < 20; i++){
		st[i].tot = st[i].kor + st[i].eng + st[i].math + st[i].sci;
		st[i].avg = st[i].tot / 4.0;		// 총합과 평균 계산
	}

	qsort(st, 20, sizeof(struct score), cmpare);
	// qsort(배열, 갯수, 메모리, 호출 함수)

	for (i = 0; i < 20; i++) {
		printf("%s %d %d %d %d %d %f\n", st[i].name, st[i].kor, st[i].eng, st[i].math, st[i].sci, st[i].tot, st[i].avg);
	}
	return 0;
}

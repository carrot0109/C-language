#include <stdio.h>

int main()
{
	char* str = "C language Programing", * s;       // str과 s라는 포인터 변수 선언. str은 C의 주솟값을 나타내고 있음
	s = str;										// s와 str은 서로 주솟값 공유
	while (*s)										// *s가 NULL만 아니라면 계속 출력
		printf("%s\n", s++);						// C만 출력되나? 라는 예상(공백은 NULL이 아님)
	str = "This is test";								// 직접적으로 대입할 수 있다. 하지만 문제가 발생할 가능성도 존재함
	printf("%s", str);
	return 0;										
}

// 결과
// C language Programing      s++로 인해 주솟값이 이동되므로 한칸씩 밀려 출력됨
//  language Programing
// language Programing
// anguage Programing
// nguage Programing
// guage Programing
// uage Programing
// age Programing
// ge Programing
// e Programing
//  Programing
// Programing
// rograming
// ograming
// graming
// raming
// aming
// ming
// ing
// ng
// g                       다음은 NULL문자이므로 출력되지 않음

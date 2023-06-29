#include <stdio.h>

int main()
{
	char* cheongan[10] = { "慶","辛","壬","癸","甲","乙","丙","丁","戊","己" };
	char* jiji[12] = { "申","酉","戌","亥","子","丑","寅","卯","辰","巳","午","未"};
	char* cheongan_hangul[10] = { "경","신","임","계","갑","을","병","정","무","기" };
	char* jiji_hangul[12] = { "신","유","술","해","자","축","인","묘","진","사","오","미"};
	char* tti[12] = {"원숭이","닭","개","돼지","쥐","소","호랑이","토끼","용","뱀","말","양"};
	int year, cheongan_mod, jiji_mod, y;
	
	printf("년도를 입력하시오: ");
	scanf_s("%d", &year);
	cheongan_mod = year % 10;
	jiji_mod = year % 12;
	printf("%d년", year);
	printf("%s%s年(%s%s년): %s띠\n\n\n", *(cheongan + cheongan_mod), *(jiji + jiji_mod),		// *(cheongan+cheongan_mod) 는 주소값을 한칸 옮긴다고 생각함년 됨 
		*(cheongan_mod + cheongan_hangul), *(jiji_hangul + jiji_mod), *(tti + jiji_mod));

	for (y = year - 5; y <= year + 5; y++)
	{
		cheongan_mod = y % 10;
		jiji_mod = y % 12;
		printf("%d년 ", y);
		printf("%s%s年(%s%s년): %s띠\n", *(cheongan + cheongan_mod), *(jiji + jiji_mod), 
			*(cheongan_mod + cheongan_hangul), *(jiji_hangul + jiji_mod), *(tti + jiji_mod));
	}

	return 0;										
}

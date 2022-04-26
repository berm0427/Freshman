# define _CRT_SECURE_NO_WARNINGS // scanf 오류 안뜨게 하기 위한 구문
# include <stdio.h> // 표준 입출력 라이브러리 불러오기

int main() // 메인함수 선언하기 위한 구문
{
	int jumin_bunho_fornt; // 주민번호 앞자리를 입력받기 위한 변수 선언 
	printf("-> 생년월일을 입력해주세요 ex) 961106\n"); // 주민번호 앞자리를 입력받기 위한 안내문 출력하기 위한 printf 구문
	printf("-> 00년생 이전 사람은 19xx년도 00년생 부터는 20xx년도\n"); // 주민번호 앞자리를 입력받기 위한 안내문 출력 printf 구문
	printf("-> "); // 주민번호 앞자리를 입력받기 위한 안내문 출력하기 위한 printf 구문
	scanf("%d", &jumin_bunho_fornt); // 주민번호 앞자리를 입력받기 위한 scanf문
	int j_b_f_y = jumin_bunho_fornt * 0.0001; // 020427에서 02를 떼어내기 위한 수식
	int j_b_f_m = jumin_bunho_fornt * 0.01 - j_b_f_y * 100 ; // 020427에서 04를 때어 내기 위한 수식
	int j_b_f_d = jumin_bunho_fornt - ((j_b_f_y * 100 + j_b_f_m) * 100); // 020427에서 27을 때어내기 위한 수식
	//printf("%d %d %d\n", j_b_f_y, j_b_f_m, j_b_f_d); <- 테스트를 위한 printf 구문이지만 남겨놓음
	j_b_f_y > 22 ? printf("19%d년도 %d월 %d일에 태어나셨군요!", j_b_f_y, j_b_f_m, j_b_f_d) : (j_b_f_y<10 ? printf("200%d년도 %d월 %d일에 태어나셨군요!", j_b_f_y, j_b_f_m, j_b_f_d): printf("20%d년도 %d월 %d일에 태어나셨군요!", j_b_f_y, j_b_f_m, j_b_f_d));
 }  // 연도를 비교하고 해당하는 앞부분 (ex) 1996년도 에서 19)를 출력하기 위한 삼항연산자 구문 
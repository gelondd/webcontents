#include <stdio.h>
int main()
{
	int won = 500000; /*제시하는 동시에 대입 초기화, 결과 생각해서 적절한 자료형 사용 모든 문에는 ; 사용*/
	int dalar = won / 1221.0; /*대입문안에는 숫자 단위 ex 500,00 사용 불가능 */
	
	printf("원화 %d원을 달러 단위 금액으로 환전하면\n %d달러이다.", won, dalar);

	
	return 0;


#pragma warning (disable:4996)

#include <stdio.h>
int main()
{
	int C;
	double F;
	/*순서가 중요*/
	printf("섭씨온도를 정수값으로 넣어주십시오.\n");
	scanf("%d",&C);
	F = 9.0 / 5.0 * C + 32;
	printf("섭씨온도 %d를 \n 화씨 온도로 출력하면 %f입니다.", C, F);

	return 0;


}
#pragma warning (disable:4996)

#include <stdio.h>
int main()
{
	int r, e, m;
	double average;
	/*순서가 중요*/
	printf("순서대로 국어, 영어, 수학 점수를 입력해주세요. 숫자를 치고 숫자 뒤에 바로 컴마를 꼭 넣어주십시오.\n");
	scanf("%d, %d, %d" , &r, &e, &m);
	average = (r + e + m) / 3.0;
	printf(" 국어,영어, 수학의 점수는 각각 %d,%d,%d입니다. \n 세 과목의 평균은 %f입니다. ", r,e,m,average);
	printf(" 국어,영어, 수학의 점수는 각각 %d,%d,%d입니다. \n 세 과목의 평균은 %f입니다. ", r, e, m, (r + e + m) / 3.0);

	int tot = r + e + m; /*중간변수 존재 ->프로그램의 기능 확장을 염두에 둠!*/
	printf(" 국어,영어, 수학의 점수는 각각 %d,%d,%d입니다. \n 세 과목의 평균은 %f입니다. ", r, e, m, tot / 3.0);

	return 0;


}

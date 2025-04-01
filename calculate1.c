#include <stdio.h>
int main()
{
	int won = 500000; /*제시하는 동시에 대입 초기화, 결과 생각해서 적절한 자료형 사용 모든 문에는 ; 사용*/
	int dalar = won / 1221.0; /*대입문안에는 숫자 단위 ex 500,00 사용 불가능 */
	
	printf("원화 %d원을 달러 단위 금액으로 환전하면\n %d달러이다.", won, dalar);

	
	return 0;
}
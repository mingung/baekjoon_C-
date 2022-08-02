//#include <iostream>
//using namespace std;
// 리터널 상수 -> 변수와는 달리 데이터가 저장된 메모리 공간을 가리키는 이름x
/*int main()
{
	int a = 10;

	cout << "숫자 10을 10진수로 표현하면 " << a << "이며, " << endl;
	cout << oct;
	cout << "숫자 10을 8진수로 표현하면 " << a << "이며, " << endl;
	cout << hex;
	cout << "숫자 10을 16진수로 표현하면" << a << "입니다.";

} // 숫자 10을 각각 10진수, 8, 16진수 형태로 출력*/

// 심볼릭 상수 -> 변수와 마찬가지로 이름을 가지고 있는 상수
// ***선언과 동시에 초기화***반드시!!!!!

#include <iostream>
using namespace std;

int main()
{
	const int ages = 30;
	//선언과 동시에 초기화@@
	cout << ages;

	return 0;
}


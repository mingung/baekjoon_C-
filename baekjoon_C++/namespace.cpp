/* namespace (이름이 소속된 공간, 
발생하는 이름에 대한 충돌 방지)*/
//std::cout에서 std제거 가능

#include <iostream>
#define TEXT "Welcome to C++ Programming!"
using namespace std;

int main()
{
	cout << TEXT;
	return 0;
}
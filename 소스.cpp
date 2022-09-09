//참조자의 단점은 main함수만 보고 이것이 변수를 변화시킬지 알 수 없다는 것이다.
//해결을 위해서는 참조자 기반의 함수정의를 하면 안된다.
//const선언으로 변경하지 않을 수 있지만. 포인터를 사용하는 편이 좋다는 사람들이 많다.

#include<iostream>
using namespace std;

int& refreturn(int& ref)//반환형에도 참조형이 선언될 수 있다.
{
	ref++;
	return ref;
}

int main()
{
	int n1 = 1;
	int& n2 = refreturn(n1);//참조자를 선언했을 때, 그 대상에 참조자가 붙어있지 않은 경우, 에러가 발생.
	//refreturn에서 n1을 참조했고 반환했기 때문에 n1과 n2는 연결된다.

	n1++;
	n2++;
	cout << "n1: " << n1 << endl;
	cout << "n2: " << n2 << endl;
	return 0;
}
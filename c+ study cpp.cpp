#include <iostream>
using namespace std;

int main() {

	cout << "이름을 입력하시오 : \n";
	char name0[12];
	cin.getline(name0, 12, '\n');
	cout << "이름은 " << name0 << "입니다.\n";

}

#include <iostream>
using namespace std;

int gcd(int a, int b)
 {
  if((b % a) == 0) return a;

  return gcd(b % a, a);
 }
int main() {
	//code
	int test;
	cin >> test;
	while(test--){
	int a, b, mul, temp = 0, lcm = 0;
	cin >> a >> b;

    mul = a * b;
	temp = gcd(a, b);
	lcm = mul / temp;

	cout << lcm << " " << temp <<endl;

	}

	return 0;
}

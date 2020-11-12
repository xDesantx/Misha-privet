#include <iostream>
#include <cmath>

using namespace std;

int main(){
	double x;
	double kusok;
	double result;
	double e;
	int znak = -1;
	int counter = 2;

	// эта хуйня будет спрашивать икс пока не введем правиоьный 
	while(true){
	cout << "vvedite x:";
	cin >> x;
	if(-1<x && x<1)// если икс щбс то ливаем цикл
		break;
	}
	cout << "vvedite e:";
	cin >> e;
	// тута пример короче
	result = x;
	do{// я ебу короче но типа мы это делаем минимум 1 раз
		// и до тех пор пока кусок не станет меньше е
		// схуяли а я ебу

		kusok = pow(x, counter) / pow(counter, 2) * znak;
		result += kusok;// result = result + kusok тоже самое 

		// тут типа увеличиваем степень и меняем щнак
		counter++;
		znak *= -1;


	}while(abs(kusok) <= e);
	// вывод результата
	cout << "result: " << result << endl;

	return 0;
}

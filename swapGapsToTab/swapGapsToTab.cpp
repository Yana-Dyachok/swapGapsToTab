// 1. Дан рядок символів. Замінити в ньому всі пробіли на табуляцію
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string Symbols;//створюємо об'єкт Symbols для типу string 
	cout << "Enter any symbols with gaps" << endl;
	getline(cin, Symbols);//вводимо дані в рядок
	int size = Symbols.size();//створюємо розмір для даного рядка
	for (int i = 0; i < size; i++)//створюємо цикл для заміни пробілів
	{
		if (Symbols[i] == ' ')//якщо у рядку є пробіли, то
			Symbols[i] = '\t';//присвоюємо табуляцію замість пробілів
	}
	cout << Symbols<< endl;//виводимо дані - де пробіли замінені на табуляцію
}

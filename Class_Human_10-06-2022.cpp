// Class_Human_10-06-2022.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//10-06-2022

#include <iostream>
using namespace std;
// создаем класс
class human // создаем класс человек
{
private:
	int age1; // возраст
	int height1; // рост
	int weight1; // вес
	string name1; // имя 
public: 
	human(int page1, int pheight1, int pweight1, string pname1)
		: age1{ page1 }, height1 {pheight1}, weight1 {pweight1}, name1 {pname1}
	{
		cout << "\nработает конструктор с параметрами\n";
	}
	human() : human(40, 180, 78, "hum")
	{
	}
	~human()
	{

	}
	void print() // вывод на экран числителя и знаменателя
	{
		/*cout << "\n числитель\t" << verh << "\t";
		cout << "\t знаменатель\t" << niz << "\n";*/
		cout << "\n" << age1 << " - " << height1 <<" - " << weight1 << " - " << name1 << "\n";
	}
};
int main()
{
	system("chcp 1251");
	human DR {};
	DR.print();
	return 0;
}
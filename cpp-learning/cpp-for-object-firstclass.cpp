/*#include <iostream>
using namespace std;

class Player  //类
{
public:

	string name;  //成员数据
	int hp;

	void attack() {    //成员函数
		cout << name << " attack!" << endl;
	}
};

int main() {
	Player player;  //对象

	player.name = "Evan";
	player.hp = 100;

	player.attack();

	return 0;
}*/

#include <iostream>
using namespace std;

class Student
{
public:

	string name;
	int age;
	int score;

	int study(int s_score) {
		if (s_score <= 95) s_score += 5;
		else s_score = 100;
		return s_score;
	 }

	void showInfo() {
		cout << name << endl << age << endl << score << endl;
	}
};

int main() {
	Student student;

	student.name = "Evan";
	student.age = 20;
	student.score = 80;
	student.showInfo();

	student.score = student.study(student.score);
	cout << "after studying:" << endl;
	student.showInfo();

	return 0;
}
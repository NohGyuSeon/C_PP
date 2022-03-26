#include <iostream>
#include <algorithm>

using namespace std;

class Student {
public:
	string name;
	int score;
	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}
	// ���� ������ '������ ���� ����'
	bool operator <(Student &student) {
		return this->score < student.score;
	} 
};

bool compare(int a, int b) {
	return a > b;
}

int main (void){
	Student students[] = {
		Student("��Լ�1", 100),
		Student("��Լ�2", 90),
		Student("��Լ�3", 80),
		Student("��Լ�4", 70),
		Student("��Լ�5", 60)
	};
	sort(students, students + 5);
	for(int i = 0; i < 5; i++) {
		cout << students[i].name << ' ';
	}
	
}

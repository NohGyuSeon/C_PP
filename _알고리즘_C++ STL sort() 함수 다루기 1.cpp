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
	// 정렬 기준은 '점수가 작은 순서'
	bool operator <(Student &student) {
		return this->score < student.score;
	} 
};

bool compare(int a, int b) {
	return a > b;
}

int main (void){
	Student students[] = {
		Student("노규선1", 100),
		Student("노규선2", 90),
		Student("노규선3", 80),
		Student("노규선4", 70),
		Student("노규선5", 60)
	};
	sort(students, students + 5);
	for(int i = 0; i < 5; i++) {
		cout << students[i].name << ' ';
	}
	
}

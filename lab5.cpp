#include <iostream>
#include <string>
using namespace std;
class Candidate {

private:
	string name;
	int count;
	float percent;
public:
	int sum;
	string GetName() {

		return name;
	}

	int GetCount() {

		return count;
	}

	float GetPercent() {

		return percent;
	}


	Candidate(string name, int count, float percent) {

		this->name = name;
		this->count = count;
		this->percent = percent;
	}
	void Output() {
		cout << name << count << "\t" << percent << "%" << endl
	}
};
class Elections {

private:

	string nazar, irena, hasbik, igor, sanya;
	int arr[5];
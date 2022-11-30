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
		cout << name << count << "\t" << percent << "%" << endl;
	}



};
class Elections {

private:

	string nazar, irena, denys, igor, sasha;
	
	int arr[5];


public:





	int GetArr0() { return arr[0]; }

	int GetArr1() { return arr[1]; }


	int GetArr2() { return arr[2]; }


	int GetArr3() { return arr[3]; }

	int GetArr4() { return arr[4]; }



		
		
		Elections(string nazar, string irena,string denys, string igor, string sasha) {
		  this->nazar = nazar;
		  this->irena=irena;
		  this->denys = denys;
		  this->igor = igor;
		  this->sasha = sasha;
}
	  Elections(int arr0, int arr1, int arr2, int arr3, int arr4) {

		  this->arr[0] = arr0;
		  this->arr[1] = arr1;
		  this->arr[2] = arr2;
		  this->arr[3] = arr3;
		  this->arr[4] = arr4;





	  }
void winner()
	  {
	
		  int max = 0;
		  for (int i : arr)
			  if (i > max) {
				  max = i;
			  }
		  
		  if (max == arr[0]) {

			  cout <<"Winner-"<< "Nazar Shiyka" << endl;
		  }
		  else if (max == arr[1]) {

			  cout << "Winner-" << "Irena Vovk" << endl;
		  }
		  else if (max == arr[2]) {

			  cout << "Winner-" << "Denys Tagiev" << endl;
		  }
		  else if (max == arr[3]) {


			  cout << "Winner-" << "Igor Ganyk" << endl;
		  }

		  else if (max == arr[4]) {


			  cout << "Winner-" << "Sasha Syrotych" << endl;
		  }
		  else {


			  cout << "No winner" << endl;
		  }


	}






};









	
	
	
	int main() {
		int Sum,i;
		int arr[5] = { 6666,567,346,675,333};
		float prN, prIr, prD, prIg, prS;



		Sum = 0;
		for (i = 0; i < 5; i++)
			Sum += arr[i];



		prN = arr[0] / (float)Sum*100;
		prIr = arr[1] / (float)Sum*100;
		prD = arr[2] / (float)Sum * 100;
		prIg = arr[3] /(float) Sum*100;
		prS = arr[4] / (float)Sum*100;

		Candidate Nazar("Shyika Nazar\t",arr[0],prN);
		Nazar.Output();
		Candidate Irena("Vovk Irena\t" ,arr[1],prIr);
		Irena.Output();
		Candidate Denys( "Tagiev Denys\t",arr[2],prD);
		Denys.Output();
		Candidate Igor("Ganyk Igor\t" ,arr[3],prIg);
		Igor.Output();
		Candidate Sasha( "Syrotych Sasha\t",arr[4],prS);
		Sasha.Output();


		Elections Winner("Nazar Shiyka", "Irena Vovk", "Denys Tagiev", "Igor Ganyk", "Sasha Syrotych");
		Elections Arr(arr[0], arr[1], arr[2], arr[3], arr[4]);
		Arr.winner();

	return 0;
}



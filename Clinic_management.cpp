#include <bits/stdc++.h>

using namespace std;

//=====Appointment=====
class Appointments{
	protected:
		string date;
		string time;
		string status;
	public:
		//getter
		string getdate(){return date;}
		string gettime(){return time;}
		string getstatus(){return status;}
		//setter
		void setdate(string date){date = _date;}
		void settime(string time){time = _time;}
		void setstatus(string status){status = _status;}
		
		Appointment(): date(""), time(""), status(""){}
		Appointment(string _date, string _time, string _status){
			date = _date;
			time = _time;
			status = _status;
		}
		void inputAppointment(){
			cout<<"please enter appointment date: "; cin>>date; cout<<endl;
			cout<<"Please enter time: "; cin>>time; cout<<endl;
			cout<<"Please enter status: "; cin>>time; cout<<endl;
		}
		
		void displayinfo(){
			cout<<"Appointment date: "<<date<<endl<<"Time: "<<time<<endl<<"Status: "<<status<<endl<<endl;
		}
};

//General class for name and ID
class GeneralInfo{
	protected:
		string name;
	    string id;
	public:
		//getter
		string getname(){return name;}
		string getid(){return id;}
		//setter
		void setname(string _name){name = _name;}
		void setid(string _id){id = _id;}
		
		GeneralInfo(): name(""), id(""){}	
	    GeneralInfo(string _name, string _id){
			name = _name;
			id = _id;
		}
};

// =====Patient=====
class Patient: public GeneralInfo{
	protected:
		int age;
	public:
		Patient(string _name, string _id, int _age): GeneralInfo(_name, _id), age(_age){}
		
		//getter
		int getage(){return age;}
		//setter
		void setage(int _age){age = _age;}
		
		void inputPatient(){
			cout<<"Please enter patient name: "; cin>>name; cout<<endl;
			cout<<"Please enter age: "; cin>>age; cout<<endl;
			cout<<"Please enter ID: "; cin>>id; cout<<endl;
		}
		
		void displayinfo(){
			cout<<"Patient name: "<<name<<endl<<"Age: "<<age<<endl<<"ID: "<<id<<endl<<endl;
		}
};

//=====Doctor=====
class Doctor: public GeneralInfo{
	protected:
		string specialty;
	public:
		Doctor(string _name, string _id, string _specialty): GeneralInfo(_name, _id), specialty(_specialty){}
		
		//getter
		string getspecialty(){return specialty;}
		//setter
		void setspecialty(string _specialty){specialty = _specialty;}
		
		void inputDoctor(){
			cout<<"Please enter doctor name: "; cin>>name; cout<<endl;
			cout<<"Please enter ID: "; cin>>id; cout<<endl;
			cout<<"Please enter specialty: "; cin>>specialty; cout<<endl;
		}
		
		void displayinfo(){
			cout<<"Doctor name: "<<name<<endl<<"ID: "<<id<<endl<<"Specialty: "<<specialty<<endl<<endl;
		}
};

//=====Chronic Patient=====
class ChronicPatient: public Patient{
	protected:
		string disease;
	public:
		ChronicPatient(string _name, string _id, int _age, string _disease): Patient(_name, _id, _age), disease(_disease){}
		
		//getter
		string getdisease(){return disease;}
		//setter
		void setdisease(string _disease){disease = _disease;}
		
		void inputChronic(){
			cout<<"Please enter patient name: "; cin>>name; cout<<endl;
			cout<<"Please enter age: "; cin>>age; cout<<endl;
			cout<<"Please enter ID: "; cin>>id; cout<<endl;
			cout<<"Please enter disease: "; cin>>disease; cout<<endl;
		}
		
		void displayinfo(){
			cout<<"Chronic patient name: "<<name<<endl<<"Age: "<<age<<endl<<"ID: "<<id<<endl<<"Disease: "<<disease<<endl<<endl;
		}
};


int main(){
	intputPatient();
	inputDoctor();
    inputChronic();
}

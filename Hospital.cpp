#include "Hospital.h"

Hospital::Hospital():_score_procedures(0),_id_patient(1){}

void Hospital::Show_list_patients(){
	for (size_t i = 1; i <= _patients.size(); i++)	{
		auto it = _patients.find(i);
		if (it != _patients.end()) {
			std::cout << it->first << "\t" << it->second << '\n';
		}
	}
	std::cout << std::endl;
}

void Hospital::Registration_patient(const std::string& name){
	_patients[_id_patient] = name;
	_id_patient++;
}

void Hospital::Procedures(int id_patient){
	std::cout << _patients[id_patient] << " прошел процедуры\n";
	Discharge(id_patient);
	_score_procedures++;
}

void Hospital::Discharge(int id_patient){
	std::cout<<_patients[id_patient] << " выписан из больницы" << std::endl;
	_patients.erase(id_patient);
}

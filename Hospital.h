#pragma once
#include <iostream>
#include <string>
#include <map>
class Hospital
{
public:
	Hospital();
	void Show_list_patients();
	void Registration_patient(const std::string& name);
	void Procedures(int id_patient);
	void Discharge(int id_patient);
private:
	std::map<int, std::string> _patients;
	int _score_procedures;
	int _id_patient;
};


#include <iostream>
#include "Hospital.h"
int main() {
	setlocale(LC_ALL, "Russian");
	Hospital H1;
	H1.Registration_patient("Alex");
	H1.Registration_patient("Bob");
	H1.Registration_patient("Garry");
	H1.Registration_patient("Alice");
	H1.Show_list_patients();
	H1.Procedures(1);
	H1.Procedures(2);
	H1.Discharge(4);
	H1.Show_list_patients();

	return 0;
}
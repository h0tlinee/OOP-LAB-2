#include "std_pareto_class.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp" 

using namespace std;

int run_unit_tests(int argc, char** argv) {
	int result = Catch::Session().run(argc, argv);
	return result;
}


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");
	try {
		//Pareto pareto("atributes.txt");
		
		
	}
	catch (range_error ex) {
		cout << "Error:  " << ex.what();
	}
	catch (runtime_error ex) {
		cout << "Error while working with files: " << ex.what();
	}
	run_unit_tests(argc, argv);

}
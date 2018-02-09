#include <iostream>
#include <fstream>
#include <string>

struct comp_params {
    comp_params(int i, int i1, int i2, int i3);

    int n_constraints;
    int n_inputs;
    int n_outputs;
    int n_vars;
};

comp_params parse_params(std::string paramFilename) {
    std::cout << paramFilename;
    std::ifstream paramFile(paramFilename);
    if (!paramFile.is_open()) {
        //std::cerr << "ERROR: " << paramFilename << " not found. (Try running `make ` " << std::string(NAME) << ".params)" << std::endl;
        exit(111);
    }
    int num_constraints, num_inputs, num_outputs, num_vars;
    std::string comment;
    paramFile >> num_constraints >> comment >> num_inputs >> comment >> num_outputs >> comment >> num_vars;
    paramFile.close();

    //return comp_params{num_constraints, num_inputs, num_outputs, num_vars};
    return comp_params(num_constraints, num_inputs, num_outputs, num_vars);
}
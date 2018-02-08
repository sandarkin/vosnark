#include <iostream>
#include <fstream>

// https://gmplib.org/repo/gmp/file/tip/mini-gmp/mini-gmp.h
// https://gmplib.org/repo/gmp/raw-file/tip/mini-gmp/mini-gmp.h
#include "mini-gmp.h"

// #include <common/utility.h>
// #include "common_defs.h"

using std::cout;
using std::endl;
using std::string;
using std::pair;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::stringstream;

void verify (string verification_key_fn, string inputs_fn, string outputs_fn,
             string proof_fn, int num_inputs, int num_outputs, mpz_t prime) {

}

int main (int argc, char* argv[]) {
    mpz_t prime;
    mpz_init_set_str(prime, "21888242871839275222246405745257275088548364400416034343698204186575808495617", 10);
    cout << "EMPTY DONE";
}
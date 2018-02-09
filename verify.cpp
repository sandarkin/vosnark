#include <iostream>
#include <fstream>

#include "verify.h"

// https://gmplib.org/repo/gmp/file/tip/mini-gmp/mini-gmp.h
// https://gmplib.org/repo/gmp/raw-file/tip/mini-gmp/mini-gmp.h
#include "mini-gmp.h"

#define NAME "mm_pure_arith"

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

    struct comp_params p = parse_params("./fixtures/bin/" + string(NAME) + ".params");

//    std::string verification_key_fn = std::string(v_dir) + argv[2];
//    std::string inputs_fn = std::string(shared_dir) + argv[3];
//    std::string outputs_fn = std::string(shared_dir) + argv[4];
//    std::string proof_fn = std::string(shared_dir) + argv[5];
//    verify(verification_key_fn, inputs_fn, outputs_fn, proof_fn, p.n_inputs, p.n_outputs, prime);

    cout << "EMPTY DONE";
}

comp_params::comp_params(int i, int i1, int i2, int i3) {

}

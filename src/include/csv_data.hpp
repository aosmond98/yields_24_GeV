#ifndef CSV_DATA_H_GUARD
#define CSV_DATA_H_GUARD

#include <fstream>
#include <string>

struct csv_data {
  short electron_sector;
  float sf;
  float w;
  float w_mc;
  double elec_prime_m2;
  double elec_m2;
  double elec_energy_rec;
  float q2_mc;
  float w_had;
  float w_diff;
  float elec_mom_rec;
  float elec_theta_rec;
  float elec_phi_rec;

  float energy_x_mu;
  float mom_x_mu;

  float q2;

  float gen_elec_E;
  float gen_elec_mom;
  float gen_elec_theta;
  float gen_elec_phi;

  float gen_pim_mom;
  float gen_pim_theta;
  float gen_pim_phi;

  float gen_pip_mom;
  float gen_pip_theta;
  float gen_pip_phi;

  float gen_prot_mom;
  float gen_prot_theta;
  float gen_prot_phi;

  float weight_gen;
  float weight_rec;

  int status_Elec;
  int status_Pim;
  int status_Pip;
  int status_Prot;

  // Static functions can be called without making a new struct
  static std::string header() {
    // Make a string for the header of the csv file mPim case
    // 24 GeV test
    // return

    return "w_mc,q2_mc,weight";


  }

  friend std ::ostream &operator<<(std::ostream &os, const csv_data &data) {
    // os << std::setprecision(7);
    // os << data.w << ",";
    // os << data.q2 << ",";
     // os << data.w_had << ",";
    // // os << data.w_diff << ",";
    // os << data.sf << ",";
    // // os << std::setprecision(10);
    // // os << data.elec_prime_m2 << ",";
    // // os << data.elec_m2 << ",";
    // // os << data.elec_energy_rec << ",";
    // os << data.elec_mom_rec << ",";
    // // os << data.elec_theta_rec << ",";
    // // os << data.elec_phi_rec << ",";
    // os << std::setprecision(8);
    //  os << data.weight_rec << ",";
    // os << std::setprecision(7);
    // // // os << data.status_Elec << ",";
    // // // os << data.status_Pim << ",";
    // // // os << data.status_Pip << ",";
    // // // os << data.status_Prot << ",";

    // os << data.energy_x_mu << ",";
    // os << data.mom_x_mu << ",";

      os << data.w_mc << ",";
      os << data.q2_mc << ",";

     // os << data.gen_elec_E << ",";
     // os << data.gen_elec_mom << ",";
     // os << data.gen_elec_theta<< ",";
     // os << data.gen_elec_phi << ",";

     // os << data.gen_prot_mom << ",";
     // os << data.gen_prot_theta << ",";
     // os << data.gen_prot_phi << ",";

     // os << data.gen_pip_mom << ",";
     // os << data.gen_pip_theta << ",";
     // os << data.gen_pip_phi <<",";

     // os << data.gen_pim_mom << ",";
     // os << data.gen_pim_theta << ",";
     // os << data.gen_pim_phi<< ",";
     // os << std::setprecision(8);

      os << data.weight_gen<< ",";

    return os;
  }
};

#endif

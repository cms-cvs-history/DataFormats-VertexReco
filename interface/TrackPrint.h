#ifndef TrackPrint_h
#define TrackPrint_h
#include "DataFormats/TrackReco/interface/Track.h"
#include <iostream>
#include <sstream>

ostream& operator<<(ostream& os, const reco::Track & tk) {
  
  os << "track parameters" << endl;
  {
    os << "(d_xy, phi_0, q/pT, d_z, p_z/p_T) = ";
    {
      for (int i = 0; i < 5; i++) {
        os.precision(6); os.width(13); os<<tk.parameter(i);
      }
    }
  }
  os << endl;
  os << "covariance" << endl;
  {
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
	os.precision(6); os.width(13); os<<tk.covariance(i, j);
      }
      os << endl;
    }
  }
  os << endl;

  return os;
}

ostringstream& operator<<(ostringstream& os, const reco::Track & tk) {
  
  os << "track parameters" << endl;
  {
    os << "(d_xy, phi_0, q/pT, d_z, p_z/p_T) = ";
    {
      for (int i = 0; i < 5; i++) {
        os.precision(6); os.width(13); os<<tk.parameter(i);
      }
    }
  }
  os << endl;
  os << "covariance" << endl;
  {
    for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
	os.precision(6); os.width(13); os<<tk.covariance(i, j);
      }
      os << endl;
    }
  }
  os << endl;

  return os;
}

#endif
#include "Musicien.h"

Musicien::Musicien(const string& nom, const string& instrument, const string& style)
  : nom(nom), instrument(instrument), style(style) {}

string Musicien::get_nom() const { 
  return nom; 
}

string Musicien::get_instrument() const {
  return instrument; 
}

string Musicien::get_style() const {
  return style; 
}

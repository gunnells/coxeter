/*
  This is version.h
  
  Coxeter version 3.0  Copyright (C) 2002 Fokko du Cloux
  See file main.cpp for full copyright notice
*/

#ifndef VERSION_H  /* guard against multiple inclusions */
#define VERSION_H

namespace version {
  static char const *NAME = "Coxeter";  // need static here because otherwise get multiply defined-symbols at 
  static char const *VERSION = "3.0_beta2";
};

#endif

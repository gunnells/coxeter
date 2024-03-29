/*
  This is directories.h
  
  Coxeter version 3.0  Copyright (C) 2002 Fokko du Cloux
  See file main.cpp for full copyright notice
*/

#ifndef DIRECTORIES_H  /* guard against multiple inclusions */
#define DIRECTORIES_H

/*
  This file tells where the directories can be found which contain some
  auxiliary files used by the program. The following directories are defined :

    - COXMATRIX_DIR : contains the files for predefined Coxeter matrices;
      these are the files that are loaded through the "X" group type.

    - HEADER_DIR : contains headers for the output to files done by some
      of the commands.

    - MESSAGE_DIR : contains the text of various error and warning messages.
      This is used mostly by the help facility, and also in some of the
      error handling.
*/

namespace directories {
  static  char const *COXMATRIX_DIR = "/home/gunnells/coxeter_3.0_beta3/coxeter_matrices";
  static char const *HEADER_DIR = "/home/gunnells/coxeter_3.0_beta3/headers";
  static char const *MESSAGE_DIR = "/home/gunnells/coxeter_3.0_beta3/messages";
};

#endif

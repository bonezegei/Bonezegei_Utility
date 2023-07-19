/*
  This Library is written for ILI9341 LCD
  Author: Bonezegei (Jofel Batutay)
  Date: July 2023 
*/
#ifndef _FONT_H_
#define _FONT_H_
#include "fonts/Poppins8.h"
#include "fonts/Poppins10.h"
#include "fonts/Poppins12.h"
#include "fonts/Poppins14.h"
#include "fonts/Poppins16.h"

#include "fonts/Arial8.h"
#include "fonts/Arial10.h"
#include "fonts/Arial12.h"
#include "fonts/Arial14.h"

typedef enum {
  FONT_POPPINS_8 = 0,
  FONT_POPPINS_10,
  FONT_POPPINS_12,
  FONT_POPPINS_14,
  FONT_POPPINS_16,
  FONT_ARIAL_8,
  FONT_ARIAL_10,
  FONT_ARIAL_12,
  FONT_ARIAL_14,
} FONT_TYPE;


class FONT {
public:
  FONT() {}
  char *fnt;
  int descriptor[95][3];
};




#endif
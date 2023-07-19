/*
  This Library is written for ILI9341 LCD
  Author: Bonezegei (Jofel Batutay)
  Date: July 2023 
*/

#ifndef _BITMAP_H_
#define _BITMAP_H_

//Simple Point Class For UI
class Bitmap {
public:

  Bitmap(int numXBytes, int height, char* bitmap) {
	xbytes = numXBytes;
	yheight = height;
	data= bitmap;
  }

  int xbytes;
  int yheight;
  char *data;
  
};


#endif
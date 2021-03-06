/*
Final Datateknik Project - Minesweeper
Project written by Tom?s Belmar da Costa
File written in February 2021
Last modified March 2021
*/

// White Black text
uint8_t openingPicture[128 * 4] = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x7f, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x07, 0x8f, 0x1f, 0x3f,
	0x3f, 0x1f, 0x8f, 0x07, 0x0f, 0xff, 0x0f, 0x07, 0xff, 0x0f, 0x07, 0x8f, 0x1f, 0x3f, 0x7f, 0x07,
	0x0f, 0xff, 0x0f, 0x07, 0x47, 0x67, 0xe7, 0xef, 0xff, 0x0f, 0x07, 0x47, 0x67, 0x67, 0xef, 0xff,
	0x0f, 0x07, 0xff, 0xff, 0x7f, 0x7f, 0xff, 0xff, 0x07, 0x0f, 0xff, 0x0f, 0x07, 0x47, 0x67, 0xe7,
	0xef, 0xff, 0x0f, 0x07, 0x47, 0x67, 0xe7, 0xef, 0xff, 0x0f, 0x07, 0x67, 0x67, 0x07, 0x0f, 0xff,
	0x0f, 0x07, 0x47, 0x67, 0xe7, 0xef, 0xff, 0x0f, 0x07, 0xe7, 0x67, 0x07, 0x0f, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0x1f, 0x1f, 0x07, 0x07, 0x01, 0x00, 0x06, 0x07, 0x1f, 0x1f, 0xfc, 0xc1,
	0x9f, 0xbf, 0x3f, 0x7f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0xe0, 0xff, 0xff, 0xfe,
	0xfe, 0xff, 0xff, 0xe0, 0xf0, 0xff, 0xe0, 0xf0, 0xff, 0xf0, 0xe0, 0xff, 0xff, 0xfe, 0xfc, 0xe0,
	0xf0, 0xff, 0xf0, 0xe0, 0xe2, 0xe6, 0xe7, 0xf7, 0xff, 0xf7, 0xe6, 0xe6, 0xe2, 0xe0, 0xf0, 0xff,
	0xf8, 0xf0, 0xe3, 0xe7, 0xf0, 0xf0, 0xe7, 0xe3, 0xf0, 0xf8, 0xff, 0xf0, 0xe0, 0xe2, 0xe6, 0xe7,
	0xf7, 0xff, 0xf0, 0xe0, 0xe2, 0xe6, 0xe7, 0xf7, 0xff, 0xf0, 0xe0, 0xfe, 0xfe, 0xfe, 0xff, 0xff,
	0xf0, 0xe0, 0xe2, 0xe6, 0xe7, 0xf7, 0xff, 0xf0, 0xe0, 0xf8, 0xf0, 0xe2, 0xe7, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xf8, 0xf8, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xf8, 0xf8, 0xff, 0xff,
	0xff, 0x7f, 0x3f, 0x9f, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0xf3, 0xf7, 0xe7, 0xef, 0xef, 0xef, 0xef, 0xef, 0xef,
	0xef, 0xe7, 0xf7, 0xf7, 0xf7, 0xf7, 0xf3, 0xfb, 0xfb, 0xf9, 0xfd, 0xfd, 0xfc, 0xfe, 0xfe, 0xfe,
	0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfe, 0xfd, 0xfd, 0xf9, 0xfb, 0xf3, 0xf7, 0xf7, 0xef, 0xef, 0xef,
	0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf, 0xdf,
	0xdf, 0xdf, 0xdf, 0xef, 0xef, 0xef, 0xf7, 0xf7, 0xf7, 0xf7, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfd,
	0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfd, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb,
	0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xfb, 0xf9, 0xfd, 0xfc,
	0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

uint8_t winningPicture[128 * 4] = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0x3f, 0x1f, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x3f, 0xff, 0x3f, 0x1f, 0x1f, 0x9f, 0x9f,
	0x1f, 0x1f, 0x3f, 0xff, 0x3f, 0x1f, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x3f, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x3f,
	0xff, 0x3f, 0x1f, 0xff, 0x3f, 0x1f, 0x3f, 0x7f, 0xff, 0xff, 0x1f, 0x3f, 0xff, 0x3f, 0x1f, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xfe, 0xfc, 0xf8, 0xf9, 0x81, 0xc0, 0xfc, 0xfe, 0xff, 0xc0, 0x80, 0x8f, 0x9f, 0x9f,
	0x8f, 0x80, 0xc0, 0xff, 0xc0, 0x80, 0x8f, 0x9f, 0x9f, 0x8f, 0x80, 0xc0, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0xc0, 0x8f, 0x9f, 0xc1, 0xc1, 0x9f, 0x8f, 0xc0, 0xe0,
	0xff, 0x80, 0xc0, 0xff, 0xc0, 0x80, 0xfe, 0xfc, 0xf8, 0xf1, 0x80, 0xc0, 0xff, 0x90, 0xb8, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0xf7, 0xc7, 0xf7, 0xf9,
	0xff, 0xe3, 0xdd, 0xdd, 0xe3, 0xff, 0xe1, 0xdf, 0xdf, 0xe1, 0xff, 0xc1, 0xf5, 0xe5, 0xdb, 0xff,
	0xff, 0xff, 0xfd, 0xfd, 0xc1, 0xfd, 0xfd, 0xff, 0xdd, 0xc1, 0xdd, 0xff, 0xc1, 0xfb, 0xf7, 0xfb,
	0xc1, 0xff, 0xc1, 0xd5, 0xd5, 0xdd, 0xff, 0xeb, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

uint8_t losingPicture[128 * 4] = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x8f,
	0x07, 0x3f, 0x7f, 0x7f, 0x3f, 0x07, 0x8f, 0xff, 0x0f, 0x07, 0xc7, 0xe7, 0xe7, 0xc7, 0x07, 0x0f,
	0xff, 0x0f, 0x07, 0xff, 0xff, 0xff, 0xff, 0x07, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0x0f, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x07, 0xc7, 0xe7, 0xe7, 0xc7,
	0x07, 0x0f, 0xff, 0x0f, 0x07, 0x47, 0x67, 0x67, 0xef, 0xff, 0x0f, 0x07, 0x47, 0x67, 0xe7, 0xef,
	0xff, 0x0f, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xfe, 0xfe, 0xe0, 0xf0, 0xff, 0xff, 0xff, 0xf0, 0xe0, 0xe3, 0xe7, 0xe7, 0xe3, 0xe0, 0xf0,
	0xff, 0xf0, 0xe0, 0xe3, 0xe7, 0xe7, 0xe3, 0xe0, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xf0, 0xe0, 0xe3, 0xe7, 0xe7, 0xf7, 0xff, 0xf0, 0xe0, 0xe3, 0xe7, 0xe7, 0xe3,
	0xe0, 0xf0, 0xff, 0xf7, 0xe6, 0xe6, 0xe2, 0xe0, 0xf0, 0xff, 0xf0, 0xe0, 0xe2, 0xe6, 0xe7, 0xf7,
	0xff, 0xe4, 0xee, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
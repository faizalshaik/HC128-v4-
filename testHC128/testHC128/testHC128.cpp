// testHC128.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "hc128.h"
#include <Windows.h>

#pragma comment(lib ,"Ws2_32.lib")

unsigned char data_0_0[176] = {
	0x78, 0x70, 0x5E, 0xE8, 0xA1, 0xE3, 0x77, 0xA7, 0x3A, 0x92, 0x06, 0x3D, 0xC1, 0x09, 0x55, 0x49,
	0xB0, 0xF9, 0xE9, 0x28, 0x79, 0xAD, 0x86, 0xD0, 0x5F, 0x37, 0xDA, 0x7F, 0x43, 0x08, 0x3C, 0x10,
	0x9F, 0xEA, 0x52, 0xF6, 0xE8, 0x7D, 0x31, 0xD1, 0xB7, 0xD0, 0x1B, 0x3D, 0xDA, 0xE2, 0x16, 0xE7,
	0x4A, 0x64, 0x41, 0xD6, 0x10, 0xDA, 0x1D, 0x14, 0x15, 0x15, 0x21, 0x50, 0xAF, 0x27, 0x6B, 0x52,
	0x3B, 0xD1, 0x2C, 0xF0, 0xF7, 0xA2, 0x2E, 0xE1, 0x13, 0x94, 0xFA, 0x4F, 0xC0, 0x9A, 0xA6, 0x4B,
	0x10, 0xE5, 0x3C, 0xCA, 0x4D, 0x64, 0x0C, 0x4D, 0x14, 0xC5, 0x59, 0x03, 0x30, 0xC6, 0x82, 0xCF,
	0x44, 0x34, 0x86, 0x14, 0xDF, 0x4E, 0x16, 0x95, 0x36, 0xFA, 0x7C, 0x02, 0x81, 0xD0, 0xBA, 0x90,
	0x8A, 0x17, 0x6B, 0xFD, 0x9E, 0xA1, 0xFC, 0xEF, 0x39, 0x61, 0x46, 0x93, 0x98, 0x4D, 0x6E, 0x88,
	0x80, 0xA2, 0x94, 0x31, 0xD8, 0xC0, 0x4C, 0x49, 0x40, 0x14, 0x39, 0x8C, 0xAF, 0x9D, 0xF0, 0x8A,
	0x7B, 0x2B, 0xF4, 0xC9, 0x4F, 0x4F, 0xFD, 0x0C, 0xD4, 0x19, 0xCF, 0x74, 0x52, 0x02, 0xC2, 0x12,
	0x3F, 0x82, 0xD3, 0x0B, 0x85, 0xB7, 0xA2, 0xC7, 0xC6, 0x8D, 0xD8, 0xC8, 0x56, 0x41, 0x10, 0xD7
};

unsigned char data_0_1[255] = {
	0x37, 0x70, 0x5E, 0xE8, 0xA1, 0x5F, 0x2D, 0xBD, 0x70, 0x47, 0xEE, 0x63, 0xA5, 0x58, 0x41, 0xE7,
	0x13, 0x26, 0xA3, 0x75, 0xF4, 0xC2, 0x8E, 0xD0, 0x52, 0x38, 0xDE, 0x4C, 0x3F, 0x25, 0x14, 0x00,
	0xAB, 0xF6, 0x51, 0x86, 0xD8, 0x7F, 0x14, 0xF1, 0xA6, 0x9C, 0x63, 0x4C, 0xCB, 0xDB, 0x32, 0xD9,
	0x5D, 0x4B, 0x5A, 0xE5, 0x08, 0xD2, 0x13, 0x2F, 0x24, 0x2E, 0x56, 0x59, 0x8A, 0x36, 0x52, 0x01,
	0x00, 0xED, 0x3F, 0xDD, 0xC4, 0xB2, 0x55, 0x95, 0x11, 0xEC, 0xEC, 0x4D, 0xC5, 0xC3, 0xC1, 0x28,
	0x4A, 0x95, 0x7C, 0x9E, 0x05, 0x3F, 0x44, 0x39, 0x7B, 0x87, 0x36, 0x71, 0x53, 0x82, 0xBF, 0xE1,
	0x59, 0x0F, 0x95, 0x63, 0xEE, 0x37, 0x4D, 0x86, 0x74, 0xDD, 0x52, 0x3E, 0xC4, 0x9C, 0xFB, 0x3E,
	0x59, 0x89, 0xE8, 0xB9, 0xB6, 0x6D, 0x79, 0xB4, 0x60, 0xB7, 0x0E, 0xE2, 0xAD, 0x3C, 0x6A, 0xA8,
	0xF1, 0xE4, 0x90, 0x3E, 0xA0, 0xB1, 0x48, 0x38, 0x4B, 0x23, 0x42, 0xEC, 0x8E, 0xEE, 0xD9, 0xDB,
	0x5F, 0x29, 0xD6, 0xBD, 0x2B, 0x68, 0xD1, 0x0D, 0xA0, 0x4C, 0xBA, 0x52, 0x2D, 0x77, 0xA6, 0x6A,
	0x4B, 0xEA, 0xF1, 0x63, 0x82, 0xC5, 0xDA, 0x94, 0xE2, 0xC9, 0xAE, 0xE8, 0x28, 0x34, 0x27, 0xB0,
	0xCD, 0xA3, 0xB2, 0xAB, 0x48, 0xAF, 0x88, 0x64, 0x60, 0x89, 0xD8, 0xDB, 0xE5, 0xF5, 0x62, 0x0B,
	0x07, 0xCC, 0xDF, 0x79, 0x61, 0x82, 0x16, 0xA9, 0x06, 0x5F, 0x13, 0xFE, 0xD6, 0x50, 0xE5, 0x67,
	0x45, 0xAA, 0x85, 0x6D, 0x1E, 0x69, 0xF8, 0x91, 0xC2, 0xBC, 0xC8, 0xC2, 0x28, 0xAC, 0xA4, 0x5C,
	0xC0, 0x13, 0xF5, 0xE0, 0x22, 0x7F, 0x24, 0x46, 0xD8, 0x48, 0xF3, 0x95, 0xB1, 0xCC, 0x19, 0x75,
	0xC1, 0xAF, 0xEC, 0x89, 0x02, 0xBC, 0x84, 0x52, 0x70, 0x31, 0x7B, 0xF3, 0x9E, 0x6C, 0x3D
};


unsigned char data_1_0[238] = {
	0x26, 0x70, 0x5E, 0xE8, 0xA1, 0x67, 0xF3, 0xA5, 0x70, 0x47, 0xEE, 0x63, 0xA5, 0x58, 0x41, 0xE7,
	0x13, 0x26, 0xA3, 0x75, 0xF4, 0xC2, 0x8E, 0xD0, 0x52, 0x38, 0xDE, 0x4C, 0x3F, 0x25, 0x14, 0x00,
	0xAB, 0xF6, 0x51, 0x86, 0xD8, 0x7F, 0x14, 0xF1, 0xA6, 0x9C, 0x63, 0x4C, 0xCB, 0xDB, 0x32, 0xD9,
	0x5D, 0x4B, 0x5A, 0xE5, 0x08, 0xD2, 0x13, 0x2F, 0x24, 0x2E, 0x56, 0x59, 0x8A, 0x36, 0x52, 0x01,
	0x00, 0xED, 0x3F, 0xDD, 0xC4, 0xB2, 0x55, 0x95, 0x11, 0xEC, 0xEC, 0x4D, 0xC5, 0xC3, 0xC1, 0x28,
	0x4A, 0x95, 0x7C, 0x9E, 0x05, 0x3F, 0x44, 0x39, 0x7B, 0x87, 0x36, 0x71, 0x53, 0x82, 0xBF, 0xE1,
	0x59, 0x0F, 0x95, 0x63, 0xEE, 0x37, 0x4D, 0x86, 0x74, 0xDD, 0x52, 0x3E, 0xC4, 0x9C, 0xFB, 0x3E,
	0x59, 0x89, 0xE8, 0xB9, 0xB6, 0x6D, 0x79, 0xB4, 0x60, 0xB7, 0x0E, 0xE2, 0xAD, 0x3C, 0x6A, 0xA8,
	0xF1, 0xE4, 0x90, 0x3E, 0xA0, 0xB1, 0x48, 0x38, 0x4B, 0x23, 0x42, 0xEC, 0x8E, 0xEE, 0xD9, 0xDB,
	0x5F, 0x29, 0xD6, 0xBD, 0x2B, 0x68, 0xD1, 0x0D, 0xA0, 0x4C, 0xBA, 0x52, 0x2D, 0x77, 0xA6, 0x6A,
	0x4B, 0xEA, 0xF1, 0x63, 0x82, 0xC5, 0xDA, 0x94, 0xE2, 0xC9, 0xAE, 0xE8, 0x28, 0x34, 0x27, 0xB0,
	0xCD, 0xA3, 0xB2, 0xAB, 0x48, 0xAF, 0x88, 0x64, 0x60, 0x89, 0xD8, 0xDB, 0xE5, 0xF5, 0x62, 0x0B,
	0x07, 0xCC, 0xDF, 0x79, 0x61, 0x82, 0x16, 0xA9, 0x06, 0x5F, 0x13, 0xFE, 0xD6, 0x50, 0xE5, 0x67,
	0x45, 0xAA, 0x85, 0x6D, 0x1E, 0x69, 0xF8, 0x91, 0xC2, 0xBC, 0xC8, 0xC2, 0x28, 0xAC, 0xA4, 0x5C,
	0xC0, 0x13, 0xF5, 0xE0, 0x22, 0x7F, 0x24, 0x46, 0xD8, 0x48, 0xF3, 0x95, 0xB1, 0xCC
};


unsigned char data_1_1[263] = {
	0xCF, 0x71, 0x5E, 0xE8, 0xA1, 0xAB, 0xD6, 0xBD, 0x4C, 0x47, 0x83, 0xBA, 0x30, 0xD1, 0xF0, 0x11,
	0xEF, 0x83, 0xE7, 0x36, 0x6E, 0xAF, 0xAA, 0xE0, 0x42, 0x10, 0xD6, 0x6D, 0x33, 0x52, 0x0F, 0x15,
	0xAC, 0xDB, 0x5E, 0xB6, 0xC8, 0x44, 0x1C, 0xD2, 0xAA, 0xEB, 0x6F, 0x49, 0xCF, 0xED, 0x3D, 0xEA,
	0x5D, 0x70, 0x56, 0xC6, 0x04, 0xEB, 0x1F, 0x2A, 0x30, 0x18, 0x5A, 0x5C, 0x8A, 0x47, 0x5E, 0x22,
	0x2A, 0xD4, 0x30, 0xD8, 0xD0, 0x8B, 0x59, 0x90, 0x19, 0x9D, 0xE0, 0x48, 0xEF, 0xF1, 0xCE, 0x2A,
	0x42, 0xAC, 0x6B, 0x9B, 0x0E, 0x0E, 0x48, 0x3F, 0x0A, 0xB5, 0x2D, 0x63, 0x5B, 0xAA, 0xA8, 0xE4,
	0x74, 0x3E, 0x9D, 0x43, 0x9F, 0x0C, 0x56, 0x94, 0x0D, 0xF5, 0x5E, 0x2B, 0xEA, 0xE8, 0xF3, 0x1A,
	0x20, 0xB2, 0xE4, 0x9D, 0xCF, 0x5B, 0x75, 0xA1, 0x68, 0xC3, 0x02, 0xE0, 0xD4, 0x1A, 0x66, 0x8B,
	0xF5, 0xD2, 0x9E, 0x1D, 0xA8, 0xC1, 0x44, 0x3D, 0x43, 0x05, 0x4C, 0xCF, 0x8A, 0xD6, 0xD7, 0xF8,
	0x57, 0x59, 0xDE, 0xB8, 0x20, 0x78, 0xDF, 0x2F, 0xD1, 0x75, 0xB2, 0x71, 0x21, 0x45, 0xAE, 0x68,
	0x40, 0xFA, 0xE3, 0x77, 0xF0, 0xEF, 0xD2, 0xB0, 0xEA, 0xFB, 0xA0, 0xCC, 0x20, 0x41, 0x35, 0xA5,
	0xDE, 0x89, 0xBD, 0xB9, 0x40, 0xDB, 0x86, 0x47, 0x4A, 0xB1, 0xD6, 0xDE, 0xCF, 0x86, 0x6E, 0x0E,
	0x2D, 0xF7, 0xD3, 0x4A, 0x75, 0xF6, 0x19, 0x8A, 0x2C, 0x67, 0x1C, 0xEB, 0xCE, 0x6B, 0xEB, 0x72,
	0x55, 0xD8, 0x89, 0x5E, 0x38, 0x50, 0xF6, 0x84, 0xE4, 0xCC, 0xC7, 0xF1, 0x30, 0xDE, 0xAA, 0x55,
	0xB1, 0x2A, 0xAE, 0x87, 0x7B, 0x17, 0x7B, 0x26, 0x72, 0xE4, 0x0E, 0x31, 0x39, 0x2D, 0x32, 0x6D,
	0xE9, 0x82, 0xE6, 0x8A, 0x16, 0xD6, 0x00, 0xA2, 0xF4, 0xED, 0xFB, 0x63, 0xAE, 0x4C, 0xD3, 0xF7,
	0xE4, 0xE6, 0x87, 0x5B, 0xB5, 0x9D, 0xAC
};


unsigned char data_2_0[240] = {
	0x38, 0x70, 0x5E, 0xE8, 0xA1, 0xD6, 0xFC, 0xA5, 0x70, 0x47, 0xEE, 0x63, 0xA5, 0x58, 0x41, 0xE7,
	0x13, 0x26, 0xA3, 0x75, 0xF4, 0xC2, 0x8E, 0xD0, 0x52, 0x38, 0xDE, 0x4C, 0x3F, 0x25, 0x14, 0x00,
	0xAB, 0xF6, 0x51, 0x86, 0xD8, 0x7F, 0x14, 0xF1, 0xA6, 0x9C, 0x63, 0x4C, 0xCB, 0xDB, 0x32, 0xD9,
	0x5D, 0x4B, 0x5A, 0xE5, 0x08, 0xD2, 0x13, 0x2F, 0x24, 0x2E, 0x56, 0x59, 0x8A, 0x36, 0x52, 0x01,
	0x00, 0xED, 0x3F, 0xDD, 0xC4, 0xB2, 0x55, 0x95, 0x11, 0xEC, 0xEC, 0x4D, 0xC5, 0xC3, 0xC1, 0x28,
	0x4A, 0x95, 0x7C, 0x9E, 0x05, 0x3F, 0x44, 0x39, 0x7B, 0x87, 0x36, 0x71, 0x53, 0x82, 0xBF, 0xE1,
	0x59, 0x0F, 0x95, 0x63, 0xEE, 0x37, 0x4D, 0x86, 0x74, 0xDD, 0x52, 0x3E, 0xC4, 0x9C, 0xFB, 0x3E,
	0x59, 0x89, 0xE8, 0xB9, 0xB6, 0x6D, 0x79, 0xB4, 0x60, 0xB7, 0x0E, 0xE2, 0xAD, 0x3C, 0x6A, 0xA8,
	0xF1, 0xE4, 0x90, 0x3E, 0xA0, 0xB1, 0x48, 0x38, 0x4B, 0x23, 0x42, 0xEC, 0x8E, 0xEE, 0xD9, 0xDB,
	0x5F, 0x29, 0xD6, 0xBD, 0x2B, 0x68, 0xD1, 0x0D, 0xA0, 0x4D, 0xBA, 0x52, 0x29, 0x77, 0xA6, 0x6A,
	0x4B, 0xEA, 0xF1, 0x63, 0x82, 0xC5, 0xDA, 0x94, 0xE2, 0xC9, 0xAE, 0xE8, 0x28, 0x34, 0x27, 0xB0,
	0xCD, 0xA3, 0xB2, 0xAB, 0x48, 0xAF, 0x88, 0x64, 0x60, 0xC4, 0xD8, 0xDB, 0xDF, 0xF5, 0x61, 0x1B,
	0x07, 0x83, 0xDF, 0x79, 0x5F, 0x82, 0x17, 0x8F, 0x06, 0x14, 0x13, 0xFE, 0xE4, 0x50, 0xE7, 0x41,
	0x45, 0xAC, 0x85, 0x6D, 0x12, 0x69, 0xF9, 0x91, 0xC2, 0xF7, 0xC8, 0xC2, 0x20, 0xAC, 0xA6, 0x6A,
	0xC0, 0x13, 0xF5, 0xE0, 0x14, 0x7F, 0x27, 0x56, 0xD8, 0x4A, 0xF3, 0x95, 0xB1, 0xCC, 0x13, 0x5C
};

unsigned char data_2_1[119] = {
	0xBF, 0x70, 0x5E, 0xE8, 0xA1, 0x3B, 0x6E, 0xB5, 0x98, 0x74, 0xD6, 0xE3, 0x45, 0x89, 0x9F, 0x60,
	0x97, 0xEC, 0x8C, 0x5F, 0x18, 0xE3, 0x5F, 0xCA, 0x2B, 0xE3, 0x5E, 0x8F, 0xF5, 0xEC, 0xCE, 0xA1,
	0x49, 0xD9, 0x52, 0x92, 0x83, 0x38, 0xB6, 0x0B, 0x5B, 0x46, 0x9A, 0xA8, 0x9C, 0x97, 0x74, 0x87,
	0x0E, 0x36, 0xF0, 0x3C, 0xF9, 0x7F, 0xE6, 0xCE, 0x54, 0x41, 0x15, 0x0F, 0xC6, 0x7F, 0x35, 0x74,
	0x46, 0x7E, 0xE3, 0x25, 0x7D, 0x4B, 0xB8, 0xE6, 0x48, 0xDD, 0xBF, 0x04, 0xA6, 0xA9, 0x9D, 0x6E,
	0xE0, 0x70, 0x81, 0x36, 0xF4, 0xDE, 0x3A, 0x60, 0x3B, 0xE6, 0x7A, 0x3A, 0x36, 0xD1, 0xEE, 0x4B,
	0x86, 0xC3, 0x38, 0x9C, 0x7E, 0x42, 0x0F, 0xD6, 0x27, 0xB9, 0x1B, 0x57, 0xB9, 0xDA, 0x59, 0xC4,
	0xA4, 0x1F, 0x11, 0x5A, 0xBB, 0x34, 0x35
};


unsigned char data_3_0_s[26] = {
	0xD2, 0x70, 0x5E, 0xE8, 0xA1, 0x9B, 0x76, 0xA7, 0x26, 0x87, 0x63, 0x4A, 0xF9, 0x38, 0x41, 0xF7,
	0xE1, 0xDA, 0x13, 0xB3, 0xCC, 0x33, 0x5B, 0x16, 0xF7, 0x4F
};

unsigned char data_3_0_r[16] = {
	0xD8, 0x70, 0x5E, 0xE8, 0xA1, 0x9C, 0xE6, 0xA5, 0x93, 0x4E, 0x6C, 0x29, 0xB5, 0x20, 0x3E, 0x79
};

unsigned char data_3_1_s[7] = {
	0x98, 0x0a, 0x72, 0x64, 0x4e, 0xf5, 0x00
};

unsigned char data_3_1_r[190] = {
	0x1C, 0xC2, 0xBD, 0x67, 0x2C, 0x4B, 0x14, 0xB7, 0xEC, 0xAE, 0x60, 0xF5, 0x8D, 0x9B, 0xB1, 0xAE,
	0x16, 0x9B, 0x08, 0xC4, 0xAB, 0x43, 0x57, 0x90, 0x8A, 0xC5, 0x4F, 0x30, 0xBE, 0xA2, 0x6C, 0x42,
	0xA2, 0xB5, 0x9C, 0x4D, 0xC9, 0x43, 0xD3, 0x0A, 0x7D, 0x5B, 0x37, 0x1C, 0xFB, 0x13, 0x27, 0x67,
	0x03, 0x9A, 0x73, 0xE1, 0x20, 0x7F, 0x5E, 0xC1, 0x50, 0xF6, 0xCD, 0x4C, 0xB3, 0xD5, 0x34, 0xDF,
	0x48, 0xA0, 0x3D, 0x5A, 0xEB, 0x3D, 0x59, 0xAB, 0xE9, 0x39, 0x84, 0x37, 0x78, 0xFC, 0xE9, 0xA1,
	0x1B, 0x7F, 0xD4, 0x08, 0xC0, 0xF4, 0x42, 0x45, 0xA6, 0xF5, 0x4B, 0xDF, 0x2A, 0x9D, 0xFB, 0x1B,
	0x7C, 0x66, 0xC1, 0x90, 0xF7, 0x52, 0x4A, 0x63, 0x78, 0xDF, 0x3D, 0x20, 0x14, 0x0A, 0xA7, 0xF6,
	0x87, 0xC6, 0xA6, 0x70, 0xAD, 0x29, 0x8F, 0xEF, 0x21, 0x85, 0x6E, 0x1D, 0x69, 0x9E, 0x92, 0xC1,
	0xD9, 0x88, 0x27, 0xFB, 0x60, 0x29, 0x98, 0x2B, 0xA0, 0x3D, 0xED, 0x57, 0x4C, 0x46, 0x33, 0xC4,
	0xC5, 0x48, 0xB5, 0x0E, 0x00, 0x45, 0x16, 0x74, 0x2B, 0x3A, 0x1F, 0x0B, 0x22, 0x47, 0x60, 0xD4,
	0x30, 0x81, 0x08, 0x36, 0x4C, 0xE5, 0x56, 0x88, 0x01, 0x29, 0x33, 0x97, 0x39, 0xE7, 0xED, 0x55,
	0x70, 0xCA, 0x46, 0x07, 0x33, 0xCB, 0xFB, 0x2A, 0x83, 0xBE, 0xDD, 0x94, 0xC7, 0x38
};

unsigned char data_3_2_r[16] = {
	0xba,0x36,0x04,0x99,0xc4,0x26,0x92,0x22,0xb0,0xc8,0x7b,0x69,0x4d,0x1e,0xfe,0xc3
};

unsigned char data_3_2_s[7] = {
	0x9d, 0x10, 0xc1, 0x89, 0x3e, 0xb0, 0x88
};
unsigned char data_3_3_s[17] = {
	0xf6,0xaa,0x22,0x08,0x8e,0x56,0x5e,0xa6,0xf0,0x8f,0x9f,0x26,0xa9,0x1f,0x8e,0xe3,0x01
};

unsigned char data_3_3_r[294] = {
	0xCD, 0x1C, 0x81, 0x6B, 0xB4, 0x25, 0xAF, 0x34, 0xF5, 0x23, 0x93, 0x79, 0xB8, 0x20, 0x80, 0x85,
	0xEF, 0xCB, 0x6F, 0x25, 0x08, 0x2C, 0xC0, 0x36, 0x0B, 0xDF, 0xCD, 0xF8, 0xF0, 0x60, 0x9C, 0x4B,
	0x12, 0x49, 0x60, 0x61, 0x54, 0xE5, 0x64, 0x11, 0xF2, 0x02, 0x47, 0xAC, 0xF6, 0x71, 0x97, 0xB0,
	0x0C, 0xE1, 0xF0, 0xDB, 0x57, 0x42, 0x6A, 0xC3, 0xFB, 0xF8, 0x22, 0x10, 0x62, 0xF1, 0xAE, 0x7B,
	0xF1, 0xE7, 0x2C, 0x2B, 0x5A, 0x36, 0xFD, 0x71, 0x97, 0x67, 0xB6, 0x1B, 0x88, 0x56, 0xC7, 0x93,
	0xDB, 0x60, 0x07, 0x8E, 0x4C, 0x3C, 0xA0, 0x9D, 0x93, 0x91, 0x5E, 0xCF, 0xEE, 0xAF, 0x60, 0xCB,
	0x6F, 0x10, 0xD0, 0x2B, 0x74, 0xBA, 0xBA, 0x87, 0x3F, 0x22, 0x3E, 0xF0, 0x5D, 0x37, 0x99, 0x08,
	0x38, 0xF1, 0x8B, 0xB6, 0x6C, 0x03, 0x21, 0x5A, 0x57, 0x8E, 0xFA, 0x70, 0x13, 0x97, 0xB3, 0x4D,
	0xD8, 0x74, 0xD8, 0xD9, 0x65, 0xA0, 0x5C, 0xE3, 0x10, 0x70, 0x11, 0xD8, 0x78, 0x03, 0x8F, 0x2A,
	0x69, 0x58, 0xC6, 0xDD, 0x2A, 0xB8, 0x3C, 0x52, 0x37, 0x09, 0xE9, 0xC0, 0xAD, 0x4B, 0x6B, 0x34,
	0x70, 0x67, 0xAB, 0x11, 0x2A, 0x1C, 0x44, 0xB1, 0xEB, 0x83, 0x94, 0x11, 0x40, 0xDB, 0x81, 0xF2,
	0x71, 0x58, 0xA6, 0x9A, 0xE3, 0x00, 0x35, 0xAF, 0x80, 0xA6, 0x43, 0x3C, 0x8C, 0xA9, 0x83, 0x4E,
	0x51, 0x85, 0xAF, 0xF7, 0x8D, 0xF3, 0x36, 0x80, 0x0E, 0xCB, 0x4F, 0x60, 0x57, 0x82, 0x80, 0xD2,
	0xA4, 0x07, 0x02, 0x4F, 0x5B, 0x03, 0x0D, 0x71, 0xB2, 0x22, 0x48, 0x8D, 0x61, 0x56, 0xE9, 0xBB,
	0xCB, 0x4B, 0x75, 0x1D, 0x45, 0x30, 0x70, 0x0A, 0xD7, 0x4C, 0x83, 0xA1, 0xD4, 0x36, 0x40, 0xA0,
	0xDC, 0xE7, 0xB4, 0x4B, 0x1A, 0x77, 0xB2, 0xAF, 0x84, 0x30, 0x80, 0x3B, 0x6F, 0xC1, 0xC5, 0xB6,
	0x57, 0xA3, 0x3F, 0xA9, 0xEC, 0x70, 0x64, 0xA4, 0x96, 0x91, 0xE5, 0xFB, 0x90, 0x8A, 0x98, 0xAC,
	0x2A, 0xEA, 0xE2, 0x93, 0x68, 0xDC, 0x4B, 0x8D, 0x43, 0xA1, 0x23, 0xAE, 0x02, 0x04, 0xCA, 0x78,
	0x14, 0x74, 0x4B, 0xFB, 0xA7, 0x01
};

void decrypt(uint8_t* data, int len, uint8_t* out)
{
	struct hc128_context ctx;
	uint8_t key[16] = { 0x42,0x5B,0x29,0xFD,0xB7,0x53,0xC5,5,0x83,0x77,0xE8,0xA,0x50,0x17,0x80,0x75 };
	uint8_t iv[16] = { 0xDE, 0xAD, 0x45, 0xC1, 0x2A, 0xC8, 0x93, 0xCE, 0xAA,0, 0xBF, 0xB6, 0x7B, 0x40, 0x19, 0xA7 };

	if (hc128_set_key_and_iv(&ctx, (uint8_t*)key, 16, (const uint8_t*)iv, 16)) {
		return;
	}
	hc128_crypt(&ctx, data, len, out);
}

void decrypt1(struct hc128_context* ctx, uint8_t* data, int len, uint8_t* out)
{
	hc128_crypt(ctx, data, len, out);
}

int main()
{
	struct hc128_context sndCtx;
	struct hc128_context rcvCtx;
	uint8_t key[16] = { 0x42,0x5B,0x29,0xFD,0xB7,0x53,0xC5,5,0x83,0x77,0xE8,0xA,0x50,0x17,0x80,0x75 };
	uint8_t iv[16] = { 0xDE, 0xAD, 0x45, 0xC1, 0x2A, 0xC8, 0x93, 0xCE, 0xAA,0, 0xBF, 0xB6, 0x7B, 0x40, 0x19, 0xA7 };

	if (hc128_set_key_and_iv(&sndCtx, (uint8_t*)key, 16, (const uint8_t*)iv, 16)) {
		return;
	}

	if (hc128_set_key_and_iv(&rcvCtx, (uint8_t*)key, 16, (const uint8_t*)iv, 16)) {
		return;
	}

	uint8_t out[1024];
	//decrypt(data_3_0_r, sizeof(data_3_0_r), out);
	//decrypt(data_3_1_r, sizeof(data_3_1_r), out);

	decrypt1(&rcvCtx, data_3_0_r, sizeof(data_3_0_r), out);
	decrypt1(&rcvCtx, data_3_1_r, sizeof(data_3_1_r), out);
	decrypt1(&rcvCtx, data_3_2_r, sizeof(data_3_2_r), out);
}


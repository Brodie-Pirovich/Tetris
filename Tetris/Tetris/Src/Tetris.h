#pragma once
#include <iostream>
#include <thread>
#include <vector>
#include <stdio.h>
#include <Windows.h>

//Variables
int nScreenWidth = 80;
int nScreenHeight = 30;
wstring tetromino[7];
int nFieldWidth = 12;
int nFieldHeight = 18;
unsigned char* pField = nullptr;

//Functions
void CreatePieces();
int Rotate(int px, int py, int r);
bool DoesPieceFit(int nTetromino, int nRotation, int nPosX, int nPosY);

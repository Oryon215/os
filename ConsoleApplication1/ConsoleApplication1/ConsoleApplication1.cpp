// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	char scancodes[][12] = { "ESC\0     ","1\0       ","2\0       ","3\0       ","4\0       ","5\0       ","6\0       ","7\0       ","8\0       ","9\0       ","0\0       ","-\0       ","=\0       ","bs\0      ","Tab\0     ","Q\0       ","W\0       ","E\0       ","R\0       ","T\0       ","Y\0       ","U\0       ","I\0       ","O\0       ","P\0       ","[\0       ","]\0       ","Enter\0   ","CTRL\0    ","A\0       ","S\0       ","D\0       ","F\0       ","G\0       ","H\0       ","J\0       ","K\0       ","L\0       ",";\0       ","'\0       ","`\0       ","LShift\0  ","\\0       ","Z\0       ","X\0       ","C\0       ","V\0       ","B\0       ","N\0       ","M\0       ",",\0       ",".\0       ","/\0       ","RShift\0  ","PrtSc\0   ","Alt\0     ","Space\0   ","Caps\0    ","F1\0      ","F2\0      ","F3\0      ","F4\0      ","F5\0      ","F6\0      ","F7\0      ","F8\0      ","F9\0      ","F10\0     ","Num\0     ","Scroll\0  ","Home (7)\0","Up (8)\0  ","PgUp (9)\0","-\0       ","Left (4)\0","Center (5)\0","Right (6)\0","+\0       ","End (1)\0 ","Down (2)\0","PgDn (3)\0","Ins\0     ","Del\0     ", };
	printf(scancodes[1]);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

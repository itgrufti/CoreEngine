#pragma once
#include <string>
using namespace std;
class CCoreDialog
{
public:
	CCoreDialog();
	static string promt(string windowTitle, string message);
	~CCoreDialog();
};


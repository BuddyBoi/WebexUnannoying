#include <iostream>
#include <Windows.h>
#include <WinUser.h>

//makes teacher's face tiny and her window not-topmost anymore
void makeTeacherTiny()
{
	HWND _HWND = FindWindow(NULL, L"CVUIWidgetPanel");
	SetWindowPos(_HWND, HWND_NOTOPMOST, 0, 0, 200, 100, 0);
}

//Remove blue bar at the top during a presentation
void hideTopOverlay()
{
	HWND _HWND = FindWindow(L"WbxDockParent", NULL);
	ShowWindow(_HWND, SW_HIDE);
}

//Remove blue bar at the top during a presentation
void unhideTopOverlay()
{
	HWND _HWND = FindWindow(L"WbxDockParent", NULL);
	ShowWindow(_HWND, SW_SHOW);
}

int main()
{
	hideTopOverlay();
	//unhideTopOverlay();
	makeTeacherTiny();
	return 0;
}
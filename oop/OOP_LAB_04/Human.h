#pragma once
#define _CRT_SECURE_NO_WARNINGS

class Human
{
	char name[15];
	char surname[20];
	char e_mail[50];
public:
	Human();
	Human(char*, char*, char*);
	Human(Human*);
	~Human();
	void SetName(char*);
	void SetSurname(char*);
	void SetEmail(char*);
	char* GetName();
	char* GetSurname();
	char* GetEmail();
};


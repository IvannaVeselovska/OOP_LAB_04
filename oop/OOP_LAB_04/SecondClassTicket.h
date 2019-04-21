#pragma once
#include "RailwayTicket.h"
class SecondClassTicket :
	public RailwayTicket
{
	int place;
	double prise;
public:
	SecondClassTicket();
	SecondClassTicket(Human,int,int,double);
	SecondClassTicket(SecondClassTicket *);
	~SecondClassTicket();
	void SetPlañe(int);
	void SetPrise(double);
	int GetPlañe();
	double GetPrise();
	char* GetInformation(char*);
	void SortBySurname(int, SecondClassTicket *);
};


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
	void SetPla�e(int);
	void SetPrise(double);
	int GetPla�e();
	double GetPrise();
	char* GetInformation(char*);
	void SortBySurname(int, SecondClassTicket *);
};


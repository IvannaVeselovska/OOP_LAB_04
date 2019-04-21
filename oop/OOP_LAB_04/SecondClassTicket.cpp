#include "SecondClassTicket.h"
#include <string.h>
#include <string>
#include <conio.h>

using namespace std;


SecondClassTicket::SecondClassTicket()
{
}

SecondClassTicket::SecondClassTicket(Human passenger, int carriage, int place, double prise)
{
	SetPassenger(&passenger);
	SetCarriage(carriage);
	SetPlañe(place);
	SetPrise(prise);
}

SecondClassTicket::SecondClassTicket(SecondClassTicket * sourse)
{
	SetPassenger(&sourse->GetPassenger());
	SetCarriage(sourse->GetCarriage());
	SetPlañe(sourse->GetPlañe());
	SetPrise(sourse->GetPrise());
}


SecondClassTicket::~SecondClassTicket()
{
}

void SecondClassTicket::SetPlañe(int place)
{
	if (prise > 0 && prise < 53)
	{
		this->place = place;
	}
}

void SecondClassTicket::SetPrise(double prise)
{
	this->prise = prise;
}

int SecondClassTicket::GetPlañe()
{
	return this->place;
}

double SecondClassTicket::GetPrise()
{
	return this->prise;
}

char * SecondClassTicket::GetInformation(char * info)
{
	if (this->place < 37)
	{
		 char a[] = "average ";
		strcpy(info, a);
	}
	else
	{
		char a[] = "lateral ";
		strcpy(info, a);
	}
	if (this->place % 2)
	{
		char a[] = "lower place";
		strcat(info, a);
	}
	else
	{
		char a[] = "upper place";
		strcat(info, a);
	}
	return info;
}

void SecondClassTicket::SortBySurname(int n, SecondClassTicket * spis)
{
	int k, i;
	for (int j = 0; j < n-1; j++)
	{
		char* str = spis[j].GetPassenger().GetSurname();
		char* str2 = spis[j+1].GetPassenger().GetSurname();
		for (int k = 0; k < n; k++)
		{
			for (i = 0; i < strlen(str); i++)
			{
				if (str[i] > str2[i])
				{
					SecondClassTicket a(spis[j]);
					spis[j] = spis[j + 1];
					spis[j + 1] = a;
					goto label;
				}
			}
			label:
		}
		
	}
}

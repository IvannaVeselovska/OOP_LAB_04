#include "Human.h"
#include <string.h>


Human::Human()
{
}


Human::Human(char *name, char * surname, char * e_mail)
{
	SetName(name);
	SetSurname(surname);
	SetEmail(e_mail);
}

Human::Human( Human * h)
{
	SetName(h ->GetName());
	SetSurname(h->GetSurname());
	SetEmail(h->GetEmail());
}


Human::~Human()
{
}

void Human::SetName(char * nam)
{
	strcpy(this->name, nam);
}

void Human::SetSurname(char *sur)
{
	strcpy(this->surname, sur);
}


void Human::SetEmail(char *email)
{
	strcpy(this->e_mail, email);
}

char * Human::GetName()
{
	return name;
}

char * Human::GetSurname()
{
	return surname;
}

char * Human::GetEmail()
{
	return e_mail;
}

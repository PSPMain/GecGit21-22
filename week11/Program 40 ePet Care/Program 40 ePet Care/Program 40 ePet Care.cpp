#include <iostream>
#include "pet.h"
#include "cat.h"
#include "dog.h"
#include "hamster.h"

using namespace std;

int main()
{
	dog* DOG = new dog();
	pet* PET = new pet();
	cout << "a new pet has arrived" << endl;
	DOG->GetMood();
	PET->GetMood();
}

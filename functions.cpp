#include <string>
#include <fstream>
#include <iostream>

using namespace std;
// Loading contacts 
void loadContacts(string filename)
{
ifstream inputFile(filename);
// input file and gets the file
if(inputFile)
{
  int num;
  string name;
  inputFile >> num;
  inputFile.ignore();
  for(int x = 0; x < num; x++)
  {
  getline(inputFile, name);
  cout << name;
  cout << endl;
  }
 }
}

// Recursive factorial function 
int factorial(int num)
{
  if(num <= 1)
  {
    return 1;
  }
    return num * factorial (num - 1);
}

//Recursively finding values in an array 
bool nameExists(string names[], int lastIndex, string searchName)
{
if(lastIndex >= 0)
{
  // provide code here
  if(names[lastIndex] == searchName)
  {
  return true;
  }
  else
  { 
  return nameExists(names, lastIndex-1, searchName);
  }
 }
return false;
}

int findName(string names[], int lastIndex, string searchName)
{
  // provide code here
  return -1;
}

int findContactFile(string filename, string searchName)
{
  // provide code here
  return -1;
}


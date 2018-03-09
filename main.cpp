#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main()
{
  int num;
  fstream infile;
  vector<int> numbers;

  infile.open("data.txt");

  if( infile.is_open() )
  {
    cout<<"Opened file.\n";
  }

  while( !infile.eof() )  //while not at the end of file, please continue. eof = end of
  {
    infile>>num;
    numbers.push_back(num);
  }

  for(int i=0; i<numbers.size(); i++)
  {
    cout<<numbers.at(i)<<endl;
  }
  return 0;
}

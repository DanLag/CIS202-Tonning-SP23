#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include"mountain.h"
using namespace std;

int main()
{
vector<Mountain> m;

  Mountain mountain1("Chimborazo", "Ecuador", 20549);
      m.push_back(mountain1);
  Mountain mountain2("Matterhorn", "Switzerland", 14692);
      m.push_back(mountain2);
  Mountain mountain3("Olympus", "Greece (Macedonia)", 9573);
      m.push_back(mountain3);
  Mountain mountain4("Everest", "Nepal", 29029);
      m.push_back(mountain4);
  Mountain mountain5("Mount Marcy - Adirondacks", "United States", 5344);
      m.push_back(mountain5);
  Mountain mountain6("Mount Mitchess - Blue Ridge", "United States", 6684);
      m.push_back(mountain6);
  Mountain mountain7("Zugspitze", "Switzerland", 9719);
      m.push_back(mountain7);

    cout<<left<<setw(28)<< endl << "Mountain" <<setw(22)<<" Country" <<setw(22)<< " Elevation in Ft"<<setw(22)<<" Elevation in Meters"<<endl<<endl;

    for(int i=0;i<m.size();i++)
{
      cout<<left<<setw(28)<<m[i].getName()<<setw(26)<<m[i].getCountry()<<setw(26)<<m[i].getElevation()<<setw(26)<<m[i].toMeters()<<endl;
}

  Mountain Shortest_Mountain = minElevation(m);

      cout << endl << "Name of the Shortest Mountain : " << Shortest_Mountain.getName();
      cout << endl << "It's Elevation : " << Shortest_Mountain.getElevation() << endl;
}
#include<iostream>
#include<vector>

using namespace std;

int main()
{
  vector<string> v;
  cout<<"Initial Capacity = "<<v.capacity()<<endl;

  //Pushing elements in the vector

  v.push_back("Raju");
  v.push_back("Ravi");
  v.push_back("Jay");
  v.push_back("Sunil");

  vector<string>::iterator i=v.begin();

  //Element inserted at 2nd position in the vector
  v.insert(i+1,"Mohan");

  cout<<"--------------"<<endl;
  cout<<"First element in the vector:";
  cout<<v.front()<<endl;
  cout<<"Last element in the vector:";
  cout<<v.back()<<endl;
  cout<<"--------------"<<endl;

  cout<<"Elements present in the vector:"<<endl;
  for(int i=0;i<v.size();i++)
    cout<<v[i]<<endl;

  cout<<"--------------"<<endl;
  cout<<"Final Capacity = "<<v.capacity()<<endl;

  return 0;
}

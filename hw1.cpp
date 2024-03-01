#include <iostream>
#include <cstring>
using namespace std;
void sort(char names[50][20],int rown);
int main(){
    double len =0;
    char names[50][20]; int max=0; char maxs[20]; int min=1000; char mins[20]; int count=0; int rown =0;
    cout<<"hello! please enter the names : ";
    for (int i= 0; i < 50;i++)
    {
       cin.getline(names[i],20);
       string name = names[i];
      if (name == "EXIT")
      {
        break;
      }
      if (strlen(names[i])>max)
      {
        strcpy_s(maxs,names[i]);
        max = strlen(names[i]);
      }
      if(strlen(names[i])<min){
        strcpy_s(mins,names[i]);
        min = strlen(names[i]);
      }
       for (int j = 0;names[i][j]; j++)
       {
        if (names[i][j]==' ')
        {
            count++;
            break;
        }
       }
       len=len+strlen(names[i]);
       rown++;
    } 
 sort(names,rown);
 cout<<"the longest string (including the spaces) : "<<maxs<<endl;
 cout<<"the shortest string (including spaces) : "<<mins<<endl;
 cout<<"strings that had spaces : "<<count<<endl;
 cout<<"average length (including spaces) : "<<len/rown<<endl;
 cout<<"sorted array :"<<endl;
 for (int i = 0; i < rown; i++)
 {
  cout<<names[i]<<endl;
 }
return 0;}



void sort(char names[][20],int rown){
  char temp[20];
for(int t=0; t<=rown;t++){ 
 for (int i = 0; i < rown-1; i++)
 {
  if (_stricmp(names[i],names[i+1])>0)
  {
   strcpy_s(temp,names[i+1]);
   strcpy_s(names[i+1],names[i]);
   strcpy_s(names[i],temp);
  }
}
 }
}
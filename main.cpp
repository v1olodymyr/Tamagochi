#include <iostream>
#include <fstream>
#include <conio.h>
#include<stdlib.h>
using namespace std;

 string s;
  char gamemenu, ch,firstcharline;
  int food=-1, play=4;
  
int main() {
  
  while(1)
  {
    cout<<"Menu"<<endl;
    cout<<"Press to feed 1"<<endl<<"Click to play 2"<<endl<<"Output 3"<<endl;
    fstream fop("file.txt");
    while(!fop.eof())
    {    
      fop>>firstcharline;
      if (firstcharline==gamemenu){
        getline(fop,s);
        cout<<s<<endl;
        break;
      }
      
    }
    if (food>=4){
    	getch();
	 exit(0);
}
    if (play>=9){
    	getch();
	 exit(0);
}
  ch = getch();
    switch (ch)
    {
    case '1':
      system("cls");          
      food++;
      (play>5)?play--:play;
      gamemenu=food+48;
      break;
      case '2':
      system("cls"); 
      play++;
    (food>0)?food--:food;
      gamemenu=play+48;
      break;
    case '3':
      exit(0);
      break;
    }
}
  return 0;
}

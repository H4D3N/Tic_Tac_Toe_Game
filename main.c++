#include<iostream>
using namespace std;

int main(){

	//Logic

   char a[9]={'1','2','3','4','5','6','7','8','9'};
   int b[9]={0};
   int key;

   //Display
   cout<<"\t T i c k  T a c k  T o e  G a m e\n";
   cout<<"\n\tPlayer1[x] \n\tPlayer2[O]\n";

   cout<<"\n\t\t\t     |     |     ";
   cout<<"\n\t\t\t  "<<a[0]<<"  |  "<<a[1]<<"  |  "<<a[2]<<"  ";
   cout<<"\n\t\t\t_____|_____|_____";
   cout<<"\n\t\t\t     |     |     ";
   cout<<"\n\t\t\t  "<<a[3]<<"  |  "<<a[4]<<"  |  "<<a[5]<<"  ";
   cout<<"\n\t\t\t_____|_____|_____";
   cout<<"\n\t\t\t     |     |     ";
   cout<<"\n\t\t\t  "<<a[6]<<"  |  "<<a[7]<<"  |  "<<a[8]<<"  ";
   cout<<"\n\t\t\t     |     |     ";


   cout<<"\n\t\tPlayer1 [x] turn: ";
   cin>>key;
   b[0]=key;

 switch(key){
     case 1:
           a[0]='X';
           break;
     case 2:
           a[1]='X';
           break;
     case 3:
           a[2]='X';
           break;
     case 4:
           a[3]='X';
           break;
     case 5:
           a[4]='X';
           break;
     case 6:
           a[5]='X';
           break;
     case 7:
           a[6]='X';
           break;
     case 8:
           a[7]='X';
           break;
     case 9:
           a[8]='X';
           break;
            default:
    cout<<"Invalid Choice"<<endl;
    break;
 }

   cout<<"\n\t\t\t     |     |     ";
   cout<<"\n\t\t\t  "<<a[0]<<"  |  "<<a[1]<<"  |  "<<a[2]<<"  ";
   cout<<"\n\t\t\t_____|_____|_____";
   cout<<"\n\t\t\t     |     |     ";
   cout<<"\n\t\t\t  "<<a[3]<<"  |  "<<a[4]<<"  |  "<<a[5]<<"  ";
   cout<<"\n\t\t\t_____|_____|_____";
   cout<<"\n\t\t\t     |     |     ";
   cout<<"\n\t\t\t  "<<a[6]<<"  |  "<<a[7]<<"  |  "<<a[8]<<"  ";
   cout<<"\n\t\t\t     |     |     ";


   cout<<"\n\t\tPlayer2 [O] turn: ";
   cin>>key;
   b[1]=key;
   
   if(key==b[0]){
   	cout<<"Enter a value other than this: \n";
   	cin>>key;
   	b[1]=key;
   }

 switch(key){
     case 1:
           a[0]='O';
           break;
     case 2:
           a[1]='O';
           break;
     case 3:
           a[2]='O';
           break;
     case 4:
           a[3]='O';
           break;
     case 5:
           a[4]='O';
           break;
     case 6:
           a[5]='O';
           break;
     case 7:
           a[6]='O';
           break;
     case 8:
           a[7]='O';
           break;
     case 9:
           a[8]='O';
           break;

    default:
    cout<<"Invalid Choice"<<endl;
    break;
 }

   cout<<"\n\t\t\t     |     |     ";
   cout<<"\n\t\t\t  "<<a[0]<<"  |  "<<a[1]<<"  |  "<<a[2]<<"  ";
   cout<<"\n\t\t\t_____|_____|_____";
   cout<<"\n\t\t\t     |     |     ";
   cout<<"\n\t\t\t  "<<a[3]<<"  |  "<<a[4]<<"  |  "<<a[5]<<"  ";
   cout<<"\n\t\t\t_____|_____|_____";
   cout<<"\n\t\t\t     |     |     ";
   cout<<"\n\t\t\t  "<<a[6]<<"  |  "<<a[7]<<"  |  "<<a[8]<<"  ";
   cout<<"\n\t\t\t     |     |     ";

	return 0;
}

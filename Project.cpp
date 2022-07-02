#include <iostream>
#include <stdlib.h>  //For using Beep 
#include <windows.h> //For changing colors
#include <fstream>   //For saving source data and percentages of provinces

using namespace std;

void showElements();
void PercentagePTI(float a[][5]);
void PercentagePMLN(float a[][5]);
void PercentagePPP(float a[][5]);

int main()
{

system("Color B4");  //Specifing which color will use

float votes[3][5];
    {	
		votes[0][0]=1;
    	votes[0][1]=5284453;
    	votes[0][2]=5658847;
    	votes[0][3]=70046;
    	votes[0][4]=11013346;
    	
		votes[1][0]=2;
    	votes[1][1]=2465781;
    	votes[1][2]=2455428;
    	votes[1][3]=61894;
    	votes[1][4]=4983103;
    	
		votes[2][0]=3;
    	votes[2][1]=2790648;
    	votes[2][2]=2644525;
    	votes[2][3]=60287;
    	votes[2][4]=5495460;
    }
 
    {
        char entry;
             cout<<"\t\t\t\t   ***********************************"<<endl;
             cout<<"\t\t\t\t   *             PROJECT             *"<<endl;
             cout<<"\t\t\t\t   ***********************************"<<endl<<endl;

             cout<<"\t\t\t\t   ***********************************"<<endl;
             cout<<"\t\t\t\t   *           VOTING RESULTS        *"<<endl;
             cout<<"\t\t\t\t   ***********************************"<<endl;
        cout<<"\n\n\t\t\tPRESS 'Y' TO VIEW SOURCE DATA OR PRESS ANY OTHER KEY TO SKIP: ";
        cin>>entry;
       
        if(entry=='y'|| entry=='Y')
        showElements();
    }  
 
int x[10];

        back:
        cout<<"\n\n1. Press 1 for Punjab."; 
        cout<<"\n2. Press 2 for KPK.";   
        cout<<"\n3. Press 3 for Sindh.";  
        cout<<"\n4. Press 4 for EXIT.\n\n";
        cout<<"Enter number here : ";
       

for(int i=0;i<10;i++)
    {
        cin>>x[i];
        system ("CLS");

        if(x[i]==2)
        PercentagePTI(votes);
        else if(x[i]==1)
        PercentagePMLN(votes);
        else if(x[i]==3)
        PercentagePPP(votes);
        else if(x[i]==4)
        {
		     cout<<"\t\t\t\t   ***********************************"<<endl;
             cout<<"\t\t\t\t   *         Exit Successfully       *"<<endl;
             cout<<"\t\t\t\t   ***********************************"<<endl;;
		 break;
		}
        else
        {
		 cout<<"\n\nERROR !! \nChoice should be between 1 and 4....."<<"\nInvalid choice, please select again from given menu:";Beep(523,750);
		 goto back;
		}

char con;
        next:
        cout<<"\n\nPress A to enter AGAIN or press E to EXIT: :";
        cin>>con;

        if (con=='e'||con=='E')
        {
		cout<<"\n\n\t\t\t\t  ***** Thanks For Using ***** ( Good Bye )";
		break;
		}
		
        else if(con=='a'||con=='A')
        {
		i=0;
		goto back;
		}
		
        else
        {
		cout<<endl<<"\n\ninvalid choice";
		Beep(523,750);
		goto next;
		}
    }
return 0;
}

void showElements()
{
	   	//String source data
	    string arr[2][5];
	    arr[0][1]="\t\tImran Khan(PTI)  "; cout<<arr[0][1];
	    arr[0][2]="Nawaz Sharif  "; cout<<arr[0][2];
	    arr[0][3]="  Bilawal(PPP)\n"; cout<<arr[0][3];
	    arr[1][0]="Province Code  "; cout<<arr[1][0]; 
	    arr[1][1]=" Votes"; cout<<arr[1][1];
	    arr[1][2]="\t\t (PML-N)Votes"; cout<<arr[1][2]; 
    	arr[1][3]="    Votes"; cout<<arr[1][3];
    	arr[1][4]="\t         Total Votes"; cout<<arr[1][4]<<endl;
        
		//Integer source data
    	int votes[3][5];
    	votes[0][0]=1;cout<<votes[0][0];
    	votes[0][1]=5284453;cout<<"               "<<votes[0][1];
    	votes[0][2]=5658847;cout<<"          "<<votes[0][2];
    	votes[0][3]=70046;cout<<"         "<<votes[0][3];
    	votes[0][4]=11013346;cout<<"           "<<votes[0][4]<<endl;
    	
		votes[1][0]=2;cout<<votes[1][0];
    	votes[1][1]=2465781;cout<<"               "<<votes[1][1];
    	votes[1][2]=2455428;cout<<"          "<<votes[1][2];
    	votes[1][3]=61894;cout<<"         "<<votes[1][3];
    	votes[1][4]=4983103;cout<<"           "<<votes[1][4]<<endl;
    	
		votes[2][0]=3;cout<<votes[2][0];
    	votes[2][1]=2790648;cout<<"               "<<votes[2][1];
    	votes[2][2]=2644525;cout<<"          "<<votes[2][2];
    	votes[2][3]=60287;cout<<"         "<<votes[2][3];
    	votes[2][4]=5495460;cout<<"           "<<votes[2][4];
    	
    	
       ofstream my_file; 
	   my_file.open("SourceData.txt");
	   my_file

      <<arr[0][1]
      <<arr[0][2]
      <<arr[0][3]
      <<arr[1][0] 
      <<arr[1][1]
      <<arr[1][2]
      <<arr[1][3]
      <<arr[1][4]<<endl
      <<votes[0][0]
      <<"               "<<votes[0][1]
      <<"          "<<votes[0][2]
      <<"         "<<votes[0][3]
      <<"           "<<votes[0][4]<<endl
      <<votes[1][0]
      <<"               "<<votes[1][1]
      <<"          "<<votes[1][2]
      <<"         "<<votes[1][3]
      <<"           "<<votes[1][4]<<endl
      <<votes[2][0]
      <<"               "<<votes[2][1]
      <<"          "<<votes[2][2]
      <<"         "<<votes[2][3]
      <<"           "<<votes[2][4];
      my_file.close();
}


void PercentagePTI(float a[][5])
{
       Beep(1568, 200);Beep(1568, 200);
       float ipk=(a[1][1])/(a[1][4])*100;
       float npk=a[1][2]/a[1][4]*100;
       float bpk=a[1][3]/a[1][4]*100;
       
       cout<<"Winner in KPK is *PTI*"<<endl;
       cout<<"\n\nPERCENTAGE OF PTI IN *KPK* : "<<ipk;
       cout<<"\nPERCENTAGE OF PML-N IN *KPK* : "<<npk;
       cout<<"\nPERCENTAGE OF PPP IN *KPK* : "<<bpk;
       
       ofstream my_file; 
	   my_file.open("kpk.txt");
	   my_file<<"\n\nPERCENTAGE OF PTI IN *KPK* : "<<ipk
       <<"\nPERCENTAGE OF PML-N IN *KPK* : "<<npk
       <<"\nPERCENTAGE OF PPP IN *KPK* : "<<bpk;
       my_file.close();
}


void PercentagePMLN(float a[][5])
{
       Beep(1568, 200);Beep(1568, 200);
       float ipp=a[0][1]/a[0][4]*100;
       float npp=a[0][2]/a[0][4]*100;
       float bpp=a[0][3]/a[0][4]*100;
       
       cout<<"Winner in punjab is *PML-N*"<<endl;
       cout<<"\n\nPERCENTAGE OF PTI IN *PUNJAB* : "<<ipp;
       cout<<"\nPERCENTAGE OF PML-N IN *PUNJAB* : "<<npp;
       cout<<"\nPERCENTAGE OF PPP IN *PUNJAB* : "<<bpp;
       
       ofstream my_file; 
	   my_file.open("punjab.txt");
	   my_file<<"\n\nPERCENTAGE OF PTI IN *PUNJAB* : "<<ipp
       <<"\nPERCENTAGE OF PML-N IN *PUNJAB* : "<<npp
       <<"\nPERCENTAGE OF PPP IN *PUNJAB* : "<<bpp;
       my_file.close();
}


void PercentagePPP(float a[][5])
{
	   Beep(1568, 200);Beep(1568, 200);
       float ips=a[2][1]/a[2][4]*100;
       float nps=a[2][2]/a[2][4]*100;
       float bps=a[2][3]/a[2][4]*100;
       
       
       cout<<"Winner in SINDH is PTI"<<endl;
       cout<<"\n\nPERCENTAGE OF PTI IN *SINDH* : "<<ips;
       cout<<"\nPERCENTAGE OF PML-N IN *SINDH* : "<<nps;
       cout<<"\nPERCENTAGE OF PPP IN *SINDH* : "<<bps;
       
       ofstream my_file; 
	   my_file.open("sindh.txt");
	   my_file<<"\n\nPERCENTAGE OF PTI IN *SINDH* : "<<ips
       <<"\nPERCENTAGE OF PML-N IN *SINDH* : "<<nps
       <<"\nPERCENTAGE OF PPP IN *SINDH* : "<<bps;
       my_file.close();
}

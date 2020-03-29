#include<iostream>
#include<conio.h>
using namespace std;
class Rail
{
	public:
	gd(int x,int y)
	{
	 if( (x>=1 || x<=20 ) && (y>=1 || y<=20))
	 {
	    switch (x)
		{
		
			case 1:
			{
				int a[20]={0,30,30,30,40,50,70,70,85,90,105,70,120,115,145,90,160,0,100,105};
				cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
				float b[20]={00.00,01.00,00.10,01.00,01.10,02.00,02.50,03.00,03.50,04.30,05.00,03.30,07.01,07.05,09.30,04.45,08.49,00.00,05.45,05.15};
				cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
				int c[20]={0,34,4,45,64,99,170,179,228,258,297,174,358,349,464,247,470,0,287,298};
				cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
				break;
			}
		    case 2:
		    {
			
		    	int a[20]={30,0,30,45,50,60,75,0,110,0,0,75,0,0,0,0,0,0,0,0};
		    	cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
		    	float b[20]={01.00,00.00,01.00,02.05,02.25,03.13,03.51,00.00,04.40,00.00,00.00,04.45,00.00,00.00,00.00,00.00,00.00,00.00,00.00,00.00};
		    	cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
		    	int c[20]={31,0,34,79,98,134,198,0,257,0,0,207,0,0,0,0,0,0,0,0};
		    	cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
			break;	
	        }
	        case 3:
	        {
	        	int a[20]={30,30,0,30,40,50,70,70,80,90,115,70,120,120,145,90,145,0,100,105};
	        	cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
	        	float b[20]={00.20,01.00,00.00,01.10,01.30,02.00,03.00,03.10,04.00,04.30,05.07,03.25,07.45,07.50,10.12,05.15,09.10,00.00,06.35,06.10};
	        	cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
	        	int c[20]={4,35,0,42,61,96,167,176,225,255,294,170,361,353,467,250,474,0,291,300};
	        	cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
	        	break;
	        }
	        case 4:
	        {
	        	int a[20]={30,45,30,0,30,35,55,60,70,80,90,60,130,130,155,100,155,0,115,115};
	        	cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
	        	float b[20]={01.04,02.28,00.45,00.00,00.19,01.01,01.54,02.20,02.51,03.14,03.50,02.50,08.40,08.56,11.10,06.00,10.15,00.00,06.44,07.07};
	        	cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
	        	int c[20]={46,79,42,0,19,54,125,134,183,213,252,128,404,396,508,292,515,0,334,343};
	        	cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
	        	break;
	        }
	        case 5:
	        {
	        	int a[20]={40,50,40,30,0,30,50,55,65,75,85,50,135,130,160,105,160,0,120,120};
	        	cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
	        	float b[20]={01.30,02.46,01.10,00.20,00.00,00.40,01.34,02.00,02.31,02.54,03.48,02.10,08.48,09.13,11.00,06.00,11.00,00.00,07.30,07.10};
	        	cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
	        	int c[20]={64,98,61,18,0,35,106,116,164,194,233,110,422,414,527,311,534,0,351,362};
				cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
	        	break;	
			}
			case 6:
			{
				int a[20]={50,60,50,35,30,0,45,45,60,65,75,45,140,140,170,115,170,0,125,145};
				cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
				float b[20]={2.00,3.13,1.45,1.08,0.55,0,0.48,1.00,1.45,2.08,2.50,1.17,9.00,9.50,11.35,7.15,11.40,0,8.30,7.20};
				cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
				int c[20]={100,133,97,54,36,0,71,80,129,159,198,73,458,450,563,347,569,0,388,397};
				cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
	        	break;
			}
			case 7:
			{
				int a[20]={70,100,70,55,50,40,0,30,35,45,60,60,160,155,185,130,185,0,140,160};
				cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
				float b[20]={2.55,3.33,3.02,2.17,1.45,0.57,0,0.10,0.55,1.18,2.12,2.42,10.20,10.08,14.02,8.40,11.30,0,8.44,8.38};
				cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
				int c[20]={170,198,166,124,106,70,0,9,58,88,127,143,528,520,633,416,639,0,458,467};
				cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
	        	break;
			}
			case 8:
			{
				int a[20]={70,0,70,60,55,45,30,0,30,45,55,65,160,160,185,135,185,0,145,145};
				cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
				float b[20]={3.45,0,2.55,2.32,2.22,1.06,0.13,0,0.48,1.14,1.53,2.42,10.30,10.51,13.50,7.55,12.22,0,9.27,9.17};
				cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
				int c[20]={179,0,176,134,115,79,9,0,50,79,118,153,537,529,642,426,650,0,467,477};
				cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
				break;
			}
			case 9:
			{
				int a[20]={85,110,80,70,65,60,35,30,0,30,40,75,175,170,200,145,200,0,155,160};
				cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
				float b[20]={3.53,4.14,3.28,2.41,2.22,1.38,0.48,0.35,0.0,0.22,1.02,03.10,11.25,11.10,13.50,8.55,12.16,0.0,9.45,9.53};
				cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
				int c[20]={229,257,225,183,165,129,59,49,0,30,69,202,587,578,692,475,698,0,517,526};
				cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
	        	break;
			}
			case 10:
			{
				int a[20]={90,0,90,80,75,65,45,45,30,0,30,85,180,175,205,155,205,0,165,180};
				cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
				float b[20]={4.45,0,4.28,3.59,3.24,2.43,2.13,1.45,0.49,0,0.49,4.56,12.30,12.14,16.28,10.38,13.59,0,10.55,10.25};
				cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
				int c[20]={259,0,255,212,195,159,89,79,30,0,39,232,616,608,722,505,729,0,546,555};
				cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
	        	break;
			}
			case 11:
			{
				int a[20]={105,0,100,90,85,75,60,55,40,30,0,95,185,185,210,165,210,0,175,175};
				cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
				float b[20]={5.20,0,5.11,4.31,4.14,3.30,2.00,2.16,1.05,0.30,0,4.27,12.55,12.52,15.15,10.18,13.28,0,11.12,11.05};
				cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
				int c[20]={297,0,294,252,234,198,128,119,40,0,271,655,432,647,760};
				cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
	        	break;
			}
			case 12:
			{
				int a[20]={70,75,70,60,50,45,60,65,75,85,95,0,0,160,0,130,185,0,145,0};
				cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
				float b[20]={3.20,4.45,3.31,2.15,2.10,1.13,2.19,2.34,3.50,4.29,5.10,0,0,11.18,0,9.00,12.26,0,10.07,0};
				cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
				int c[20]={173,207,170,128,110,73,144,153,202,232,271,0,0,523,0,420,644,0,461,0};
				cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
	        	break;
			}
			case 13:
			{
				int a[20]={120,0,120,130,135,140,160,160,175,180,185,0,0,0,0,0,185,185,0,0};
				cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
				float b[20]={6.50,0,7.18,8.04,8.24,9.07,9.35,10.20,11.18,11.43,11.52,0,0,0,0,0,11.30,11.45,0,0};
				cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
				int c[20]={359,0,362,405,423,459,529,538,588,617,656,0,0,0,0,0,639,639,0,0};
				cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
	        	break;
			}
			case 14:
			{
				int a[20]={115,0,0,130,130,140,155,160,170,175,185,160,0,0,35,50,110,10,40,0};
				cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
				float b[20]={6.43,0,0,8.09,8.02,8.45,9.38,9.52,10.30,11.01,11.32,11.17,0,0,4.25,2.12,7.18,1.16,1.03,0};
				cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
				int c[20]={350,0,0,396,414,450,520,529,579,608,647,523,0,0,150,103,326,40,62,0};
				cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
	        	break;
			}
			case 15:
			{
				int a[20]={145,0,145,155,160,170,185,185,200,205,210,0,0,35,0,80,0,50,65,0};
				cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
				float b[20]={9.05,0,10.12,11.10,11.00,11.35,14.02,13.50,13.50,16.28,15.15,0,0,4.25,0,4.20,0,1.49,3.18,0};
				cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
				int c[20]={464,0,467,508,527,563,633,642,692,722,760,0,0,150,0,217,0,110,160,0};
				cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
	        	break;
			}
			case 16:
			{
				int a[20]={90,0,90,100,105,115,130,135,145,155,165,130,0,50,80,0,80,45,30,75};
				cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
				float b[20]={4.45,0,5.15,6.00,6.00,7.15,8.40,7.55,8.55,10.38,10.18,9.00,0,2.12,4.20,0,3.58,2.19,1.23,4.31};
				cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
				int c[20]={247,0,250,292,311,347,416,426,475,505,544,420,0,103,217,0,224,90,41,285};
				cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
	        	break;
			}
			case 17:
			{
				int a[20]={160,0,145,155,160,170,185,185,200,205,210,185,185,110,0,80,0,0,95,105};
				cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
				float b[20]={8.49,0,9.10,10.15,11.00,11.40,11.30,12.22,12.16,13.59,13.28,12.26,11.30,7.18,0,3.58,0,0,5.40,14.10};
				cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
				int c[20]={470,0,474,515,534,569,639,650,698,729,767,644,639,326,0,224,0,0,265,509};
				cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
	        	break;
			}
			case 18:
			{
				int a[20]={0,0,0,0,0,0,0,0,0,0,0,0,185,10,50,45,0,0,30,0};
				cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
				float b[20]={0,0,0,0,0,0,0,0,0,0,0,0,11.45,1.16,1.49,2.19,0,0,1.28,0};
				cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
				int c[20]={0,0,0,0,0,0,0,0,0,0,0,0,639,40,110,90,0,0,50,0};
				cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
	        	break;
			}
			case 19:
			{
				int a[20]={100,0,100,115,120,125,140,145,155,165,175,145,0,40,65,30,95,30,0,0};
				cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
				float b[20]={5.45,0,6.35,6.44,7.30,8.30,8.44,9.27,9.45,10.55,11.12,10.07,0,1.03,3.18,1.23,5.40,1.28,0,0};
				cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
				int c[20]={287,0,291,334,351,388,458,467,517,546,585,461,0,62,160,41,265,50,0,0};
				cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
	        	break;
			}
			case 20:
			{
				int a[20]={105,0,105,115,120,145,160,145,160,180,175,0,0,0,0,75,105,0,0,0};
				cout<<"your travel ticket is (In Rs.)="<<a[y-1]<<endl;
				float b[20]={5.15,0,6.10,7.07,7.10,7.20,8.38,9.17,9.53,10.25,11.05,0,0,0,0,4.31,14.10,0,0,0};
				cout<<"your travel time is(In hr.min)="<<b[y-1]<<endl;
				int c[20]={298,0,300,343,362,397,467,477,526,555,594,0,0,0,0,285,509,0,0,0};
				cout<<"yout travel distance is(in km)="<<c[y-1]<<endl;
	        	break;
			}
	    }
      }
       else
       {
       	cout<<"Enter correct value for source and destination"<<endl;
	   }
	}
};
int main()
{
    cout<<"                                         Welcome to Gujarat Rail Info."<<endl<<endl;
	cout<<"  station_name(code)             station_name(code)"<<endl<<endl;
	cout<<"  1)Ahmedabad(ADI)               11)Valsad(BL)"<<endl;         
    cout<<"  2)Gandhinagar Capital(GNC)     12)Godhra(GDA)"<<endl;
	cout<<"  3)Maninagar(MAN)               13)Bhuj(BHUJ)"<<endl;  
	cout<<"  4)Nadiad(ND)                   14)Junagadh(JND)"<<endl; 
	cout<<"  5)Anand(Annd)                  15)Porbandar(PBR)"<<endl;
	cout<<"  6)Vadodara(BRC)                16)Rajkot(RJT)"<<endl;
	cout<<"  7)Bharuch(BH)                  17)Dwarka(DWK)"<<endl;
	cout<<"  8)Ankleshvar(AKV)              18)Dhoraji(DJI)"<<endl;        
	cout<<"  9)Surat(ST)                    19)Gondal(GDL)"<<endl;
	cout<<" 10)Navsari(NVS)                 20)Bhavnagar(BVC)"<<endl;                                      
	int x,y;
	cout<<endl;
	cout<<"Enter source and destination respectively as a no. by seeing above detail."<<endl;
	cin>>x>>y;
	Rail r;
	r.gd(x,y);
	cout<<"(if value of ticket,time and distance are=0 then it shows that roots are not found for your source and destination)";
	getch();
  return 0;
}

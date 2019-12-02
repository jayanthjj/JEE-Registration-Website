#include<iostream>
#include<string.h>
#include<conio.h>
#include<iostream>
#include<stdio.h>
int k,i,j;
   //EXTRA FUNCTION
   const int id=1;
char pass[8]="project";
  void frame()
{
gotoxy(1,1);
for(int k=0;k<79;k++)
{
cout<<char(4);
delay(10);
}
gotoxy(1,2);
for(k=0;k<24;k++)
{
cout<<char(4);
delay(10);
gotoxy(1,2+k);
}

gotoxy(1,24);
for(k=0;k<79;k++)
{
cout<<char(4);
delay(10);
}
gotoxy(79,23);
for(k=0;k<24;k++)
{
cout<<char(4);
gotoxy(79,23-k);
}
}

void jee()
{
clrscr();
frame();
//J
gotoxy(14,5);

for(int i=0;i<15;i++)
{
cout<<char(178);
delay(20);
}
gotoxy(14,6);
for(i=0;i<15;i++)
{
cout<<char(178);
delay(20);
}
gotoxy(20,7);
for(int j=0;j<9;j++)
{
cout<<(char)178<<(char)178<<(char)178<<(char)178;
delay(20);
gotoxy(20,8+j);
}
gotoxy(19,15);
for( int k=0;k<6;k++)
{
cout<<char(178)<<char(178)<<char(178)<<char(178);
delay(40);
gotoxy(20-(k+3),15-k);
}
/*
cout<<" "<<char(127)<<char(127)<<char(127)<<char(127)<<" ";   */
gotoxy(18,17);
cout<<"JOINT";

//E
gotoxy(32,5);
for(i=0;i<15;i++)
{
cout<<char(178);
delay(20);
}

gotoxy(32,6);
for(i=0;i<15;i++)
{
cout<<char(178);
delay(20);
}
gotoxy(32,7);
for(j=0;j<9;j++)
{
cout<<char(178)<<char(178)<<char(178)<<char(178);
delay(20);
gotoxy(32,7+j);
}
gotoxy(32,14);
for(i=0;i<15;i++)
{
cout<<char(178);
delay(20);
}
gotoxy(32,15);
for(i=0;i<15;i++)
{
cout<<char(178);
delay(20);
}
gotoxy(37,9);
for(i=0;i<6;i++)
{
cout<<char(178);
delay(20);
}
gotoxy(37,10);
for(i=0;i<6;i++)
{
cout<<char(178);
delay(20);
}
gotoxy(35,17);
cout<<"ENTRANCE";

//2E
gotoxy(50,5);
for(i=0;i<15;i++)
{
cout<<char(178);
delay(20);
}

gotoxy(50,6);
for(i=0;i<15;i++)
{
cout<<char(178);
delay(20);
}
gotoxy(50,7);
for(j=0;j<9;j++)
{
cout<<char(178)<<char(178)<<char(178)<<char(178);
delay(20);
gotoxy(50,7+j);
}
gotoxy(50,14);
for(i=0;i<15;i++)
{
cout<<char(178);
delay(20);
}
gotoxy(50,15);
for(i=0;i<15;i++)
{
cout<<char(178);
delay(20);
}
gotoxy(55,9);
for(i=0;i<6;i++)
{
cout<<char(178);
delay(20);
}
gotoxy(55,10);
for(i=0;i<6;i++)
{
cout<<char(178);
delay(20);
}
gotoxy(53,17);
cout<<"EXAMINATION";
delay(200);
clrscr();
}
void pen()
{
gotoxy(61,5);
cout<<char(220)<<char(220)<<char(220)<<char(220)<<char(220);
gotoxy(61,6);
cout<<char(178)<<char(178)<<char(178)<<char(178)<<char(178)<<endl;
for(int i=0;i<=6;i++)
{
gotoxy(61,7+i);
cout<<char(199)<<char(177)<<char(177)<<char(175)<<char(182)<<endl;
}
gotoxy(61,13);
cout<<"\\   /"<<endl;
gotoxy(61,14);
cout<<" \\ /"<<endl;
gotoxy(61,15);
cout<<"  "<<char(31)<<endl;
}


void pat()
{
 clrscr();
 gotoxy(15,5);
for(int i=0;i<50;i++)
{
cout<<"*";
delay(20);
}
cout<<"*";
gotoxy(15,6);
for(int j=0;j<20;j++)
{
gotoxy(15,6+j);
cout<<"*";
delay(20);
}
gotoxy(15,26);
for(int k=0;k<50;k++)
{
cout<<"*";

delay(20);
}
gotoxy(65,6);
for( j=0;j<20;j++)
{
gotoxy(65,6+j);
cout<<"*";
delay(20);
}
}
int password()    //of admin
{
char word[15],ch;
int chance=3,k;
do
{
k=0;
clrscr();
cout<<"\nAdmin,please enter your password: ";
do
{
ch=getch();
if(ch==13)
break;
else
{
cout<<"*";
word[k]=ch;
k++;
}
}while(ch!=13);
word[k]='\0';
if(strcmp(pass,word)==0)
{
return 1;
}
chance--;
cout<<"\nSORRY.Invalid password.You have "<<chance<<" chances left.\n";
getch();
if(chance==0)
break;
}while(chance!=0);
return -1;
}

//PRG
class student
{
char name[20],dob[11],sex,fname[20],mname[20],email[10],religion[10];
char category,centre[10],caste[10],disability[10],pass[10];
int roll,centrecode,mark;
long int mob;
struct address
{
char hname[10],city[10],state[10];
long int pincode;
}ad;

public:

student()
{strcpy(disability,"NIL");
}



int getdetails();

int pref[3];

friend int generate();

void assigncentre(int x)
{
centrecode=pref[x];
if(centrecode==1)
strcpy(centre,"Trivandrum");
else if(centrecode==2)
strcpy(centre,"Mumbai");
else if(centrecode==3)
strcpy(centre,"Kolkata");
else strcpy(centre,"Delhi");
}

int getroll()
{return roll;
}

int getcentre()
{
return centrecode;
}

void tcktpass()
{
cout<<"Please provide a password for accessing your hall ticket : ";
gets(pass);
cout<<"\nYour roll number is "<<roll;
cout<<"\nRemember your roll number and password for accessing your hall ticket.\n";
}

int checkpass(char p[])
{
if(strcmp(p,pass)==0)
return 1;
else return 0;
}
  void printhallticket()
{
pat();
gotoxy(24,9);
cout<<"JEE(JOINT ENTRANCE EXAMINATION)";
gotoxy(34,7);
cout<<"HALL TICKET";
gotoxy(20,12);
cout<<"Rollno: "<<roll;
gotoxy(20,14);
cout<<"Name : "<<name;
gotoxy(20,16);
cout<<"Date of Birth : "<<dob;
gotoxy(20,18);
cout<<"Time : 9:00am to 12:00pm Date: 01/12/2016\n";
gotoxy(20,20);
cout<<"Category : "<<category;
gotoxy(20,22);
cout<<"Special needs : "<<disability;
getch();
}
void chellan()
{
pat();
gotoxy(37,6);
cout<<"CHELLAN";
gotoxy(25,8);
cout<<"STATE BANK OF INDIA(SBI)";
gotoxy(27,11);
cout<<"Mr./Miss "<<name<<"  pays,";
gotoxy(18,13);
cout<<"Rs 1000/- as the Registration Fees for";
gotoxy(18,15);
cout<<"JEE(JOINT ENTRANCE EXAMINATION).";
gotoxy(50,20);
cout<<"Issued by";
gotoxy(50,21);
cout<<"-JEE";
gotoxy(17,20);
cout<<"Issued on:";
gotoxy(17,22);
cout<<"Valid Till 01-01-2017 ";
delay(20);
getch();
}
 void printranklist()
   {
    cout<<" "<<name<<"\t\t"<<mark<<"\t\t"<<caste<<"\n";
   }

 int getmark()
 {
 return mark;
 }

 int checkcaste()
 {
 if(strcmpi(caste,"General")==0)
 return 1;
 else
 return 0;
 }

void displaylist()
{
cout<<roll<<"  "<<name<<endl;
 }

void entermark()
{
cout<<"Roll no. : "<<roll;
cout<<"\nName: "<<name;
cout<<"\nEnter mark: ";
cin>>mark;
}

};

student c,c1,r[15],ob[15],temp;

int student::getdetails()
{
char ans;
do
{
clrscr();
cout<<"\t\t\t\tAPPLICATION FORM\n";
cout<<"Name                     : ";
gets(name);
cout<<"\nDate of Birth(DD/MM/YYYY): ";
gets(dob);
cout<<"\nSex                      : ";
cin>>sex;
cout<<"\n\nFather's name            : ";
gets(fname);
cout<<"\nMothers name             : ";
gets(mname);
cout<<"\n\nAddress";
cout<<"\n\tHouse Name             : ";
gets(ad.hname);
cout<<"\n\tCity                   : ";
gets(ad.city);
cout<<"\n\tPincode                : ";
cin>>ad.pincode;
cout<<"\n\tState                  : ";
gets(ad.state);
cout<<"\n\nMobile number            : ";
cin>>mob;
cout<<"\nEmail address            : ";
gets(email);
cout<<"\n\nReligion                 : ";
gets(religion);
cout<<"\nCaste(general/OBC/ST/SC) : ";
gets(caste);
cout<<"Does student have any special needs?\n1.Yes\n2.No\nEnter choice(1/2):  ";
int b;
cin>>b;
switch(b)
{
case 1:
cout<<"\nEnter disability   ";
gets(disability);
break;
default:
break;
}
cout<<"\nProceed to next step?(y/n)\n(If there are any corrections you want ";
cout<<"to make,press N)/n\n";
cin>>ans;
}while(ans=='n'||ans=='N');
cout<<"\t\tCENTRE PREFERENCE\n";
cout<<"Centres available: \n1.Trivandrum\n2.Mumbai\n3.Kolkata\n4.Delhi\n";
int b;
for(int a=0;a<3;a++)
 {
check:
cout<<"Enter centre number "<<a+1<<": ";
cin>>pref[a];
cout<<endl;
for(b=a;b>0;b--)
{
if(pref[a]==pref[b-1])
{cout<<"You cannot enter a center twice.Enter another choice.\n";
goto check;
}
}}
roll=generate();
char u[5];
for(a=6,b=0;a<10;a++,b++)
u[b]=dob[a];
u[b]='\0';
if(strcmp(u,"2000")==0)
{category='J';
return 1;
}
if(strcmp(u,"1999")==0)
{
category='S';
return 1;
}
return 0;
}


int generate()
{
ifstream fin("examj");
int y;
if(!fin.read((char*)&c1,sizeof(c1)))
y=1;
else
{
fin.seekg(-1*sizeof(c1),ios::end);
fin.read((char*)&c1,sizeof(c1));
y=c1.getroll()+1;
}
fin.close();
return y;
}





void main()
{
 textcolor(15);
  int ch1,x1,ret1,a1,g,s1,n1;
char ans1;
  char ans; int ch,l;
/*jee(); */

do
{
clrscr();
cout<<"Are you an 1.ADMIN 2.USER"<<endl;
cout<<"Enter your choice: ";
cin>>l;
switch(l)
{
case 1:
clrscr();
cout<<"Welcome.\nEnter your id: ";
cin>>x1;
if(id==x1)
{
ret1=password();
if(ret1==-1)
goto again;
else
goto admin;
}
else
{cout<<"\nInvalid id.";
goto again;
}

admin:
clrscr();
cout<<"1.View the site\n2.Display applicants\n3.Enter marks\n4.View ranklist\n5.Exit\n";
cout<<"Enter your choice: ";
cin>>g;
switch(g)
{
case 1:
goto site;

case 2:
ifstream fin("examj");

cout<<"ROLL NO. NAME\n";
while(!fin.eof())
{
fin.read((char*)&c,sizeof(c));
c.displaylist();
}
fin.close();
getch();
break;

case 3:
ifstream fin1("examj");
fin1.seekg(0,ios::end);
x1=fin1.tellg()/sizeof(c);
fin1.close();
n1=0;
while(n1<x1)
{ifstream fin("examj");
fin.seekg(n1*sizeof(c));
fin.read((char*)&c,sizeof(c));
fin.close();
c.entermark();
ofstream fout("examj",ios::beg);
fout.seekp(n1*sizeof(c));
fout.write((char*)&c,sizeof(c));
fout.close();
n1++;
clrscr();
}
break;

case 4:
break;

case 5:
exit(0);
break;
default:
cout<<"Invalid choice.\n";
}
break;

case 2:
site:        //admin see site
clrscr();
gotoxy(24,4);
cout<<"WELCOME TO JEE ONLINE EXAM PORTAL";
gotoxy(26,7);
cout<<"Please give your choice";
gotoxy(1,6);
cout<<"1.HOME";
gotoxy(1,8);
cout<<"2.ELIGIBILY";
gotoxy(1,10);
cout<<"3.FAQ";
gotoxy(1,12);
cout<<"4.RANKLIST";
gotoxy(1,14);
cout<<"5.APPLICATION";
gotoxy(1,16);
cout<<"6.HALL-TICKET";
gotoxy(1,18);
cout<<"7.SCHOLARSHIP";
gotoxy(1,20);
cout<<"8.SELECTION-PROCEDURE";
gotoxy(60,6);
cout<<"9.COURCES";
gotoxy(60,8);
cout<<"10.CONTACT";
gotoxy(60,10);
cout<<"11.EVENTS";
gotoxy(60,12);
cout<<"12.COMMITTEE-MEMBERS";
gotoxy(60,14);
cout<<"13.PREVIOUS YEAR";
gotoxy(60,16);
cout<<"14.RANKLIST";
gotoxy(60,18);
cout<<"15.EXIT";
gotoxy(35,8);


cin>>ch;
switch(ch)
{
case 5:
int x;
x=c.getdetails();
if(x==0)
{cout<<"Sorry.No category for your age.";
getch();
}
else
{
c.tcktpass();
if(c.getroll()==1)
{
c.assigncentre(0);
ofstream fout("examj",ios::app|ios::binary);
fout.write((char*)&c,sizeof(c));
fout.close();
getch();
}
else
{
getch();
int i=0,tempcode,n=0,d;
ifstream fin("examj");
for(i=0;i<3;i++)
{
n=0;
fin.seekg(0);
while(!fin.eof())
{
fin.read((char*)&c1,sizeof(c1));
d=c1.getcentre();
if(d==c.pref[i])
n++;
if(n==10)
break;
}
if(n<10)
break;
}
fin.close();
c.assigncentre(i);
ofstream fout("examj",ios::app);
fout.write((char*)&c,sizeof(c));
fout.close();
getch();
}
clrscr();
cout<<"Exam registration fees-Rs.1000/-";
getch();
c.chellan();
}
break;

case 6:
int ret,temprno,flag=0;
char ps[10];
cout<<"Enter roll number : ";
cin>>temprno;
cout<<"\nEnter password : ";
for(int i=0;i<10;i++)
{
ps[i]=getch();
if(ps[i]==13)
break;
cout<<"*";
}
ps[i]='\0';						     //load()??
ifstream fin("examj");
while(!fin.eof())
{
fin.read((char*)&c,sizeof(c));
if(temprno==c.getroll())
{flag=1;
break;
}}
if(flag==1)
{ret=c.checkpass(ps);
if(ret==1)
{cout<<"\nSuccess";
c.printhallticket();
}
else
{cout<<"Wrong password.\n";
getch();
}
}
else {cout<<"Invalid roll number";
      getch();
      }

  break;
   case 14:
   int c1;
   i=0;
   ifstream rk("examj");
   while(!rk.eof())
   {
   rk.read((char*)&r[i],sizeof(r));
   i++;
   }
   rk.close();
   int n=i;
   clrscr();                            //no of students
   cout<<"1.General Ranklist\n2.OBC/ST/SC Ranklist (reservation)\n";\
   cin>>c1;
       switch(c1)
       {
   case 1:
   for(i=0;i<n;i++)
   {
   for(int j=i+1;j<n;j++)
   {
   if(r[i].getmark()<r[j].getmark())
   {
   temp=r[i];
   r[i]=r[j];
   r[j]=temp;
   }
   }
   }
   cout<<"RANK\tNAME\tMARKS\t\CASTE\n";
   for(i=0;i<n;i++)
   {
   cout<<i+1;
   r[i].printranklist();
   }
   break;
   case 2:
   int ret,nob;
   for(int i=0,j=0;i<n;i++)
   {ret=r[i].checkcaste();
   if(ret==0)
   {
   ob[i]=r[i];
   j++;
   }
   }
   j=n;
   for(i=0;i<n-1;i++)
   {
   for(j=i+1;j<n;j++)
   {
   if(ob[i].getmark()<ob[j].getmark())
   {temp=ob[i];
   ob[i]=ob[j];
   ob[j]=temp;
   }}}
   cout<<"\t\\tRESERVED RANKLIST\N";
   cout<<"RANK  NAME\TMARK  CASTE\N";
   for(i=0;i<n;i++)
   {
   cout<<i+1;
   ob[i].printranklist();
   }
   break;
   default:
   cout<<"Wrong choice";
   }
   break;
   case 15:
   exit(0);
   break;
   default:
   cout<<"Wrong choice";
   }
   break;
   default:
   cout<<"SORRY";

   }
clrscr();
again:
cout<<"Do you wish to continue?(Y/N)\n";
cin>>ans;
}while(ans=='y'||ans=='Y');

getch();
}

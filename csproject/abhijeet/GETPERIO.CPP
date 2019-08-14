#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<fstream.h>

class periodic
{
private:
    int i,j,k,a,c;
public:
    void introduction();
    void option();
    void choice();
    void score();
    void quiz();
    void showtable();
    void getdata();
    void putdata();
    void endscreen();
};
void periodic::introduction()
{
    cleardevice();
    setcolor(5);
    settextstyle(3,0,7);
    for(k=1; k<=90; k++)
    {
	cleardevice();
        outtextxy(125,k,"WELCOME TO");
        delay(30);
    }
    for(i=0; i<=1100; i++)
    {
        putpixel(rand()%720,rand()%500,rand());
    }
    settextstyle(3,0,5);
    outtextxy(80,250,"MODERN PERIODIC-TABLE");
    setcolor(14);
    outtextxy(75,300,"*************************");
    outtextxy(124,150,"********************");
    //delay(3000);
    getch();
    cleardevice();
    for(i=0; i<=1100; i++)
    {
	putpixel(rand()%720,rand()%500,rand());
    }
    settextstyle(1,0,3);
    setcolor(11);
    outtextxy(260,100,"MADE BY :-");
    setcolor(14);
    outtextxy(225,130,"***********************");
    settextstyle(7,0,4);
    setcolor(12);
    outtextxy(100,160,"*** PRATEEK DEWANGAN ***");
    outtextxy(300,210,"&");
    outtextxy(100,260,"*** ABHIJEET PANSARI ***");
    outtextxy(300,310,"&");
    outtextxy(100,360,"*** ANKUR BHELAWE ***");
    //delay(3000);
    getch();
}
void periodic :: option()
{
    periodic p;
    clrscr();
    char ascval,kp;
    cleardevice();
    setbkcolor(0);
    for(i=0; i<=1100; i++)
    {
        putpixel(rand()%720,rand()%500,rand());
    }
    setfillstyle(2,25);
    setcolor(10);
    circle(115,223,69);
    floodfill(115,223,10);
    settextstyle(3,0,2);
    outtextxy(30,145,"FOR");
    settextstyle(3,0,7);
    outtextxy(52,180,"QUIZ");
    settextstyle(3,0,1);
    outtextxy(45,300,"Press the Key Q");
    circle(498,215,135);
    floodfill(498,215,10);
    settextstyle(3,0,2);
    outtextxy(370,85,"FOR");
    settextstyle(3,0,7);
    outtextxy(380,145,"PERIODIC");
    outtextxy(415,200,"TABLE");
    settextstyle(3,0,1);
    outtextxy(430,360,"Press ENTER Key");
    outtextxy(40,360,"If you want to exit press key E");
    kp=getch();
    ascval=kp;
    if(ascval==101)
    {
        p.endscreen();
        delay(1500);
        exit(0);
    }
    if(ascval==113)
    {
        p.quiz();
    }
    if(ascval==13)
    {
        p.showtable();
    }
    getch();
    p.getdata();
    p.putdata();
}
void periodic :: choice()
{
    setcolor(12);
    periodic p;
    char r;
    cout<<"\n\n Do you want to continue...(Y/N) !!";
    cin>>r;
    if(r=='n'||r=='N')
    {
        p.option();
    }
}
void periodic :: score()
{
    setcolor(12);
    int x;
    if(x==80)
        cout<<"\n\n Congratulation......You are extremly intelligent";
    else if(x<=79)
        cout<<"\n\n Total Score is : "<<x;
}
void periodic :: quiz()
{
    periodic p;
    clrscr();
    cleardevice();
    setbkcolor(0);
    for(i=0; i<=1100; i++)
    {
        putpixel(rand()%720,rand()%500,rand());
    }

    char t;
    int x,n;
    x=0;
    char choice[100],ch1;
     int lo,di;
 for(lo=0, di=28; lo<=100; lo+=4, di++)
 {
  if(lo==24||lo==84)
  sleep(1);
  sound(305);
  gotoxy(28,12);cout<<"initializing game...";
  gotoxy(28,13);cout<<lo;
  gotoxy(di,14);cout<<"лл";
  delay(1000);
  nosound();
 }
  clrscr();
  cleardevice();
  setbkcolor(0);
  for(i=0; i<=1100; i++)
    {
        putpixel(rand()%720,rand()%500,rand());
    }

    cout<<"\n\n\t\t         *************";
    cout<<"\n\n\t\t         * Quiz Game *";
    cout<<"\n\n\t\t         *************";
    cout<<"\n\n";
    cout<<"\n Please Enter Your Name : ";
    cin>>choice;
    cout<<"\n\n";
    cout<<"\n\n\t\t Welcome "<<choice<<"\n";
    cout<<"\n\n\t\t Loading Please wait........";
    cout<<"\n\n\t\t To Start Quiz Press Any Key";
    getch();
    cout<<"\n\n\n Note :Enter answer in the a,b,c and d only...";
    cout<<"\n\n\n";
    cout<<"\n\n1.Who is the father of the periodic table?";
    cout<<"\nA.Henry Mosley\nB.Hank Matriarc\nC.Dmitri Mendeleev\nD.Dennis Mangum";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='C'||ch1=='c')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        cout<<"\n\n\n";
        getch();
    }
    p.score();
    p.choice();

    cout<<"\n\n2.What was special about the 1st periodic table?";
    cout<<"\nA.It was the original\nB.It was arranged by atomic number\nC.It was arranged by mass\nD.It had gaps that helped to predict future elements";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='D'||ch1=='d')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        cout<<"\n\n\n";
        getch();
    }
    p.score();
    p.choice();
    cout<<"\n\n3.An element has 78 protons.What is the name of the element?Is it a metal,\nnonmetal,or metalloid?";
    cout<<"\nA.Lead; metal\nB.Platinum; metal\nC.Selenium; non-metal\nD.Antimony; metalloid";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        cout<<"\n\n\n";
        getch();
    }
    p.score();
    p.choice();
    cout<<"\n\n4.Which group contains elements that are nonreactive?";
    cout<<"\nA.Alkali Metals\nB.Alkaline Earth Metals\nC.Halogens\nD.Noble Gases";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='D'||ch1=='d')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n5.In which group would you find the most highly reactive metals?";
    cout<<"\nA.Group 1\nB.Group 2\nC.Group 17\nD.Group 18";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n6.An element is used as a good conductor of heat.What would you classify\n this element as?";
    cout<<"\nA.Metal\nB.Nonmetal\nC.Metalloid\nD.Solid";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n7.How is Moseley's basis for arranging the elements different from Mendeleev's?";
    cout<<"\nA.Moseley's had spaces\nB.Mendeleev's was arranged by atomic mass number\nC.Moseley's was the original\nD.Moseley's was arranged by atomic number";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='D'||ch1=='D')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n8.Elements have more in common with other elements in their same";
    cout<<"\nA.Row\nB.Period\nC.Group\nD.Area";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='C'||ch1=='c')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n9.Which of the following statements about the periodic table is false?";
    cout<<"\nA.There are more metals than non-metals on the periodic table\nB.Atoms of elements in the same group have the same number of electrons in their outer level\nC.The elements at the far left of the periodic table are nonmetals\nD.Elements are arranged by increasing atomic number";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='C'||ch1=='c')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n10.This element is very reactive,has properties similar to those of magnesium,\n and is in the same period as bromine.";
    cout<<"\nA.Carbon\nB.Calcium\nC.Sodium\nD.Aluminium";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n11.Why is Hydrogen apart of Group 1 if it is a nonmetal?";
    cout<<"\nA.It has properties similar to group 1\nB.It doesn't fit anywhere else\nC.There is no room for it on the right hand side\nD.It is a gas";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n12.The following characteristics are properties of:not malleable not ductile \n not shiny poor conductors of heat and electric current";
    cout<<"\nA.Metal\nB.Nonmetal\nC.Metalloid";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n13.The following properties are characteristics of:shiny malleable ductile good \n conductors of heat and electricity";
    cout<<"\nA.Metal\nB.Nonmetal\nC.Metalloid";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n14.The following properties are characteristics of: shiny but not a good \n conductor shiny and brittle dull and a good conductor";
    cout<<"\nA.Metal\nB.Nonmetal\nC.Metalloid";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='C'||ch1=='c')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n15._________ is a pure substance composed of two or more elements that are \n chemically combined.";
    cout<<"\nA.Element\nB.Compound\nC.Mixture\nD.Colloid";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n16.Potassium (K) is an example of a(n):";
    cout<<"\nA.Element\nB.Compound\nC.Mixture\nD.Colloid";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n17.A mixture";
    cout<<"\nA.Has substances in it that are chemically combine\nB.Can always be separated using filtration\nC.Contains substances that are not mixed in a definite ratio\nD.All of the above";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='D'||ch1=='d')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n18.Which of the following best describes chicken noodle soup?";
    cout<<"\nA.Element\nB.Mixture\nC.Compound\nD.Solution";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n19.Certain objects float in water while others sink.What property of water \n causes this?";
    cout<<"\nA.Cohesion\nB.Adhesion\nC.Buoyant force\nD.Unique shape";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='C'||ch1=='c')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n20.Using the formula,calculate the density of the following object.The object\n has the mass of 5 grams and using the water displacement method, the water level rises\n 25 mL.";
    cout<<"\nA.0.55555\nB.0.2\nC.5\nD.125";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n21.This property is used to make coins that are all the same thickness";
    cout<<"\nA.Ductility\nB.Conductivity\nC.Malleability\nD.Density";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='C'||ch1=='c')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n22.Physical changes form new substances with brand new properties.";
    cout<<"\nA.True\nB.False";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n23.Substances that go into a mixture keep their own physical and chemical properties.";
    cout<<"\nA.True\nB.False";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n24.Molding clay is an example of a chemical change.";
    cout<<"\nA.True\nB.False";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n25.Baking a cake is an example of a chemical change.";
    cout<<"\nA.True\nB.False";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n26.Which of the following is not an example of a way to observe a chemical change?";
    cout<<"\nA.Color change\nB.Odour\nC.Temperature change\nD.Bubbling\nE.Shape change\nF.Precipitate forms";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='E'||ch1=='e')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n27.____ describe matter based on its ability to change into new matter that \nhas different properties.";
    cout<<"\nA.Mass\nB.Chemical change\nC.Chemical properties\nD.Physical properties";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='C'||ch1=='c')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n28.Look at the chart below:";
    cout<<"\n                     Substance          Specific Heat ";
    cout<<"\n   Lead              128 Copper             387 ";
    cout<<"\n   Glass             837 Water              4.184 ";
    cout<<"\n   If each of these substances were exposed to the same amount of heat for the \nsame amount of time, which one would be the coolest?";
    cout<<"\nA.Lead\nB.Copper\nC.Glass\nD.Water";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='D'||ch1=='d')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n29.Everything on earth can be categorized by the physical properties \n flammable/non-flammable or reactive/nonreactive.";
    cout<<"\nA.True\nB.False";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n30.Boiling water or melting butter would be examples of state changes which are \n also considered to be physical changes.";
    cout<<"\nA.True\nB.False";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n31.The tendency of an object at rest to stay at rest or an object in motion to \n stay in motion is known as:";
    cout<<"\nA.Inertia\nB.Matter\nC.Mass\nD.Friction";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n32.Which of the following is matter?";
    cout<<"\nA.Dust\nB.The moon\nC.Strand of hair\nD.All of the above";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='D'||ch1=='d')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n33.A graduated cylinder is used to measure:";
    cout<<"\nA.Volume\nB.Mass\nC.Weight\nD.Inertia";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n34._____ is anything that has mass and takes up space.";
    cout<<"\nA.Mass\nB.Matter\nC.Inertia\nD.Volume";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n35.Which of the following properties is NOT a chemical property?";
    cout<<"\nA.Reactivity with oxygen\nB.Malleablility\nC.Flammability\nD.Reactivity with acid";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n36.Looking at Lithium (Li), Sodium (Na), and Potassium (K), which of the \n following statements is correct?";
    cout<<"\nA.Lithium has the greatest atomic number\nB.Sodium has the least atomic mass\nC.Atomic number decreases as you move down the group\nD.Atomic mass increases as we move down the group";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='D'||ch1=='d')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n37.Which group do lithium, sodium, and potassium belong to?";
    cout<<"\nA.Alkali metals\nB.Alkaline earth metals\nC.Transition metals\nD.Lanthanides";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n38.How many groups are there on the periodic table?";
    cout<<"\nA.9\nB.7\nC.13\nD.18";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='D'||ch1=='d')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n39.How many periods are there on the periodic table?";
    cout<<"\nA.9\nB.7\nC.13\nD.18";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n40.A friend of yours goes on a hike and claims that she came back with a \n piece of sodium.What is your BEST response?";
    cout<<"\nA.You think nothing of this. Who cares?!\nB.Oh my goodness, get this away from me before it explodes!\nC.We are going to be rich!\nD.You're silly! Don't you know how reactive sodium is?!";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='D'||ch1=='d')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n41.Both of elements of 1st period contains valence electrons in";
    cout<<"\nA.M shell\nB.N shell\nC.K shell\nD.S shell";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='C'||ch1=='c')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n42.In periodic table, helium is placed at";
    cout<<"\nA.top left corner\nB.bottom right corner\nC.bottom left corner\nD.top right corner";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='D'||ch1=='d')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n43.Across period atomic size decreases due to";
    cout<<"\nA.shielding effect\nB.photoelectric effect\nC.increase in nuclear force of attraction\nD.decrease in nuclear force of attraction";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='C'||ch1=='c')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n44.First three periods are";
    cout<<"\nA.long periods\nB.short periods\nC.moderate periods\nD.none of above";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n45.On basis of electronic configuration group and period of 95B is";
    cout<<"\nA.2 and IIIA\nB.3 and IIA\nC.4 and VIA\nD.5 and VIIA";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n46.In fluorine incoming electrons are repel by the";
    cout<<"\nA.thick cloud\nB.outer most shell\nC.nucleus\nD.atomic radii";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n47.In group from top to bottom electron affinity";
    cout<<"\nA.increases\nB.decreases\nC.remain same\nD.none";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n48.In period from left to right electron affinity of elements";
    cout<<"\nA.increases\nB.decreases\nC.neutral\nD.none";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n49.Values of group IIA, VA and VII in every period is";
    cout<<"\nA.high\nB.low\nC.change\nD.neutral";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n50.Fluorine has electron affinity less than that of";
    cout<<"\nA.sodium\nB.potassium\nC.chlorine\nD.oxygen";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='C'||ch1=='c')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n51.Chemical properties depends upon";
    cout<<"\nA.electronic configuration\nB.valence shell electronic configuration\nC.atomic mass\nD.none of above";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n52.Nobel gases are present in";
    cout<<"\nA.VIIA group\nB.VIA group\nC.VA group\nD.VIIIA group";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='D'||ch1=='d')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n53.Energy required to remove an electron from outermost shell is called";
    cout<<"\nA.potential energy\nB.kinetic energy\nC.mechanical energy\nD.ionization energy";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='D'||ch1=='d')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n54.As we go from top to bottom in a group shielding effect";
    cout<<"\nA.doesn't change\nB.decreases\nC.increases\nD.none of above";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='C'||ch1=='c')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n55.Group A elements are called";
    cout<<"\nA.metals\nB.alkali metals\nC.representative elements\nD.transition elements";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='C'||ch1=='c')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n56. Period number of element indicates n";
    cout<<"\nA.value of all shells\nB.value of valence shell\nC.value of 1st shell\nD.none of above";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n57.Ability of atom to attract electrons towards itself is called";
    cout<<"\nA.electron affinity\nB.electronegativity\nC.ionization energy\nD.shielding effect";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n58.Average distance between nucleus and outer shell is called";
    cout<<"\nA.atomic size\nB.nuclear size\nC.shielding effect\nD.none of above";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n59.Horizontal rows of periodic table are called";
    cout<<"\nA.rows\nB.periods\nC.columns\nD.none of above";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n60.Shielding effect across period";
    cout<<"\nA.increases\nB.decreases\nC.becomes equal to above periods\nD.remains same";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='D'||ch1=='d')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n61.In periodic table elements with similar valence shell configuration are placed in";
    cout<<"\nA.different groups\nB.same group\nC.can be placed any where\nD.none of above";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n62.When an electron is added in valence shell then";
    cout<<"\nA.energy is absorbed\nB.energy is released\nC.energy remains same\nD.force of attraction increases";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n63.Value of ionization energy";
    cout<<"\nA.decreases down the group\nB.increases down the group\nC.remains same down the group\nD.none of above";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n64.Groups contain alkaline earth metals are";
    cout<<"\nA.IA\nB.IIIA\nC.IIA\nD.IVA";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='C'||ch1=='c')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n65.Physical properties depends on the";
    cout<<"\nA.size of atom\nB.size of proton\nC.size of neutron\nD.no. of electrons";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n66.Elements that lie in same column have";
    cout<<"\nA.similar properties\nB.different properties\nC.same physical properties\nD.different chemical properties";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n67.As we go from left to right across period, electron affinity";
    cout<<"\nA.increases\nB.decreases\nC.remains same\nD.none of above";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n68.Elements are arranged in order of";
    cout<<"\nA.decreasing atomic number\nB.decreasing atomic mass\nC.increasing atomic number\nD.increasing atomic mass";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='C'||ch1=='c')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n69.Decrease in force of attraction between valence electrons and nucleus by \n inner electrons is called";
    cout<<"\nA.screening effect\nB.shielding effect\nC.photoelectric effect\nD.dopler effect";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n70.Compared to metals,nonmetals are";
    cout<<"\nA.more brittle as a solid.\nB.better electrical conductors.\nC.more ductile as a solid.\nD.better conductors of heat.";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n71.Under ordinary,room temperature conditions,the greatest number of elements are";
    cout<<"\nA.gases.\nB.liquids.\nC.metallic solids.\nD.nonmetallic plasmas.";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='C'||ch1=='c')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n72.A solution of sugar dissolved in water is";
    cout<<"\nA.a heterogeneous mixture.\nB.a homogeneous mixture.\nC.an alloy.\nD.a pure substance.";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n73.Which of the following represents a physical change?";
    cout<<"\nA.Electricity is used to generate oxygen and hydrogen from water.\nB.Calcium carbonate is dissolved by stomach acid.\nC.Solid ice is melted into liquid water.\nD.Natural gas is burned as a heat source.";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='C'||ch1=='c')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n74.Carbon cannot be broken down into anything simpler by chemical means,\n so carbon must be";
    cout<<"\nA.a heterogeneous mixture.\nB.a homogeneous mixture.\nC.an element.\nD.a compound.";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='C'||ch1=='c')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n75.How many naturally occurring elements are found on the earth in significant quantities?";
    cout<<"\nA.112\nB.92\nC.89\nD.32";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='C'||ch1=='c')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n76.About 75 percent of the earth's solid surface is made up of";
    cout<<"\nA.silicon and oxygen.\nB.nitrogen and oxygen.\nC.hydrogen and oxygen.\nD.hydrogen,oxygen,and carbon.";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='A'||ch1=='a')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n77.About 99 percent of the earth's atmospheric air is made up of";
    cout<<"\nA.silicon and oxygen.\nB.nitrogen and oxygen.\nC.hydrogen and oxygen.\nD.hydrogen,oxygen,and carbon.";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n78.Isotopes are atoms of an element with identical chemical properties but with different";
    cout<<"\nA.numbers of protons.\nB.masses.\nC.numbers of electrons.\nD.atomic numbers.";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n79.The masses of all isotopes are based on a comparison to the mass a particular isotope of";
    cout<<"\nA.hydrogen.\nB.carbon.\nC.oxygen.\nD.uranium.";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='B'||ch1=='b')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
    p.choice();
    cout<<"\n\n80.The sum of the number of protons and neutrons in the nucleus of an atom is called the";
    cout<<"\nA.atomic number.\nB.atomic mass.\nC.atomic weight.\nD.mass number.";
    cout<<"\n\n Enter Your Select answer : ";
    cin>>ch1;
    if(ch1=='D'||ch1=='d')
    {
        x=x+1;
        cout<<"\n\n Correct Answer....";
    }
    else
    {
        cout<<"\n\n Sorry Wrong Answer....";
        getch();
        cout<<"\n\n\n";
    }
    p.score();
}
getch();
void periodic :: showtable()
{
    cleardevice();
    setbkcolor(0);
    setcolor(10);
    line(0,30,30,30);
    line(30,30,30,275);
    line(0,135,625,135);
    line(65,65,65,275);
    line(100,135,100,275);
    line(135,135,135,275);
    line(170,135,170,275);
    line(205,135,205,275);
    line(240,135,240,275);
    line(275,135,275,275);
    line(310,135,310,275);
    line(345,135,345,275);
    line(380,135,380,275);
    line(415,65,415,275);
    line(450,65,450,275);
    line(485,65,485,275);
    line(520,65,520,275);
    line(555,65,555,275);
    line(590,30,590,275);
    line(625,30,625,275);
    line(0,30,0,275);
    line(0,170,625,170);
    line(0,205,625,205);
    line(0,240,625,240);
    line(0,275,625,275);
    line(0,65,65,65);
    line(0,100,65,100);
    line(415,65,625,65);
    line(415,100,625,100);
    line(590,30,625,30);
    line(590,30,625,30);
    line(135,420,625,420);
    line(135,350,135,420);
    line(135,350,625,350);
    line(135,385,625,385);
    line(170,350,170,420);
    line(205,350,205,420);
    line(240,350,240,420);
    line(275,350,275,420);
    line(310,350,310,420);
    line(345,350,345,420);
    line(380,350,380,420);
    line(415,350,415,420);
    line(450,350,450,420);
    line(485,350,485,420);
    line(520,350,520,420);
    line(555,350,555,420);
    line(590,350,590,420);
    line(625,350,625,420);
    setcolor(5);
    settextstyle(0,0,0);
    outtextxy(10,50,"H");
    outtextxy(10,85,"Li");
    outtextxy(10,120,"Na");
    outtextxy(10,155,"k");
    outtextxy(10,190,"Rb");
    outtextxy(10,225,"Cs");
    outtextxy(10,260,"Fr");
    outtextxy(40,85,"Be");
    outtextxy(40,120,"Mg");
    outtextxy(40,155,"Ca");
    outtextxy(40,190,"Sr");
    outtextxy(40,225,"Ba");
    outtextxy(40,260,"Ra");
    setcolor(14);
    outtextxy(75,155,"Sc");
    outtextxy(75,190,"Y");
    outtextxy(75,225,"La");
    outtextxy(75,260,"Ac");
    outtextxy(110,155,"Ti");
    outtextxy(110,190,"Zr");
    outtextxy(110,225,"Hf");
    outtextxy(110,260,"Rf");
    outtextxy(145,155,"V");
    outtextxy(145,190,"Nb");
    outtextxy(145,225,"Ta");
    outtextxy(145,260,"Db");
    outtextxy(180,155,"Cr");
    outtextxy(180,190,"Mo");
    outtextxy(180,225,"W");
    outtextxy(180,260,"Sg");
    outtextxy(215,155,"Mn");
    outtextxy(215,190,"Tc");
    outtextxy(215,225,"Re");
    outtextxy(215,260,"Bh");
    outtextxy(250,155,"Fe");
    outtextxy(250,190,"Ru");
    outtextxy(250,225,"Os");
    outtextxy(250,260,"Hs");
    outtextxy(285,155,"Co");
    outtextxy(285,190,"Rh");
    outtextxy(285,225,"Ir");
    outtextxy(285,260,"Mt");
    outtextxy(320,155,"Ni");
    outtextxy(320,190,"Pd");
    outtextxy(320,225,"Pt");
    outtextxy(315,260,"Uun");
    outtextxy(355,155,"Cu");
    outtextxy(355,190,"Ag");
    outtextxy(355,225,"Au");
    outtextxy(350,260,"Uuu");
    outtextxy(390,155,"Zn");
    outtextxy(390,190,"Cd");
    outtextxy(390,225,"Hg");
    outtextxy(385,260,"Uub");
    setcolor(9);
    outtextxy(425,155,"Ga");
    outtextxy(425,190,"In");
    outtextxy(425,225,"Ti");
    outtextxy(420,260,"Uut");
    outtextxy(425,120,"Al");
    setcolor(6);
    outtextxy(425,85,"B");
    setcolor(9);
    outtextxy(460,85,"C");
    setcolor(6);
    outtextxy(460,120,"Si");
    outtextxy(460,155,"Ge");
    setcolor(9);
    outtextxy(460,190,"Sn");
    outtextxy(460,225,"Pb");
    outtextxy(455,260,"Uuq");
    outtextxy(495,85,"N");
    outtextxy(495,120,"P");
    setcolor(6);
    outtextxy(495,155,"As");
    outtextxy(495,190,"Sb");
    setcolor(9);
    outtextxy(495,225,"Bi");
    outtextxy(490,260,"Uup");
    outtextxy(530,85,"O");
    outtextxy(530,120,"S");
    outtextxy(530,155,"Se");
    setcolor(6);
    outtextxy(530,190,"Te");
    outtextxy(530,225,"Po");
    setcolor(9);
    outtextxy(525,260,"Uuh");
    outtextxy(565,85,"F");
    outtextxy(565,120,"Cl");
    outtextxy(565,155,"Br");
    outtextxy(565,190,"I");
    setcolor(6);
    outtextxy(565,225,"At");
    outtextxy(560,260,"Uus");
    setcolor(4);
    outtextxy(600,50,"He");
    outtextxy(600,85,"Ne");
    outtextxy(600,120,"Ar");
    outtextxy(600,155,"Kr");
    outtextxy(600,190,"Xe");
    outtextxy(600,225,"Rn");
    outtextxy(600,260,"Uuo");
    setcolor(12);
    settextstyle(0,0,2);
    outtextxy(165,15,"PERIODIC TABLE");
    outtextxy(163,18,"______________");
    settextstyle(0,0,0);
    setcolor(8);
    outtextxy(145,375,"Ce");
    outtextxy(145,410,"Th");
    outtextxy(180,375,"Pr");
    outtextxy(180,410,"Pa");
    outtextxy(215,375,"Nd");
    outtextxy(215,410,"U");
    outtextxy(250,375,"Pm");
    outtextxy(250,410,"Np");
    outtextxy(285,375,"Sm");
    outtextxy(285,410,"Pu");
    outtextxy(320,375,"Eu");
    outtextxy(320,410,"Am");
    outtextxy(355,375,"Gd");
    outtextxy(355,410,"Cm");
    outtextxy(390,375,"Tb");
    outtextxy(390,410,"Bk");
    outtextxy(425,375,"Dy");
    outtextxy(425,410,"Cf");
    outtextxy(460,375,"Ho");
    outtextxy(460,410,"Es");
    outtextxy(495,375,"Er");
    outtextxy(495,410,"Fm");
    outtextxy(530,375,"Tm");
    outtextxy(530,410,"Md");
    outtextxy(565,375,"Yb");
    outtextxy(565,410,"No");
    outtextxy(600,375,"Lu");
    outtextxy(600,410,"Lr");
    setcolor(12);
    outtextxy(390,450,"Press Enter Key To Continue");
    setcolor(10);
    outtextxy(20,365,"Lanthanides--");
    outtextxy(20,400,"Actinides----");
    outtextxy(135,330,"|----------------------f-block Elements----------------------|");
    outtextxy(65,120,"|-------------d-block Elements-------------|");
    outtextxy(412,15,"|-----p-block Elements----|");
    outtextxy(0,15,"|--------|");
    outtextxy(0,0,"s-block Elements");
    outtextxy(10,35,"1");
    outtextxy(10,70,"3");
    outtextxy(10,105,"11");
    outtextxy(10,140,"19");
    outtextxy(10,175,"37");
    outtextxy(10,210,"55");
    outtextxy(10,245,"87");
    outtextxy(40,70,"4");
    outtextxy(40,105,"12");
    outtextxy(40,140,"20");
    outtextxy(40,175,"38");
    outtextxy(40,210,"56");
    outtextxy(40,245,"88");
    setcolor(6);
    outtextxy(75,140,"21");
    outtextxy(75,175,"39");
    outtextxy(75,210,"57");
    outtextxy(75,245,"89");
    outtextxy(110,140,"22");
    outtextxy(110,175,"40");
    outtextxy(110,210,"72");
    outtextxy(105,245,"104");
    outtextxy(145,140,"23");
    outtextxy(145,175,"41");
    outtextxy(145,210,"73");
    outtextxy(140,245,"105");
    outtextxy(180,140,"24");
    outtextxy(180,175,"42");
    outtextxy(180,210,"74");
    outtextxy(175,245,"106");
    outtextxy(215,140,"25");
    outtextxy(215,175,"43");
    outtextxy(215,210,"75");
    outtextxy(210,245,"107");
    outtextxy(250,140,"26");
    outtextxy(250,175,"44");
    outtextxy(250,210,"76");
    outtextxy(245,245,"108");
    outtextxy(285,140,"27");
    outtextxy(285,175,"45");
    outtextxy(285,210,"77");
    outtextxy(280,245,"109");
    outtextxy(320,140,"28");
    outtextxy(320,175,"46");
    outtextxy(320,210,"78");
    outtextxy(315,245,"110");
    outtextxy(355,140,"29");
    outtextxy(355,175,"47");
    outtextxy(355,210,"79");
    outtextxy(350,245,"111");
    outtextxy(390,140,"30");
    outtextxy(390,175,"46");
    outtextxy(390,210,"80");
    outtextxy(385,245,"112");
    setcolor(7);
    outtextxy(425,140,"31");
    outtextxy(425,175,"49");
    outtextxy(425,210,"81");
    outtextxy(420,245,"113");
    outtextxy(425,105,"13");
    setcolor(6);
    outtextxy(425,70,"5");
    setcolor(5);
    outtextxy(460,70,"6");
    setcolor(9);
    outtextxy(460,105,"14");
    outtextxy(460,140,"32");
    setcolor(4);
    outtextxy(460,175,"50");
    outtextxy(460,210,"82");
    outtextxy(455,245,"114");
    outtextxy(495,70,"7");
    outtextxy(495,105,"15");
    setcolor(5);
    outtextxy(495,140,"33");
    outtextxy(495,175,"51");
    setcolor(7);
    outtextxy(495,210,"83");
    outtextxy(490,245,"115");
    outtextxy(530,70,"8");
    outtextxy(530,105,"16");
    outtextxy(530,140,"34");
    setcolor(2);
    outtextxy(530,175,"52");
    outtextxy(530,210,"84");
    setcolor(1);
    outtextxy(525,245,"116");
    outtextxy(565,70,"9");
    outtextxy(565,105,"17");
    outtextxy(565,140,"35");
    outtextxy(565,175,"53");
    setcolor(9);
    outtextxy(565,210,"85");
    outtextxy(560,245,"117");
    setcolor(6);
    outtextxy(600,35,"2");
    outtextxy(600,70,"10");
    outtextxy(600,105,"18");
    outtextxy(600,140,"36");
    outtextxy(600,175,"54");
    outtextxy(600,210,"86");
    outtextxy(595,245,"118");
    setcolor(7);
    outtextxy(145,360,"58");
    outtextxy(145,395,"90");
    outtextxy(180,360,"59");
    outtextxy(180,395,"91");
    outtextxy(215,360,"60");
    outtextxy(215,395,"92");
    outtextxy(250,360,"61");
    outtextxy(250,395,"93");
    outtextxy(285,360,"62");
    outtextxy(285,395,"94");
    outtextxy(320,360,"63");
    outtextxy(320,395,"95");
    outtextxy(355,360,"64");
    outtextxy(355,395,"96");
    outtextxy(390,360,"65");
    outtextxy(390,395,"97");
    outtextxy(425,360,"66");
    outtextxy(425,395,"98");
    outtextxy(460,360,"67");
    outtextxy(460,395,"99");
    outtextxy(495,360,"68");
    outtextxy(490,395,"100");
    outtextxy(530,360,"69");
    outtextxy(525,395,"101");
    outtextxy(565,360,"70");
    outtextxy(560,395,"102");
    outtextxy(600,360,"71");
    outtextxy(595,395,"103");
    setcolor(3);
    for(i=0; i<=1100; i++)
    {
        putpixel(rand()%720,rand()%500,rand());
    }
}
void periodic::getdata()
{
    cleardevice();
    setbkcolor(1);
    for(i=0; i<=2200; i++)
    {
     putpixel(rand()%720,rand()%500,rand());
    }
    cout<<"Enter the atomic number :";
    cin>>c;
}
void periodic::putdata()
{
    clrscr();
    cleardevice();
     for(i=0; i<=2200; i++)
    {
     putpixel(rand()%720,rand()%500,rand());
    }
    int z;
    char line[258];
    periodic p;
    fstream fin;
    fin.open("MAIN.txt",ios::in);
    while(!fin.eof())
    {
        for(z=1; z<=472; z++)
        {
            fin.getline(line,258);
            if(z>=((c-1)*4+1)&&z<=4*c)
                cout<<line<<endl;
        }
    }
    fin.close();
    getch();
    p.option();
}
void periodic :: endscreen()
{
    cleardevice();
    for(i=0; i<=1100; i++)
    {
        putpixel(rand()%720,rand()%500,rand());
    }
    setcolor(1);
    setfillstyle(5,6);
    fillellipse(310,230,300,90);
    setcolor(14);
    settextstyle(3,0,7);
    outtextxy(170,180,"THANK YOU");
    getch();
}
void main()
{
    int gm,gd = DETECT,i,j;
    initgraph(&gd,&gm,"c:\\tc\\bgi");
    periodic p;
    p.introduction();
    p.option();
    getch();
}

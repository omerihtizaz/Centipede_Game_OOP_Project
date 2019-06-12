//============================================================================
// Name        : .cpp
// Author      : Sibt ul Hussain
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Centipede...
//============================================================================

#ifndef CENTIPEDE_CPP_
#define CENTIPEDE_CPP_
#include "Board.h"
#include "util.h"
#include"Score.h"
#include"Score.cpp"
#include <iostream>
#include<string>
#include"Fleas.h"
#include"Fleas.cpp"
#include<cmath> // for basic math functions such as cos, sin, sqrt
#include"GameObject.h"
#include"Position.h"
#include"GameObject.cpp"
#include"Mushroom.h"
#include"Mushroom.cpp"
#include"Segment.h"
#include"Segment.cpp"
#include"Fireshot.h"
#include"Fireshot.cpp"
#include"LazySegments.cpp"
#include"LazySegments.h"
#include"MagicSegments.cpp"
#include"MagicSegments.h"
#include<fstream>
#include"MoveableObject.h"
#include"Centipede.h"
#include"Centipede.cpp"
#include"MoveableObject.cpp"
#include"Player.h"
#include"Player.cpp"
#include"Position.cpp"
using namespace std;//========================== ==================================================
GameObject*start[1000];
// seed the random numbers generator by curr ent time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate h as value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}


/*
 * Main Canvas drawing function.
 * */
Board *b;


void Display2()
        {

fstream infile;
infile.open("highscore.txt",ios::in);

infile.close();
        for(int popo=0;popo<800;popo++){

    glClearColor(0/*Red Component*/, 0.0/*Green Component*/,
            0.0/*Blue Component*/, 0 /*Alpha component*/);// Red==Green==Blue==1 --> White Colour
    glClear(GL_COLOR_BUFFER_BIT);   //Update the colors

    DrawString( 250, 300, "GAME OVER!!!", colors[MISTY_ROSE]); // this will print given string at x=50 , y=600
    DrawString( 250, 250, "Your score was "+to_string(start[123]->takex(0)), colors[MISTY_ROSE]); // this will print given string at x=50 , y=570
    DrawString( 250, 150, "The game is going to exit ", colors[MISTY_ROSE]);



   glutSwapBuffers();
}

exit(1);}

void CreateMushroom( int xaxisss,int yaxisss);


void fleawork(){
	int prob;
	//cout<<"working";
	prob=rand()%8;
if(prob==1 and start[124]->getPostion().getYaxis()>200 and start[124]->getPostion().getYaxis()<750){
	//cout<<"we are here";
		int xaxisss=start[124]->getPostion().getXaxis();
		int yaxisss=start[124]->getPostion().getYaxis();
		CreateMushroom(xaxisss,yaxisss);
}
else{


}

}






void mushcenticoll();
void CreateMushroom(int xaxiss,int yaxiss){
for(int x=0;x<100;x++)
	if(start[10+x]==NULL)
		{
		start[10+x]=new Mushroom(xaxiss,yaxiss,2);
		start[10+x]->Health=2;

		mushcenticoll();
		break;
}
}

void CentipedeCollision(){
	for(int y=0;y<50;y++)
		if(start[200+y]!=NULL)

			{for(int l=0;l<20;l++){
				if(start[200+y]->getPostion().getXaxis()==start[122]->takex(l) and start[200+y]->getPostion().getYaxis()==start[122]->takey(l)){
					{if(start[122]->gethealth()!=99)
		  				{
							cout<<endl<<start[122]->takex(555+l)<<endl;
		  				 	{int makenewmushx=start[y+200]->getPostion().getXaxis();
							int makenewmushy=start[y+200]->getPostion().getYaxis();

							start[200+y]->getPostion().setYaxis(1100);
							start[122]->Move(l,start[122]->takex(555+l)+4545);
							start[123]->takex(10);
			     			{if(start[122]->takex(555+l)==1)
							CreateMushroom(makenewmushx+10,makenewmushy);
						else
		 					CreateMushroom(makenewmushx-10,makenewmushy);
						}
		  						}

		  				}
					}
			}


		}


	}

}





		/*if(start[122]->getPostion().getXaxis()==start[10+y]->getPostion().getXaxis() and start[122]->getPostion().getYaxis()==start[10+y]->getPostion().getYaxis()){
		cout<<start[122]->getPostion().getXaxis();
			start[122]->Move(1,0);
			for(int x=0;x<20;x++)
			start[122]->Fireshots(x,0);


		}*/


void death2(){
if(start[1]->getPostion().getXaxis()==start[124]->getPostion().getXaxis() and start[1]->getPostion().getYaxis()==start[124]->getPostion().getYaxis()){
	Display2();
}
}


void death(){


				{for(int l=0;l<20;l++){
					if(start[1]->getPostion().getXaxis()==start[122]->takex(l) and start[1]->getPostion().getYaxis()==start[122]->takey(l)){

							Display2();

}}}

}


void Collisiondetection(){

	for(int x=0;x<50;x++){
		if(start[200+x]!=NULL){

			for(int y=0;y<100;y++)
			{if(start[10+y]!=NULL)
					{
				if(start[200+x]->getPostion().getXaxis()==start[10+y]->getPostion().getXaxis() and start[200+x]->getPostion().getYaxis()==start[10+y]->getPostion().getYaxis()){
					{start[200+x]->getPostion().setYaxis(900);
					//cout<<	start[50+x]->getPostion().getXaxis();
				 	cout<<"object removed"<<start[10+y]->getPostion().getXaxis()<<endl;

					if(start[y+10]->Health==2){
				int xax,yax;
				xax=start[10+y]->getPostion().getXaxis();

				yax=start[10+y]->getPostion().getYaxis();

					start[10+y]=new Mushroom(xax ,yax,1);

					start[y+10]->draw();}

					else
					{delete start[10+y];
					start[10+y]=new Mushroom(100 ,1000,0 );
					start[123]->takex(1);}

					//x ++;
					}
				}

			}else continue;
			}
		}
		else continue;

		//out<<"iteration number failed "<<x<<endl;}
	}

}
void mushcenticoll(){
	//cout<<"In here"<<start[122]->getPostion().getXaxis()<<endl;
	for(int y=0;y<100;y++)
	{if(start[y+10]!=NULL)
		for(int l=0;l<20;l++){
			if(start[122]->takex(l)==start[10+y]->getPostion().getXaxis() and start[122]->takey(l)==start[10+y]->getPostion().getYaxis())
			{
				start[122]->Move(l,0);

		}
		}else continue;

	}





	/*if(start[122]->getPostion().getXaxis()==start[10+y]->getPostion().getXaxis() and start[122]->getPostion().getYaxis()==start[10+y]->getPostion().getYaxis()){
	cout<<start[122]->getPostion().getXaxis();
		start[122]->Move(1,0);
		for(int x=0;x<20;x++)
		start[122]->Fireshots(x,0);


	}*/

}
void GameDisplay()/**/{


	// set the background color using function glClearColor.
	// to change the background play with   the red, green and blue values below.
 	// Note that r, g andb values must  be in the ra nge [0,1] where 0 means dim rid and 1 means pure red and so on.


	glClearColor(0/*Red Component*/, 0 ,	//148.0/255/*Green Component*/,
			0.0/*Blue Component*/, 1 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour
	glClear (GL_COLOR_BUFFER_BIT); //Update the colors

	//Fire Gun
	/*DrawSquare( 400 , 20 ,4 0,colors[RED]);
	//Mushroom
	DrawSquare( 250 , 250 ,20,colors[GREEN]);
	//Display Score
 	DrawString( 50, 800, "Score=0", colors[MISTY_ROSE]);
	//Spider
DrawLine( this->getPostion().getXaxis()+7 , this->getPostion().getYaxis()-35  , this->getPostion().getXaxis() , this->getPostion().getYaxis()-6 , 5 , colors[MISTY_ROSE] );



	// Trianlge Vertices v1(300,50) , v2(500,50) , v3(400,250)


	//DrawLine(int x1, int y1, int x2, int y2, int lwidth, float  *color)
	DrawLine( 550 , 50 ,  550 , 480 , 10 , colors[MISTY_ROSE] );	
	
	DrawCircle(50,670,10,colors[RED]);
	DrawCircle(70,670,10,colors[RED]);
	DrawCircle(90,670,10,colors[RED]);

	*/
	death();

	//start[1]->Fireshots().Move(10,10);

	//cout<<start[123]->takey(1)<< endl;
	if(start[123]->takey(1)==900){

		start[122]->Fireshots(455,455);
	}
	else if(start[123]->takey(1)==1300){
		 start[123]->Fireshots(595,595);
		 start[122]->Fireshots(5898,5898);
	}
	else if(start[123]->takey(1)==400){
		int x=10+rand()%90;
			start[124]=new Fleas(x*10,900);
		}
	if(start[124]!=NULL){
start[124]->Move(0,-10);
fleawork();
death2();
	start[124]->draw();
	}

	start[123]->Fireshots(1,0);
start[123]->draw();
		start[1]->draw();

void death();


CentipedeCollision();


mushcenticoll();

		for(int makemushi=0;makemushi<100;makemushi++){
			if(start[10+makemushi]!=NULL)
			start[10+makemushi]->draw();
		}


		start[122]->draw();
		Collisiondetection();
				start[122]->Move(488,0);

		for(int pewpew=0;pewpew<50 and start[200+pewpew]!=NULL;pewpew++){

			start[200+pewpew]->draw();

			start[200+pewpew]->Move(0,10);



		}
		/*start[122]->Fireshots(0,0);
start[122]->draw();
start[122]->Fireshots(0,0);
//cout<<start[122]->getPostion().getXaxis();
start[122]->Move(0,0);
//cout<<start[122]->getPostion().getXaxis();*/

		/*start[122]->Move(0,0 );
		start[122]->draw();

*/
	//start[1]->Fireshots(start[1]->getPostion().getXaxis(),start[1]->getPostion().getXaxis());

glutPostRedisplay();

	glutSwapBuffers(); // do not modi fy this line..

}

/*This function is called (automatically) whenever any non-printable key (suc h as up-arrow, down-arraw)
 * is pressed from the keyboard
 *>getPostion().setXaxis(this->getPostion().getXaxis()+x);
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argumen t variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is const ant and contains ASCII for left arrow key*/) {

if(start[1]->getPostion().getXaxis()>10)
		start[1]->Move(-10,0);
//cout<<start[1]->getPostion().getXaxis();

	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {

if(start[1]->getPostion().getXaxis()<1010)
start[1]->Move(10,0);
	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {

if(start[1]->getPostion().getYaxis()<200)
start[1]->Move(0,10);
	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {


if(start[1]->getPostion().getYaxis()>25){
	start[1]->Move(0,-10);
	}
	
	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {

	if (key == 27/* Escape key ASCII*/) {
		exit(1); // exit the program when escape key is pressed.
	}

	if (key == ' ' || key == ' ') //Key for placing the bomb
			{for(int x=200;x<250;x++){


				if(start[x]==NULL or start[x]->getPostion().getYaxis()>850)
					{start[x]=new Fireshot(start[1]->getPostion().getXaxis(),start[1]->getPostion().getYaxis());
						x=1000;
//						cout<<"hey this is";
//			 			cout<<start[x]->getPostion().getXaxis()<<" "<<start[x]->getPostion().getYaxis()<<endl;
						break;}
					}
}

	glutPostRedisplay();
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(1000.0, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the nece ssary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {

	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
void MouseClicked(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
			{
		cout << GLUT_DOWN << " " << GLUT_UP << endl;

	} else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{

	}
	glutPostRedisplay();
}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {

 	srand(time(NULL));
	b = new Board(60, 60); // create a new board object to use in the Display Function ...

	int width = 1020, height = 840; // i have set my window size to be 800 x 600
	b->InitalizeBoard(width, height);
	InitRandomizer(); // seed the random number generator...
	glutInit(&argc, argv); // initialize the graphics library...
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the in itial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("Saad Rasheed"); // set the title of our game window
	SetCanvasSize(width, height); // set the number of pixels...
//start[1]=new MoveableObje ct();

start[1]=new Player(600,100);


for(int makemushi=0;makemushi<50;makemushi++){
	int x=10+rand()%90;
	int y=24+rand()%55;
	//cout<<x*10<<" "<<10*y<<endl;
	start[10+makemushi]=new Mushroom(x*10,y*10,2);
	start[10+makemushi]->Health=2;
}
Centipede Enemy;
 start[122]=&Enemy;
 start[123]=new Score;

  		//enemy.getHead().MagicSegments;

	/*Centipede war;
	//war.getHead().setPostion().
	start[122]=&war;
*/

	//start[122]=enemy.getHead();
	// Regist	er your functions to the lib rary,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.
	
	glutDisplayFunc(GameDisplay); // tell  library which function to call for drawing Canvas.
	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* AsteroidS_CPP_ */

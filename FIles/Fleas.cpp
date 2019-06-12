/*
 * Fleas.cpp
 *
 *  Created on: May 6, 2019
 *      Author: zoytx
 */

#include "Fleas.h"

int Fleas::takex(int x){
cout<<"NOFuNC";
return 0;}
int Fleas::takey(int y){
cout<<"NO FUnc";
return 0;
}
Fleas::Fleas() {
	this->getPostion().setXaxis(100);
	this->getPostion().setYaxis(100);

}

Fleas::Fleas(int x,int y) {
	this->getPostion().setXaxis(x);
	this->getPostion().setYaxis(y);

}
Fleas::~Fleas() {
	// TODO Auto-generated destructor stub
}
void Fleas::Move(int x,int y){
this->getPostion().setXaxis(this->getPostion().getXaxis()+x);
this->getPostion().setYaxis(this->getPostion().getYaxis()+y);
}
void Fleas::draw(){

	DrawSquare( this->getPostion().getXaxis()-6 , this->getPostion().getYaxis()-22,13,colors[INDIAN_RED]);
	DrawTriangle( this->getPostion().getXaxis(),this->getPostion().getYaxis() , this->getPostion().getXaxis()+7, this->getPostion().getYaxis()-13 , this->getPostion().getXaxis()-7, this->getPostion().getYaxis()-13, colors[INDIAN_RED] );
	DrawLine( this->getPostion().getXaxis()+7 , this->getPostion().getYaxis()-35  , this->getPostion().getXaxis() , this->getPostion().getYaxis()-6 , 2 , colors[PURPLE] );
	DrawLine( this->getPostion().getXaxis()-7 , this->getPostion().getYaxis()-35  , this->getPostion().getXaxis() , this->getPostion().getYaxis()-6 , 2 , colors[PURPLE] );

}

void Fleas::Fireshots(int x,int y){
	//start[1]=new Fleas();
	Fireshot *shot=new  Fireshot(this->getPostion().getXaxis()+8,this->getPostion().getYaxis()+20);
	shot->draw();
}

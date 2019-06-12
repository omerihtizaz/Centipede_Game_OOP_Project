/*
 * Fireshot.cpp
 *
 *  Created on: May 3, 2019
 *      Author: zoytx
 */

#include "Fireshot.h"

int Fireshot::takey(int x){
	cout<<"NOFUNC";
return 0;
}
int Fireshot::takex(int y){
	cout<<"NOFUNC";
	return 0;
}
Fireshot::Fireshot() {
	this->getPostion().setXaxis(200);
	this->getPostion().setYaxis(200);

}

Fireshot::Fireshot(int x,int y) {
	this->getPostion().setXaxis(x);
	this->getPostion().setYaxis(y);

}
Fireshot::~Fireshot() {
	// TODO Auto-generated destructor stub
}
void Fireshot::Move(int x,int y){
this->getPostion().setXaxis(this->getPostion().getXaxis()+x);
this->getPostion().setYaxis(this->getPostion().getYaxis()+y);
}
void Fireshot::draw(){
	DrawCircle( this->getPostion().getXaxis() ,this->getPostion().getYaxis() ,5,colors[ORANGE_RED]);

}
void Fireshot::Damage(){
	cout<<"rerer";
}
void Fireshot::Fireshots(int x,int y){

}


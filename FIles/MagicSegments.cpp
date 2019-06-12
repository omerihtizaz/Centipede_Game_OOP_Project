/*
 * MagicSegments.cpp
 *
 *  Created on: May 4, 2019
 *      Author: zoytx
 */

#include "MagicSegments.h"

MagicSegments::MagicSegments() {
	this->getPostion().setXaxis(1010);
		this->getPostion().setYaxis(820);
	this->direction=0;
	s=1;
	this->Health=99;

}
MagicSegments::MagicSegments(int x,int y,int dir) {
	this->getPostion().setXaxis(x);
	this->getPostion().setYaxis(y);

			this->direction=dir;

this->Health=99;
s=1;
}

void MagicSegments::draw(){
if(s<1){
DrawTriangle(this->getPostion().getXaxis()-10,this->getPostion().getYaxis(),this->getPostion().getXaxis(),this->getPostion().getYaxis()+10,this->getPostion().getXaxis(),this->getPostion().getYaxis()-10, colors[DARK_OLIVE_GREEN]);
DrawTriangle(this->getPostion().getXaxis()+10,this->getPostion().getYaxis(),this->getPostion().getXaxis(),this->getPostion().getYaxis()+10,this->getPostion().getXaxis(),this->getPostion().getYaxis()-10, colors[DARK_OLIVE_GREEN]);
s+=1;}
else {

DrawTriangle(this->getPostion().getXaxis()-10,this->getPostion().getYaxis(),this->getPostion().getXaxis(),this->getPostion().getYaxis()+10,this->getPostion().getXaxis(),this->getPostion().getYaxis()-10, colors[MAGENTA]);
DrawTriangle(this->getPostion().getXaxis()+10,this->getPostion().getYaxis(),this->getPostion().getXaxis(),this->getPostion().getYaxis()+10,this->getPostion().getXaxis(),this->getPostion().getYaxis()-10, colors[MAGENTA]);
s=-2;
	}
}
void MagicSegments::Move(int x=0,int y=0){
	if(x==0){
if(this->direction==0){
	this->getPostion().setXaxis(this->getPostion().getXaxis()-10);
	if(this->getPostion().getXaxis()==10){
		this->getPostion().setYaxis(this->getPostion().getYaxis()-10);
		this->direction=1;

	}

}
else if(this->direction==1){
	this->getPostion().setXaxis(this->getPostion().getXaxis()+10);
	if(this->getPostion().getXaxis()==1020){
		this->getPostion().setYaxis(this->getPostion().getYaxis()-10);
		this->direction=0;

		}
	}
}
	else if(x==1){
		if(this->direction==0){
			this->getPostion().setYaxis(this->getPostion().getYaxis()-10);

			x=0;
				this->direction=1;



		}
		else if(this->direction==1){
			this->getPostion().setYaxis(this->getPostion().getYaxis()- 10);
				x=0;
				this->direction=0;}


			}}



int MagicSegments::takex(int x){
	if(x==1415)
		return this->Health;
	else if(x==7077)
		return this->direction;
else
	return this->getPostion().getXaxis();
}
int MagicSegments::takey(int x){
	if(x==7077)
				return this->direction;
	else return this->getPostion().getYaxis();

}




void MagicSegments::Fireshots(int x,int y){
	cout<<"No shots Fired";
}

MagicSegments::~MagicSegments() {
	// TODO Auto-generated destructor stub
}




/*
 * Segments.cpp
 *
 *  Created on: May 3, 2019
 *      Author: zoytx
 */

#include "LazySegments.h"
int LazySegments::takex(int x){
	if(x==1415)
		return this->Health;
	else if(x==7077)
				return this->direction;
else
	return this->getPostion().getXaxis();
}
int LazySegments::takey(int x){
	if(x==7077)
			return this->direction;
	else if(x==46868){
		return Health=32;
	}
	else
	return this->getPostion().getYaxis();

}
LazySegments::LazySegments() {
	this->Health=1;

}
LazySegments::LazySegments(int x,int y,int dir) {
	this->getPostion().setXaxis(x);
	this->getPostion().setYaxis(y);

this->direction=dir;


}



void LazySegments::draw(){
DrawTriangle(this->getPostion().getXaxis()-6,this->getPostion().getYaxis(),this->getPostion().getXaxis(),this->getPostion().getYaxis()+10,this->getPostion().getXaxis(),this->getPostion().getYaxis()-10, colors[DARK_GOLDEN_ROD]);
DrawTriangle(this->getPostion().getXaxis()+6,this->getPostion().getYaxis(),this->getPostion().getXaxis(),this->getPostion().getYaxis()+10,this->getPostion().getXaxis(),this->getPostion().getYaxis()-10, colors[DARK_GOLDEN_ROD]);
}
void LazySegments::Move(int x=0,int y=0){
	if(direction!=0 and direction!=1)
		direction=1;
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








void LazySegments::Fireshots(int x,int y){
	cout<<"No shots Fired";
}

LazySegments::~LazySegments() {
	// TODO Auto-generated destructor stub
}


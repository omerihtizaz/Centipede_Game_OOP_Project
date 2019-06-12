/*
 * Segment.cpp
 *
 *  Created on: May 5, 2019
 *      Author: zoytx
 */

#include "Segment.h"

Segment::Segment() {
	this->getPostion().setXaxis(1010);
			this->getPostion().setYaxis(820);
direction=1;
s=1;

}

Segment::~Segment() {
	// TODO Auto-generated destructor stub
}

void Segment::draw(){
	if(s==1){
	DrawTriangle(this->getPostion().getXaxis()-10,this->getPostion().getYaxis(),this->getPostion().getXaxis(),this->getPostion().getYaxis()+10,this->getPostion().getXaxis(),this->getPostion().getYaxis()-10, colors[WHITE]);
	DrawTriangle(this->getPostion().getXaxis()+10,this->getPostion().getYaxis(),this->getPostion().getXaxis(),this->getPostion().getYaxis()+10,this->getPostion().getXaxis(),this->getPostion().getYaxis()-10, colors[WHITE]);
	s=2;}
	else {

	DrawTriangle(this->getPostion().getXaxis()-10,this->getPostion().getYaxis(),this->getPostion().getXaxis(),this->getPostion().getYaxis()+10,this->getPostion().getXaxis(),this->getPostion().getYaxis()-10, colors[RED]);
	DrawTriangle(this->getPostion().getXaxis()+10,this->getPostion().getYaxis(),this->getPostion().getXaxis(),this->getPostion().getYaxis()+10,this->getPostion().getXaxis(),this->getPostion().getYaxis()-10, colors[RED]);
	s=1;
		}
}
void Segment::Move(int x,int y){
	if(x==0){
	if(this->direction==0){
		this->getPostion().setXaxis(this->getPostion().getXaxis()-5);
		if(this->getPostion().getXaxis()==10){
			this->getPostion().setYaxis(this->getPostion().getYaxis()-10);
			this->direction=1;

		}

	}
	else if(this->direction==1){
		this->getPostion().setXaxis(this->getPostion().getXaxis()+5);
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


	void Segment::Fireshots(int x,int y){	if(x==0){
		if(this->direction==0){
			this->getPostion().setXaxis(this->getPostion().getXaxis()-5);
			if(this->getPostion().getXaxis()==10){
				this->getPostion().setYaxis(this->getPostion().getYaxis()-10);
				this->direction=1;

			}

		}
		else if(this->direction==1){
			this->getPostion().setXaxis(this->getPostion().getXaxis()+5);
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




	Segment::Segment(int x,int y,int dir){
		this->getPostion().setXaxis(x);
		this->getPostion().setYaxis(y);
		direction=dir;
	s=1;}


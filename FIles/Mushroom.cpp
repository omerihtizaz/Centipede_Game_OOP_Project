/*
 * Mushroom.cpp
 *
 *  Created on: Apr 29, 2019
 *      Author: zoytx
 */

#include "Mushroom.h"

Mushroom::Mushroom() {
	this->getPostion().setXaxis(00);
	this->getPostion().setYaxis(0);
this->Health=3;

}

int Mushroom::takex(int x){
	cout<<"NO_FUNC MUSh";
	return 0;
}
int Mushroom::takey(int x){
	cout<<"NO_FUNC mush";
	return 0;
}
Mushroom::Mushroom(int x,int y,int h) {
	this->getPostion().setXaxis(x);
	this->getPostion().setYaxis(y);
	this->Health=h;

}
Mushroom::~Mushroom() {
	// TODO Auto-generated destructor stub
}
void Mushroom::Move(int x,int y){
	cout<<"This Object cant be moved";
}
void Mushroom::draw(){

if(this->Health>0){

DrawCircle(this->getPostion().getXaxis(),this->getPostion().getYaxis(),6,colors[LAWN_GREEN]);

DrawSquare(this->getPostion().getXaxis()-8,this->getPostion().getYaxis()-17,16,colors[BLACK]);
if(this->Health>=2)
	DrawTriangle( this->getPostion().getXaxis(),this->getPostion().getYaxis() , this->getPostion().getXaxis()+5, this->getPostion().getYaxis()-10 , this->getPostion().getXaxis()-5, this->getPostion().getYaxis()-10, colors[PLUM] );

}}

void Mushroom::Fireshots(int x,int y ){

cout<<"No shots fired";
}


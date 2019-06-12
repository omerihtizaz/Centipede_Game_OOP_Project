/*
 * Player.cpp
 *
 *  Created on: Apr 30, 2019
 *      Author: zoytx
 */

#include "Player.h"

int Player::takex(int x){
cout<<"NOFuNC";
return 0;}
int Player::takey(int y){
cout<<"NO FUnc";
return 0;
}
Player::Player() {
	this->getPostion().setXaxis(100);
	this->getPostion().setYaxis(100);

}

Player::Player(int x,int y) {
	this->getPostion().setXaxis(x);
	this->getPostion().setYaxis(y);

}
Player::~Player() {
	// TODO Auto-generated destructor stub
}
void Player::Move(int x,int y){
this->getPostion().setXaxis(this->getPostion().getXaxis()+x);
this->getPostion().setYaxis(this->getPostion().getYaxis()+y);
}
void Player::draw(){

	DrawSquare( this->getPostion().getXaxis()-6 , this->getPostion().getYaxis()-22,13,colors[INDIAN_RED]);
	DrawTriangle( this->getPostion().getXaxis(),this->getPostion().getYaxis() , this->getPostion().getXaxis()+7, this->getPostion().getYaxis()-13 , this->getPostion().getXaxis()-7, this->getPostion().getYaxis()-13, colors[INDIAN_RED] );
	DrawLine( this->getPostion().getXaxis()+7 , this->getPostion().getYaxis()-35  , this->getPostion().getXaxis() , this->getPostion().getYaxis()-6 , 2 , colors[INDIAN_RED] );
	DrawLine( this->getPostion().getXaxis()-7 , this->getPostion().getYaxis()-35  , this->getPostion().getXaxis() , this->getPostion().getYaxis()-6 , 2 , colors[INDIAN_RED] );

}

void Player::Fireshots(int x,int y){
	//start[1]=new Player();
	Fireshot *shot=new  Fireshot(this->getPostion().getXaxis()+8,this->getPostion().getYaxis()+20);
	shot->draw();
}

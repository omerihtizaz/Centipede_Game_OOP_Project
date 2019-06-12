/*
 * GameObject.cpp
 *
 *  Created on: Apr 29, 2019
 *      Author: zoytx
 */

#include "GameObject.h"

GameObject::GameObject() {
	// TODO Auto-generated constructor stub

}

 Position& GameObject::getPostion(){
	return postion;
}

void GameObject::setPostion( Position& postion) {
	this->postion = postion;
}

GameObject::~GameObject() {
	// TODO Auto-generated destructor stub
}
int GameObject::getdirection(){
	cout<<"No";
return 0;}

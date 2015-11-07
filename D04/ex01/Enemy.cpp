// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 09:19:08 by sksourou          #+#    #+#             //
//   Updated: 2015/11/07 09:19:09 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp) , _type(type) {
	return ;
}

Enemy::~Enemy( ) {
	return ;
}

std::string const & Enemy::getType( ) const {
	return this->_type;
}

int Enemy::getHP( ) const {
	return this->_hp;
}

void Enemy::takeDamage(int damage) { 
	if (this->_hp > 0)
		this->_hp -= damage;
	if (this->_hp < 0)
		this->_hp = 0;
}

Enemy & Enemy::operator=( Enemy const & src) { 
	this->_hp = src._hp;
	this->_type = src._type;
	return *this;
}
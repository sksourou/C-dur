#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/10/31 18:23:59 by sksourou          #+#    #+#              #
#    Updated: 2015/10/31 18:24:02 by sksourou         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC=g++
CFLAGS=-Wall -Wextra -Werror
EXEC=megaphone

all: $(EXEC)

$(EXEC): 
	g++ -o $@ $(CFLAGS) megaphone.cpp 

clean:
	rm -rf *o

fclean: clean
	rm -rf $(EXEC)

re: fclean
	g++ -o $(EXEC) $(CFLAGS) megaphone.cpp	
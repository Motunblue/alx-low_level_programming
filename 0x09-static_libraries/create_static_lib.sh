#!/bin/bash

#Complie the C files in current directory but not link
for file in *.c
do
	gcc -c $file
done

#Create a statis library called liball.a
ar rcs liball.a *.o

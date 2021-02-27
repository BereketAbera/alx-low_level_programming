#!/bin/bash
for f in ./*.c; do
   gcc -c $f -o "${f%.*}".o; 
done

ar rcs liball.a *.o

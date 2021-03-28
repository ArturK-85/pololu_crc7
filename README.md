# pololu_crc7
Simple C code for calculating CRC7 checksum for use in Pololu's Qik-2s9v1
## Table of contest
* [General info](#general-info)
* [Techonologies](#technologies)
* [Setup](#setup)

## Genral Info
This project is a modify original C code from Pololu site https://www.pololu.com/docs/0J25/6.a
for futher use as a library in Python using ctypes

## Technologies
* C

## Setup
Linux Instrucion for compile library  
in termina type:  
cc -fPIC -shared -o pololu_crc7.so pololu_crc7.c

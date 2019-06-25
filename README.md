# coxeter

## Overview

This is the original source of Fokko du Cloux's C++ program for
doing computations in Coxeter groups.  Among its features:

- can work with arbitrary Coxeter groups (not just crystallographic)
- shortlex normal forms
- Bruhat order
- Kazhdan-Lusztig polynomials
- Kazhdan-Lusztig cells for finite Coxeter groups
- rational singular loci of Schubert varieties
- ordinary and IH Betti numbers of Schubert varieties

There is also some code to work with Hecke algebras with unequal
parameters.

Everything here was originally written by Fokko du Cloux, and was
released in beta by him (his original author information is reproduced
below).  Unfortunately he passed away in 2006 and was unable to take
the project further.  Nevertheless his program is fantastic and is in
my opinion the best tool available for demanding computations in
arbitrary Coxeter groups.  I hope that others will contribute to the code to 
give it new life.

## Building the program

Currently I have only built the program using g++ 9.1.0 (some trivial
changes to du Cloux's original code were necessary to get it to
compile).  The makefile is original to the project and is fairly
basic.  Just clone the repo and run 'make'; I don't have much more to
add, unfortunately.

## Original author information

This program was written by Fokko du Cloux, Institut Girard Desargues
(UMR CNRS 5028), Universite Lyon-I. It is made available under the GNU 
General Public License (see file main.c for full copyright notice.) The 
program was developed under Linux, using only free software, mostly from 
GNU. The author wishes to express his appreciation to all the people who 
have contributed to give these systems to the world.

Current address :

	Institut Girard Desargues
	Universite Lyon-I, bat. Jean Braconnier
	69622 Villeurbanne Cedex
	FRANCE

	ducloux@igd.univ-lyon1.fr
	http://igd.univ-lyon1.fr/home/ducloux/coxeter.html

A large part of the development work on this program was done while the
author was visiting the Centre de Recherches Mathematiques, Montreal,
and the University of British Columbia, Vancouver. Many thanks to both
institutions for their hospitality and in particular to Bill Casselman
who was the driving force in arranging both visits.





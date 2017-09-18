rem example batch file
rem . means present working directory
rem .. the directory higher up
rem we are adding to the path that windows looks at to compile a java file
rem ; separates paths
rem %PATH% means reproduce all old paths
set PATH=.;%PATH%;C:\Program Files\Java\jdk1.7.0_11\bin
set CLASSPATH=.;%CLASSPATH%
doskey ls=dir
cd.
cmd


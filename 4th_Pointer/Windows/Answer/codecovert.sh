#!/bin/bash

for var in $(ls *.c)
do
	iconv -f UTF8 -t SJIS $var -o $var
done

exit 0

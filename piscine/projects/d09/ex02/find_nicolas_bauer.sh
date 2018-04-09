#!/bin/sh

cat $1 | grep -i "nicolas" | grep -i "bauer" | grep '(*)' | cut -f4

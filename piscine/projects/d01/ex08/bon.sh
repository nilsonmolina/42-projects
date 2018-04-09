#!/bin/sh
ldapsearch -Q "uid=*bon*" | grep "cn" | wc -l | tr -d ' '

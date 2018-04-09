#!/bin/sh

arp -a | cut -f2 -d ' '  | sed s'/(//g' | sed s'/)$//g'

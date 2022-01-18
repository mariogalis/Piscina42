#!/bin/sh
ifconfig | grep -w "ether" | sed 's/ether //' | tr -d '\t' | tr -d ' '

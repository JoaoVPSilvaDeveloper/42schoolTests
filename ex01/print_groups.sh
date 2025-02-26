#!/bin/sh

# https://kodekloud.com/blog/how-to-list-all-groups-in-linux/
# 

getent group | cut -d, -f1,3
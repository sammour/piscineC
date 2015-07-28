#!/bin/sh
groups $USER | sed 's/ /,/g'

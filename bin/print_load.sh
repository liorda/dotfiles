#!/bin/bash
uptime | grep -ohe 'load average[s:][: ].*' | awk '{ print $3 $4 $5}'


#!/bin/sh
set -e
cd "${0%/*}"
../build/bin/ti4cartographer --players 8 --layout small --aggression low

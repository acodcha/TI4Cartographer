#!/bin/sh
set -e
cd "${0%/*}"
../build/bin/ti4cartographer --players 4 --layout large --aggression low

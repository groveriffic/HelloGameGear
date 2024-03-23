#!/bin/bash

set -o errexit
set -o verbose

make
java -jar ~/Emulicious/Emulicious.jar ./HelloGameGear.gg
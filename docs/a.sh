#!/bin/bash
DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
dirname "${BASH_SOURCE[0]}"
pwd

cd $DIR/..
pwd
. docs/setup.sh

#doxygen docs/config/libraries

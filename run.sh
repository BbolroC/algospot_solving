#!/bin/sh -e

./build.sh

docker run --rm -it -v $(pwd)/src/:/home/bbolroc/algospot --name algospot-playground algospot-playground-img bash


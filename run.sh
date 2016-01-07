#!/bin/sh -e

./build.sh

docker run --rm -it --net=host -p 8000:8000 -v $(pwd)/src/:/home/bbolroc/algospot --name algospot-playground algospot-playground-img bash


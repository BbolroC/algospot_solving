#!/bin/sh -e

./build.sh

docker run --rm -it --name algospot-playground algospot-playground-img bash


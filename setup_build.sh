#!/bin/bash

docker run --mount type=bind,source=${PWD},target=/src  -it build


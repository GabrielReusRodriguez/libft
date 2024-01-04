#!/usr/bin/env bash

./bin/test_split.out "   a b c "
./bin/test_split.out ""
./bin/test_split.out "    "
./bin/test_split.out "   aads bsds csdas "
./bin/test_split.out "asdas"
./bin/test_split.out "a"
#!/bin/sh
#find . -type f -name "*.sh" | rev | cut -d '/' f1 | rev | sed 's/[.]sh//'
find . -type f -name "*.sh" -exec basename {} \; | sed 's/[.]sh//'

#!/bin/sh
cd "$SRCROOT/../.."
./gradlew :common:embedAndSignAppleFrameworkForXcode  -PXCODE_CONFIGURATION=${CONFIGURATION}


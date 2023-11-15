#!/bin/bash
go build -buildmode=c-shared -trimpath -ldflags="-s -w" -o openimsdk.so export.go constant.go protocol.go tools.go
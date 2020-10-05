#!/bin/zsh
export PATH="/Users/trevorrees/Documents/sonarscanner/sonar-scanner-4.4.0.2170-macosx/bin:$PATH"
export PATH="/Users/trevorrees/Documents/sonarscanner/build-wrapper-macosx-x86:$PATH"
export SONAR_TOKEN="989a855702b285c06023b7c2a3442107b0fa0105"

build-wrapper-macosx-x86 --out-dir bw-output g++ -std=c++11 main.cpp tester.cpp -o tester

sonar-scanner \
  -Dsonar.organization=tjrees \
  -Dsonar.projectKey=tjrees_CIS566_scheduled_task_demo \
  -Dsonar.sources=. \
  -Dsonar.cfamily.build-wrapper-output=bw-output \
  -Dsonar.host.url=https://sonarcloud.io

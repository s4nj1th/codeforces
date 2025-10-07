#!/bin/sh

count=0
exts="bin o out exe"

for e in $exts; do
  files=$(ls *.$e 2>/dev/null)
  for f in $files; do
    rm -f "$f"
    count=$((count+1))
  done
done

echo "$count files purged."
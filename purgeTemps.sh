#!/bin/sh

count=0
exts="bin o out exe"
pref=".cph"

for e in $exts; do
  files=$(ls *.$e 2>/dev/null)
  for f in $files; do
    rm "$f"
    count=$((count+1))
  done
done

for e in $pref; do
  files=$(ls $e* 2>/dev/null)
  for f in $files; do
    rm "$f"
    count=$((count+1))
  done
done

echo "$count files purged."
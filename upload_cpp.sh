#!/bin/bash

# Navigate to the repository directory
cd /home/beatus/competitive_programming
# Check if the user provided a file and a commit message
if [ -z "$1" ] || [ -z "$2" ]; then
  echo "Usage: ./upload_cpp.sh <file-name> <commit-message>"
  exit 1
fi

# Stage the file
git add "$1"

# Commit the changes
git commit -m "$2"

# Push the changes
git push origin main  # or 'master'


# How to use pre-commit with `process.sh`

## Installation
1. Copy all the files inside your `.git/hooks` folder
2. Add `did-these.txt` and `oprint.txt` inside the `.gitignore` file
3. Update your email and your name inside the `.git/hooks/pre-commit` file`

# Usage
```
git add .
git commit --no-edit  # Commit message is not well format now. We need to fix it 
git commit --message="$( cat oprint.txt )"  # Message is well formated here
```

For more details about how to add a custom path for the `.git/hooks` folder you can check [here](https://stackoverflow.com/questions/39332407/git-hooks-applying-git-config-core-hookspath)

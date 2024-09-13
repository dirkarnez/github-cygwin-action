github-cygwin-action
====================
### Notes
- `shell` is ` shell: C:\tools\cygwin\bin\bash.exe --login -o igncr '{0}'`
- **MUST** hard set cygwin's bash working directory to `${{ github.workspace }}` because it is by default at `~`

### TODOs
- [x] Revamp this repo base on [dirkarnez/tree-prebuilt](https://github.com/dirkarnez/tree-prebuilt)
  - this repo currently does not use cygwin for cross-compilation actually

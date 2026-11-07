// rea decompile_all
// name: FUN_10074ab1c
// address: 0x10074ab1c
// body: available
// range: 0x10074ab1c-0x10074adfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10074ab1c(char *param_1,ulong param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  size_t sVar8;
  undefined8 *puVar9;
  size_t sVar10;
  ulong uVar11;
  ulong uVar12;
  stat local_100;
  
  local_100.st_gen = 0;
  local_100.st_lspare = 0;
  local_100.st_blksize = 0;
  local_100.st_flags = 0;
  local_100.st_qspare[1] = 0;
  local_100.st_qspare[0] = 0;
  local_100.st_birthtimespec.tv_nsec = 0;
  local_100.st_birthtimespec.tv_sec = 0;
  local_100.st_blocks = 0;
  local_100.st_size = 0;
  local_100.st_mtimespec.tv_nsec = 0;
  local_100.st_mtimespec.tv_sec = 0;
  local_100.st_ctimespec.tv_nsec = 0;
  local_100.st_ctimespec.tv_sec = 0;
  local_100.st_rdev = 0;
  local_100._28_4_ = 0;
  local_100.st_uid = 0;
  local_100.st_gid = 0;
  local_100.st_atimespec.tv_nsec = 0;
  local_100.st_atimespec.tv_sec = 0;
  local_100.st_ino = 0;
  local_100.st_dev = 0;
  local_100.st_mode = 0;
  local_100.st_nlink = 0;
  iVar1 = _stat(param_1,&local_100);
  if (iVar1 != 0) {
    piVar2 = ___error();
    _strerror(*piVar2);
    pcVar5 = "Could not stat %s: %s";
    uVar7 = 0x93;
LAB_10074ab94:
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                  ,uVar7,pcVar5);
    return 0;
  }
  if ((local_100.st_mode & 0xf000) == 0x8000) goto LAB_10074adcc;
  if ((local_100.st_mode & 0xf000) != 0x4000) {
    pcVar5 = "Could not delete %s: Not a regular file.";
    uVar7 = 0xb1;
    goto LAB_10074ab94;
  }
  pcVar5 = param_1;
  _opendir();
  if (pcVar5 == (char *)0x0) {
    piVar2 = ___error();
    _strerror(*piVar2);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                  ,0x4c,"Error reading directory %s: %s");
    sVar8 = 0;
    puVar3 = (undefined8 *)0x0;
  }
  else {
    sVar8 = 0xffffffffffffffff;
    do {
      pcVar4 = pcVar5;
      _readdir();
      sVar8 = sVar8 + 1;
    } while (pcVar4 != (char *)0x0);
    _closedir(pcVar5);
    if ((int)sVar8 != 0) {
      pcVar5 = param_1;
      _opendir();
      if (pcVar5 != (char *)0x0) {
        puVar3 = _calloc(sVar8,8);
        if (puVar3 != (undefined8 *)0x0) {
          pcVar4 = pcVar5;
          _readdir();
          sVar10 = sVar8;
          puVar9 = puVar3;
          while (pcVar4 != (char *)0x0) {
            if (sVar10 == 0) {
              FUN_1007b02e4("ERROR",
                            "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                            ,0x6d,"Contents of %s have been mutated");
              break;
            }
            pcVar4 = _strdup(pcVar4 + 0x15);
            *puVar9 = pcVar4;
            pcVar4 = pcVar5;
            _readdir();
            sVar10 = sVar10 - 1;
            puVar9 = puVar9 + 1;
          }
        }
        _closedir(pcVar5);
        goto LAB_10074ad04;
      }
      piVar2 = ___error();
      _strerror(*piVar2);
      FUN_1007b02e4("ERROR",
                    "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashFileUtils.c"
                    ,99,"Error reading directory %s: %s");
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_10074ad04:
  pcVar5 = _malloc(500);
  _snprintf(pcVar5,500,"%s/");
  sVar10 = _strlen(pcVar5);
  if ((puVar3 == (undefined8 *)0x0) || ((int)sVar8 == 0)) {
    _free(pcVar5);
    if (puVar3 != (undefined8 *)0x0) goto LAB_10074adc0;
  }
  else {
    uVar11 = sVar8 & 0xffffffff;
    uVar12 = uVar11;
    puVar9 = puVar3;
    do {
      pcVar4 = (char *)*puVar9;
      if ((pcVar4 != (char *)0x0) && (pcVar6 = pcVar4, FUN_10074aac4(), (int)pcVar6 != 0)) {
        _strlcpy(pcVar5 + sVar10,pcVar4,(long)(500 - (int)sVar10));
        FUN_10074ab1c(pcVar5,1);
      }
      puVar9 = puVar9 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    _free(pcVar5);
    puVar9 = puVar3;
    do {
      if ((void *)*puVar9 != (void *)0x0) {
        _free((void *)*puVar9);
      }
      puVar9 = puVar9 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
LAB_10074adc0:
    _free(puVar3);
  }
  if ((param_2 & 1) == 0) {
    return 1;
  }
LAB_10074adcc:
  FUN_10074aa04(param_1,0);
  return 1;
}


// rea decompile_all
// name: FUN_1006a2b04
// address: 0x1006a2b04
// body: available
// range: 0x1006a2b04-0x1006a2da7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a2da4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1006a2b04(undefined8 param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  void **ppvVar7;
  FILE *pFVar8;
  FILE *pFVar9;
  long lVar10;
  long lVar11;
  size_t sVar12;
  long lVar13;
  size_t sVar14;
  bool bVar15;
  uint local_1058 [2];
  void *local_1050;
  undefined8 uStack_1048;
  long local_1040;
  long local_48;
  
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  bVar4 = param_2[0x17];
  sVar14 = *(size_t *)(param_2 + 8);
  sVar12 = sVar14;
  if (-1 < (char)bVar4) {
    sVar12 = (ulong)bVar4;
  }
  bVar5 = param_3[0x17];
  sVar1 = *(size_t *)(param_3 + 8);
  if (-1 < (char)bVar5) {
    sVar1 = (ulong)bVar5;
  }
  if (sVar12 == sVar1) {
    pcVar3 = *(char **)param_2;
    if (-1 < (char)bVar4) {
      pcVar3 = param_2;
    }
    pcVar2 = *(char **)param_3;
    if (-1 < (char)bVar5) {
      pcVar2 = param_3;
    }
    iVar6 = _memcmp(pcVar3,pcVar2,sVar12);
    if (iVar6 != 0) goto LAB_1006a2b98;
  }
  else {
LAB_1006a2b98:
    if ((char)bVar4 < '\0') {
      FUN_100384eb8(&local_1050,*(undefined8 *)param_2,sVar14);
    }
    else {
      uStack_1048 = *(undefined8 *)(param_2 + 8);
      local_1050 = *(void **)param_2;
      local_1040 = *(long *)(param_2 + 0x10);
    }
    FUN_10069a9a4(local_1058,&local_1050,0);
    if (local_1040 < 0) {
      operator_delete(local_1050);
    }
    if (1 < local_1058[0]) {
      if (param_2[0x17] < '\0') {
        FUN_100384eb8(&local_1050,*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
      }
      else {
        uStack_1048 = *(undefined8 *)(param_2 + 8);
        local_1050 = *(void **)param_2;
        local_1040 = *(long *)(param_2 + 0x10);
      }
      ppvVar7 = &local_1050;
      FUN_100699a78(ppvVar7,0);
      if (local_1040 < 0) {
        operator_delete(local_1050);
      }
      if (ppvVar7 == (void **)0x0) {
        bVar15 = true;
        goto LAB_1006a2d6c;
      }
      pcVar3 = *(char **)param_2;
      if (-1 < param_2[0x17]) {
        pcVar3 = param_2;
      }
      pFVar8 = _fopen(pcVar3,"rb");
      if (pFVar8 != (FILE *)0x0) {
        pcVar3 = *(char **)param_3;
        if (-1 < param_3[0x17]) {
          pcVar3 = param_3;
        }
        pFVar9 = _fopen(pcVar3,"ab");
        if (pFVar9 != (FILE *)0x0) {
          _fseek(pFVar8,0,2);
          lVar10 = _ftell(pFVar8);
          lVar11 = _ftell(pFVar9);
          _fseek(pFVar8,0,0);
          _bzero(&local_1050,0x1000);
          do {
            iVar6 = _feof(pFVar8);
            if (((iVar6 != 0) || (sVar12 = _fread(&local_1050,1,0x1000,pFVar8), sVar12 == 0)) ||
               (iVar6 = _ferror(pFVar8), iVar6 != 0)) break;
            _fwrite(&local_1050,1,sVar12,pFVar9);
            iVar6 = _ferror(pFVar9);
          } while (iVar6 == 0);
          lVar13 = _ftell(pFVar9);
          bVar15 = lVar11 + lVar10 <= lVar13;
          if (lVar13 < lVar11 + lVar10) {
            iVar6 = _fileno(pFVar9);
            _ftruncate(iVar6,lVar11);
          }
          _fclose(pFVar8);
          _fclose(pFVar9);
          goto LAB_1006a2d6c;
        }
        _fclose(pFVar8);
      }
    }
  }
  bVar15 = false;
LAB_1006a2d6c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return bVar15;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


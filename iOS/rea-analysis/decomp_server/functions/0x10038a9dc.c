// rea decompile_all
// name: FUN_10038a9dc
// address: 0x10038a9dc
// body: available
// range: 0x10038a9dc-0x10038ab47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10038a9dc(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  void **ppvVar5;
  uint len;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  uLong uVar6;
  
  uVar4 = 0;
  ppvVar5 = local_60;
  FUN_10037f1a0(local_48,param_1,1,param_2);
  uVar3 = 0;
  FUN_100390428();
  if ((uVar3 & 1) == 0) {
    bVar1 = true;
    goto LAB_10038aaf0;
  }
  FUN_10037f388(local_60,param_1,1,param_2);
  FUN_100390428();
  if (((uVar4 & 1) == 0) || (FUN_100390584(), ppvVar5 == (void **)0x0)) {
LAB_10038aadc:
    bVar1 = false;
  }
  else {
    if (*(char *)ppvVar5 == '\0') {
      piVar7 = (int *)((long)ppvVar5 + 2);
LAB_10038aa64:
      iVar9 = *piVar7;
    }
    else {
      piVar7 = *(int **)((long)ppvVar5 + 10);
      if (piVar7 != (int *)0x0) goto LAB_10038aa64;
      iVar9 = 0;
    }
    thunk_FUN_10037edac();
    operator_delete(ppvVar5);
    ppvVar5 = local_48;
    FUN_100390584();
    bVar1 = false;
    if (ppvVar5 != (void **)0x0) {
      if (*(char *)ppvVar5 == '\0') {
        if (3 < (ulong)*(byte *)((long)ppvVar5 + 1)) {
          puVar8 = (uint *)((long)ppvVar5 + 2);
          len = *puVar8;
          if ((ulong)*(byte *)((long)ppvVar5 + 1) - 4 < (ulong)len) goto LAB_10038aad0;
          goto LAB_10038ab20;
        }
LAB_10038ab18:
        iVar2 = 0;
      }
      else {
        puVar8 = *(uint **)((long)ppvVar5 + 10);
        if ((puVar8 == (uint *)0x0) || (*(ulong *)((long)ppvVar5 + 2) < 4)) goto LAB_10038ab18;
        len = *puVar8;
        if (*(ulong *)((long)ppvVar5 + 2) - 4 < (ulong)len) {
LAB_10038aad0:
          thunk_FUN_10037edac();
          operator_delete(ppvVar5);
          goto LAB_10038aadc;
        }
LAB_10038ab20:
        uVar6 = _crc32(0,(Bytef *)(puVar8 + 1),len);
        iVar2 = (int)uVar6;
      }
      thunk_FUN_10037edac();
      operator_delete(ppvVar5);
      bVar1 = iVar9 == iVar2;
    }
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
LAB_10038aaf0:
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return bVar1;
}


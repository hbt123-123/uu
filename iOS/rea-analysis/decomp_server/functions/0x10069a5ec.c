// rea decompile_all
// name: FUN_10069a5ec
// address: 0x10069a5ec
// body: available
// range: 0x10069a5ec-0x10069a6ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10069a5ec(char *param_1,int param_2,undefined4 *param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  ulong uVar5;
  uint *puVar6;
  
  if (param_2 == 3) {
    pcVar1 = *(char **)param_1;
    if (-1 < param_1[0x17]) {
      pcVar1 = param_1;
    }
    iVar2 = _rmdir(pcVar1);
    if (iVar2 == 0) {
      uVar5 = 0;
      goto LAB_10069a67c;
    }
  }
  else {
    if (param_2 == 1) {
      if (param_3 == (undefined4 *)0x0) {
        return 0;
      }
      *param_3 = 0;
      FUN_10069f164();
      *(char **)(param_3 + 2) = param_1;
      return 0;
    }
    pcVar1 = *(char **)param_1;
    if (-1 < param_1[0x17]) {
      pcVar1 = param_1;
    }
    uVar3 = _unlink(pcVar1);
    uVar5 = (ulong)uVar3;
    if (uVar3 == 0) goto LAB_10069a67c;
  }
  piVar4 = ___error();
  FUN_10069ab84();
  if (((ulong)piVar4 & 1) == 0) {
    puVar6 = (uint *)___error();
    uVar5 = (ulong)*puVar6;
  }
  else {
    uVar5 = 0;
  }
LAB_10069a67c:
  FUN_100699888(uVar5,param_1,param_3,"mars_boost::filesystem::remove");
  if ((uVar5 & 1) != 0) {
    return 0;
  }
  return 1;
}


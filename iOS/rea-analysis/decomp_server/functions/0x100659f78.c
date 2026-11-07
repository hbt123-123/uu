// rea decompile_all
// name: FUN_100659f78
// address: 0x100659f78
// body: available
// range: 0x100659f78-0x10065a02b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100659f78(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 uVar5;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [48];
  
  FUN_1006612a4(auStack_60,param_3);
  lVar1 = 0;
  FUN_10065fa88();
  FUN_100643424(param_3,auStack_88);
  FUN_100644548(auStack_60);
  uVar5 = (undefined1)param_2[4];
  lVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = (ulong)*(byte *)(param_2 + 2);
  FUN_100658624();
  if ((uVar3 & 0xff) == 0) {
    if (lVar1 != 0 || lVar2 != 0) goto LAB_10065a008;
  }
  else if ((((uint)uVar3 & 0xff) == 1) || (*(long *)(uVar4 + 0x10) != 0)) goto LAB_10065a008;
  uVar5 = 0;
LAB_10065a008:
  *param_1 = lVar1;
  param_1[1] = lVar2;
  *(char *)(param_1 + 2) = (char)uVar3;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return;
}


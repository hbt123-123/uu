// rea decompile_all
// name: FUN_10037cbd0
// address: 0x10037cbd0
// body: available
// range: 0x10037cbd0-0x10037ccb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037cbd0(long *param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  param_1[2] = param_1[2] + param_2;
  uVar4 = param_1[8] - param_1[7];
  lVar1 = param_2 - uVar4;
  if (param_2 < uVar4 || lVar1 == 0) {
    param_1[7] = param_1[7] + param_2;
  }
  else {
    uVar5 = lVar1 + 0xfU & 0xfffffffffffffff0;
    lVar3 = param_1[3];
    uVar4 = param_1[1] - lVar3;
    if (uVar5 <= (ulong)(param_1[1] - lVar3)) {
      uVar4 = uVar5;
    }
    uVar5 = uVar4;
    if (0xf < uVar4) {
      lVar6 = -(uVar4 >> 4);
      do {
        FUN_100392ce0(param_1[4],*param_1 + lVar3,param_1[5],0x10);
        lVar3 = param_1[3] + 0x10;
        param_1[3] = lVar3;
        bVar2 = lVar6 != -1;
        lVar6 = lVar6 + 1;
      } while (bVar2);
      uVar5 = uVar4 & 0xf;
    }
    if (uVar5 == 0) {
      uVar5 = 0x10;
    }
    else {
      FUN_100392ce0(param_1[4],*param_1 + lVar3,param_1[5],uVar5);
      param_1[3] = param_1[3] + uVar5;
    }
    param_1[7] = (lVar1 - uVar4) + uVar5;
    param_1[8] = uVar5;
  }
  return;
}


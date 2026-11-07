// rea decompile_all
// name: FUN_1006bd0d8
// address: 0x1006bd0d8
// body: available
// range: 0x1006bd0d8-0x1006bd297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006bd0d8(ulong *param_1,undefined8 param_2,long param_3,ulong param_4,ulong param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar1 = param_4 + param_5;
  if (*param_1 == param_4) {
    uVar4 = param_1[2];
    uVar6 = (ulong)(uint)param_1[3];
    uVar7 = (ulong)*(uint *)((long)param_1 + 0x1c);
  }
  else {
    uVar4 = param_1[1];
    uVar2 = (uint)param_1[3];
    uVar6 = *param_1 - uVar4;
    iVar5 = (int)uVar6;
    *(int *)(param_1 + 3) = iVar5;
    *(uint *)((long)param_1 + 0x1c) = uVar2;
    param_1[1] = param_4 - uVar6;
    param_1[2] = uVar4;
    uVar7 = (ulong)uVar2;
    if (iVar5 - uVar2 < 8) {
      *(int *)((long)param_1 + 0x1c) = iVar5;
      uVar7 = uVar6;
    }
  }
  *param_1 = uVar1;
  if (uVar4 + (uVar7 & 0xffffffff) < uVar1 && param_4 < uVar4 + (uVar6 & 0xffffffff)) {
    uVar3 = (undefined4)uVar6;
    if ((long)(uVar1 - uVar4) <= (long)(uVar6 & 0xffffffff)) {
      uVar3 = (undefined4)(uVar1 - uVar4);
    }
    *(undefined4 *)((long)param_1 + 0x1c) = uVar3;
  }
  if (*(int *)(param_3 + 0x30) == 0) {
    *(int *)(param_1 + 4) = (int)uVar1 - (int)param_1[1];
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (8 < param_5) {
    while (8 < (long)param_5) {
      if (0x1ffffffe < param_5) {
        param_5 = 0x1fffffff;
      }
      uVar6 = param_4 + param_5;
      FUN_1006bc05c(param_1,param_2,param_3,param_4,uVar6);
      iVar5 = *(int *)(param_3 + 0x1c);
      if (iVar5 < 6) {
        if (iVar5 - 3U < 3) {
          FUN_1006cdaec(param_1,uVar6 - 8);
        }
        else if (iVar5 == 1) {
          FUN_1006c76a4(param_1,uVar6,param_6);
        }
        else if (iVar5 == 2) {
          FUN_1006be260(param_1,uVar6,param_6);
        }
      }
      else if (iVar5 - 6U < 4) {
        FUN_1006e0b44(param_1,uVar6 - 8,uVar6);
      }
      param_4 = uVar6;
      param_5 = uVar1 - uVar6;
    }
    *(int *)((long)param_1 + 0x24) = (int)uVar1 - (int)param_1[1];
    return;
  }
  return;
}


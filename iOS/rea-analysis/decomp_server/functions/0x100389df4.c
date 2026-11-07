// rea decompile_all
// name: FUN_100389df4
// address: 0x100389df4
// body: available
// range: 0x100389df4-0x10038a023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100389df4(ulong param_1,char *param_2,char *param_3,undefined8 param_4,ulong param_5)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 local_70 [16];
  
  bVar1 = (uint)param_5 < (uint)(byte)param_3[1];
  if (*param_3 != '\0') {
    bVar1 = (param_5 & 0xffffffff) < *(ulong *)(param_3 + 2);
  }
  uVar7 = (uint)(byte)param_3[1];
  if (*param_3 != '\0') {
    uVar7 = (uint)*(ulong *)(param_3 + 2);
  }
  uVar8 = (ulong)uVar7;
  uVar3 = (uint)(byte)param_2[1];
  if (*param_2 != '\0') {
    uVar3 = *(uint *)(param_2 + 2);
  }
  if ((int)param_4 != 0) {
    uVar4 = uVar3;
    FUN_10039280c();
    uVar3 = uVar4 + uVar3;
  }
  if (!bVar1) {
    FUN_10039280c();
    uVar8 = (ulong)((int)uVar8 + uVar7);
  }
  uVar7 = uVar3;
  FUN_10039280c();
  lVar2 = (uVar7 + uVar3) + uVar8;
  uVar8 = param_1;
  FUN_10038a0c4(param_1,lVar2);
  if ((uVar8 & 1) == 0) {
    FUN_100389b58(param_1,param_2,param_3,param_4,param_5);
  }
  else {
    if (*(long *)(param_1 + 0xb0) != 0) {
      if (*(uint *)(*(long *)(param_1 + 0xa8) + 4) < 2) {
        lVar6 = 0;
        uVar5 = 0;
      }
      else {
        lVar6 = *(long *)(param_1 + 0xa8) + 0xc;
        uVar5 = 0x10;
      }
      FUN_100392bb0(*(long *)(param_1 + 0xb0),lVar6,uVar5);
    }
    FUN_10037dd18(*(undefined8 *)(param_1 + 0x90),0);
    uVar9 = *(undefined8 *)(param_1 + 0x90);
    uVar5 = 4;
    FUN_100392a88(4);
    thunk_FUN_10037d6bc(uVar9,uVar5);
    *(undefined8 *)(param_1 + 0x88) = 4;
    if (*(long *)(param_1 + 0xb0) != 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x80) + 0x20);
      FUN_100392cb0(*(long *)(param_1 + 0xb0),lVar6 + 4,lVar6 + 4,4);
      if (0x100 < uVar3) {
        FUN_100392ef8(*(undefined8 *)(param_1 + 0xb0),&DAT_100ad13e8);
      }
    }
    if (bVar1) {
      FUN_10037d94c(*(undefined8 *)(param_1 + 0x90),param_3);
    }
    else {
      FUN_10037d90c(*(undefined8 *)(param_1 + 0x90),param_3);
    }
    if ((int)param_4 != 0) {
      FUN_10037d6bc(*(undefined8 *)(param_1 + 0x90),uVar3);
    }
    FUN_10037d90c(*(undefined8 *)(param_1 + 0x90),param_2);
    uVar8 = *(ulong *)(param_1 + 0x88);
    *(ulong *)(param_1 + 0x88) = uVar8 + lVar2;
    if (*(long *)(param_1 + 0xb0) != 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x80) + 0x20) + (uVar8 & 0xffffffff);
      FUN_100392cb0(*(long *)(param_1 + 0xb0),lVar6 + 4,lVar6 + 4,lVar2);
    }
    FUN_1003806f0(param_1);
    FUN_10037e0b8(local_70,param_5,uVar3,uVar8);
  }
  return;
}


// rea decompile_all
// name: FUN_1005a7038
// address: 0x1005a7038
// body: available
// range: 0x1005a7038-0x1005a7293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1005a7038(ulong *param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [32];
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  
  bVar1 = *(byte *)(param_2 + 4);
  if ((byte)param_1[4] == 2) {
    if (bVar1 != 2) {
      return 0;
    }
  }
  else {
    if (bVar1 == 2) {
      return 0;
    }
    if ((((byte)param_1[4] ^ bVar1) & 1) != 0) {
      return 0;
    }
  }
  if (*(char *)((long)param_1 + 0x21) == '\x03') {
    if (*(char *)((long)param_2 + 0x21) != '\x03') {
      return 0;
    }
  }
  else if (*(char *)((long)param_1 + 0x21) != *(char *)((long)param_2 + 0x21)) {
    return 0;
  }
  uVar6 = param_1[6];
  uVar4 = param_1[5];
  uVar10 = param_1[8];
  uVar8 = param_1[7];
  uVar7 = param_2[6];
  uVar5 = param_2[5];
  uVar11 = param_2[8];
  lVar9 = param_2[7];
  local_a0 = uVar5;
  uStack_98 = uVar7;
  local_90 = lVar9;
  uStack_88 = uVar11;
  local_80 = uVar4;
  uStack_78 = uVar6;
  local_70 = uVar8;
  uStack_68 = uVar10;
  if (uVar8 == 0) {
    if (lVar9 != 0) goto LAB_1005a7174;
    FUN_10007f314(&local_80,auStack_c0,&DAT_100aad070,&DAT_10083cc18);
    FUN_10007f314(&local_a0,auStack_c0,&DAT_100aad070,&DAT_10083cc18);
    FUN_100541944(uVar4,uVar6,0,uVar10);
LAB_1005a7228:
    uVar4 = *param_1;
    FUN_1005707f8(uVar4,*param_2);
    if ((uVar4 & 1) != 0) {
      uVar4 = param_1[1];
      FUN_1000094a4(uVar4,param_1[2],param_2[1],param_2[2]);
      if ((uVar4 & 1) != 0) {
        uVar4 = param_1[3];
        thunk_FUN_100511c8c(uVar4,param_2[3]);
        uVar2 = (uint)uVar4;
        goto LAB_1005a7270;
      }
    }
  }
  else if (lVar9 == 0) {
LAB_1005a7174:
    FUN_10007f314(&local_80,auStack_c0,&DAT_100aad070,&DAT_10083cc18);
    FUN_10007f314(&local_a0,auStack_c0,&DAT_100aad070,&DAT_10083cc18);
    FUN_100541944(uVar4,uVar6,uVar8,uVar10);
    FUN_100541944(uVar5,uVar7,lVar9,uVar11);
  }
  else {
    FUN_10007f314(&local_80,auStack_c0,&DAT_100aad070,&DAT_10083cc18);
    FUN_10007f314(&local_a0,auStack_c0,&DAT_100aad070,&DAT_10083cc18);
    uVar3 = uVar4;
    FUN_1005a7724(uVar4,uVar6,uVar8,uVar10,uVar5,uVar7,lVar9,uVar11);
    FUN_100541944(uVar5,uVar7,lVar9,uVar11);
    FUN_100541944(uVar4,uVar6,uVar8,uVar10);
    if ((uVar3 & 1) != 0) goto LAB_1005a7228;
  }
  uVar2 = 0;
LAB_1005a7270:
  return uVar2 & 1;
}


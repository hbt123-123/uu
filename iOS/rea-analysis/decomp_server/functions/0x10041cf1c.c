// rea decompile_all
// name: FUN_10041cf1c
// address: 0x10041cf1c
// body: available
// range: 0x10041cf1c-0x10041d117 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010041d08c) */

void FUN_10041cf1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x21;
  code *pcVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  ulong local_70;
  
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_70 = 0xf000000000000000;
  uVar11 = *(ulong *)(param_1 + 0x30);
  lVar10 = param_1;
  if ((uVar11 & 0x3000000000000000) != 0x3000000000000000 && (uVar11 & 0x2000000000000000) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    FUN_10012ac6c(uVar2,uVar6,uVar1,uVar5);
    lVar10 = 0;
    FUN_1004337b0(0,0,0,0,0xf000000000000000);
    local_80 = uVar1 & 0xffffffff;
    local_90 = uVar2;
    uStack_88 = uVar6;
    uStack_78 = uVar5;
    local_70 = uVar11 & 0xdfffffffffffffff;
  }
  pcVar13 = *(code **)(param_4 + 0x198);
  FUN_10042ebf4();
  (*pcVar13)(&local_90,&DAT_1009be620,lVar10,param_3,param_4);
  uVar9 = local_70;
  uVar6 = uStack_78;
  uVar1 = local_80;
  uVar5 = uStack_88;
  uVar2 = local_90;
  if ((unaff_x21 == 0) && (local_70 >> 0x3c < 0xf)) {
    if ((uVar11 & 0x3000000000000000) == 0x3000000000000000) {
      FUN_100008184(uStack_78,local_70);
    }
    else {
      pcVar13 = *(code **)(param_4 + 8);
      FUN_100008184(uStack_78,local_70);
      (*pcVar13)(param_3,param_4);
    }
    FUN_1004337b0(local_90,uStack_88,local_80,uStack_78,local_70);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    uVar12 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    *(ulong *)(param_1 + 0x20) = uVar1 & 0xffffffff;
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    *(ulong *)(param_1 + 0x30) = uVar9 | 0x2000000000000000;
    FUN_1000407a8(uVar3,uVar7,uVar4,uVar8,uVar12);
  }
  else {
    FUN_1004337b0(local_90,uStack_88,local_80,uStack_78,local_70);
  }
  return;
}


// rea decompile_all
// name: FUN_1004522e4
// address: 0x1004522e4
// body: available
// range: 0x1004522e4-0x100452563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001004524a4) */

void FUN_1004522e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x21;
  code *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  byte local_128 [64];
  byte local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_80 = 0;
  uStack_78 = 0xf000000000000000;
  uVar11 = *(ulong *)(param_1 + 0x48);
  uVar1 = *(ulong *)(param_1 + 0x58) & 0x3000000000000000;
  lVar7 = param_1;
  if (uVar1 == 0) {
    local_b0 = *(undefined8 *)(param_1 + 0x50);
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    bVar2 = *(byte *)(param_1 + 0x38);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    bVar3 = *(byte *)(param_1 + 0x28);
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    uStack_d8 = *(undefined8 *)(param_1 + 0x28);
    local_c8 = *(undefined8 *)(param_1 + 0x38);
    local_e0 = uVar12;
    local_d0 = uVar9;
    local_c0 = uVar8;
    uStack_b8 = uVar11;
    uStack_a8 = *(ulong *)(param_1 + 0x58);
    FUN_10045e614(&local_e0,local_128);
    lVar7 = 0;
    FUN_100433888(0,0,0,0,0,0xf000000000000000);
    uStack_98 = (ulong)bVar3 & 1;
    uStack_88 = (ulong)bVar2 & 1;
    local_a0 = uVar12;
    local_90 = uVar9;
    local_80 = uVar8;
    uStack_78 = uVar11;
  }
  pcVar10 = *(code **)(param_4 + 0x198);
  FUN_10046019c();
  (*pcVar10)(&local_a0,&DAT_1009c35e0,lVar7,param_3,param_4);
  uVar6 = uStack_78;
  uVar12 = local_80;
  uVar5 = uStack_88;
  uVar9 = local_90;
  uVar4 = uStack_98;
  uVar8 = local_a0;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if ((uVar1 & uVar11) == 0x3000000000000000) {
      FUN_100008184(local_80,uStack_78);
    }
    else {
      pcVar10 = *(code **)(param_4 + 8);
      FUN_100008184(local_80,uStack_78);
      (*pcVar10)(param_3,param_4);
    }
    FUN_100433888(local_a0,uStack_98,local_90,uStack_88,local_80,uStack_78);
    local_128[0] = (byte)uVar4 & 1;
    local_e8 = (byte)uVar5 & 1;
    uStack_d8 = *(undefined8 *)(param_1 + 0x28);
    local_e0 = *(undefined8 *)(param_1 + 0x20);
    local_c8 = *(undefined8 *)(param_1 + 0x38);
    local_d0 = *(undefined8 *)(param_1 + 0x30);
    uStack_b8 = *(undefined8 *)(param_1 + 0x48);
    local_c0 = *(undefined8 *)(param_1 + 0x40);
    uStack_a8 = *(undefined8 *)(param_1 + 0x58);
    local_b0 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x20) = uVar8;
    *(byte *)(param_1 + 0x28) = local_128[0];
    *(undefined8 *)(param_1 + 0x30) = uVar9;
    *(byte *)(param_1 + 0x38) = local_e8;
    *(undefined8 *)(param_1 + 0x40) = uVar12;
    *(ulong *)(param_1 + 0x48) = uVar6 & 0xcfffffffffffffff;
    *(undefined8 *)(param_1 + 0x58) = 0;
    FUN_100040bb4(&local_e0,&DAT_100a9ff68,&DAT_10082b0d0);
  }
  else {
    FUN_100433888(local_a0,uStack_98,local_90,uStack_88,local_80,uStack_78);
  }
  return;
}


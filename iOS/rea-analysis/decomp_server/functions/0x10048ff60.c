// rea decompile_all
// name: FUN_10048ff60
// address: 0x10048ff60
// body: available
// range: 0x10048ff60-0x1004901db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100490150) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10048ff60(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  long unaff_x21;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  byte local_130 [80];
  long local_e0;
  long lStack_d8;
  long local_d0;
  long local_c8;
  ulong local_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  ulong local_80;
  long lStack_78;
  ulong local_70;
  
  local_70 = 0;
  lStack_88 = 0;
  local_90 = 0;
  lStack_78 = 0;
  local_80 = 0;
  uVar8 = param_1[4];
  uVar9 = param_1[6];
  uVar7 = uVar8 & uVar9 & 0x3000000000000000;
  plVar4 = param_1;
  if ((uVar7 != 0x3000000000000000) &&
     (auVar11._8_8_ = uVar8, auVar11._0_8_ = uVar9, auVar11 = NEON_ushl(auVar11,_DAT_100825d30,8),
     uVar10 = CONCAT44(auVar11._8_4_,auVar11._0_4_) & 0x100000006,
     (byte)((byte)uVar10 | (byte)(uVar10 >> 0x20)) == 1)) {
    lVar1 = *param_1;
    lVar2 = param_1[1];
    bVar3 = *(byte *)(param_1 + 2);
    local_d0 = param_1[2];
    lVar5 = param_1[3];
    local_a0 = param_1[8];
    lStack_98 = param_1[9];
    local_e0 = lVar1;
    lStack_d8 = lVar2;
    local_c8 = lVar5;
    local_c0 = uVar8;
    lStack_b8 = param_1[5];
    uStack_b0 = uVar9;
    lStack_a8 = param_1[7];
    FUN_100493064(&local_e0,local_130);
    plVar4 = (long *)0x0;
    FUN_100497728(0,0,0,0,0);
    local_80 = (ulong)bVar3 & 1;
    local_90 = lVar1;
    lStack_88 = lVar2;
    lStack_78 = lVar5;
    local_70 = uVar8 & 0xdfffffffffffffff;
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  FUN_1004948d0();
  (*pcVar6)(&local_90,&DAT_1009c6758,plVar4,param_3,param_4);
  uVar9 = local_70;
  lVar5 = lStack_78;
  uVar8 = local_80;
  lVar2 = lStack_88;
  lVar1 = local_90;
  if ((unaff_x21 == 0) && (local_90 != 0)) {
    if (uVar7 == 0x3000000000000000) {
      _swift_bridgeObjectRetain();
      FUN_100008184(lVar5,uVar9);
    }
    else {
      pcVar6 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain();
      FUN_100008184(lVar5,uVar9);
      (*pcVar6)(param_3,param_4);
    }
    FUN_100497728(local_90,lStack_88,local_80,lStack_78,local_70);
    local_130[0] = (byte)uVar8 & 1;
    lStack_b8 = param_1[5];
    local_c0 = param_1[4];
    lStack_a8 = param_1[7];
    uStack_b0 = param_1[6];
    lStack_98 = param_1[9];
    local_a0 = param_1[8];
    lStack_d8 = param_1[1];
    local_e0 = *param_1;
    local_c8 = param_1[3];
    local_d0 = param_1[2];
    *param_1 = lVar1;
    param_1[1] = lVar2;
    *(byte *)(param_1 + 2) = local_130[0];
    param_1[3] = lVar5;
    param_1[4] = uVar9 & 0xcfffffffffffffff | 0x2000000000000000;
    param_1[6] = 0;
    FUN_100040bb4(&local_e0,&DAT_100aa0b98,&DAT_10082dd80);
  }
  else {
    FUN_100497728(local_90,lStack_88,local_80,lStack_78,local_70);
  }
  return;
}


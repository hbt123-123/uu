// rea decompile_all
// name: FUN_10058f9d0
// address: 0x10058f9d0
// body: available
// range: 0x10058f9d0-0x10058fbcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10058f9d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_270 [24];
  ulong local_258;
  long lStack_250;
  long local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined8 uStack_17f;
  undefined1 auStack_168 [24];
  long local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  _swift_beginAccess(param_3 + 0x28,auStack_168,0,0);
  uStack_108 = *(undefined8 *)(param_3 + 0x70);
  local_110 = *(undefined8 *)(param_3 + 0x68);
  uStack_f8 = *(undefined8 *)(param_3 + 0x80);
  uStack_100 = *(undefined8 *)(param_3 + 0x78);
  local_f0 = *(undefined8 *)(param_3 + 0x88);
  uStack_e8 = (undefined1)*(undefined8 *)(param_3 + 0x90);
  uStack_df = *(undefined8 *)(param_3 + 0x99);
  uStack_e7 = (undefined7)*(undefined8 *)(param_3 + 0x91);
  uStack_e0 = (undefined1)((ulong)*(undefined8 *)(param_3 + 0x91) >> 0x38);
  uStack_148 = *(undefined8 *)(param_3 + 0x30);
  local_150 = *(long *)(param_3 + 0x28);
  uStack_138 = *(ulong *)(param_3 + 0x40);
  uStack_140 = *(undefined8 *)(param_3 + 0x38);
  uStack_128 = *(undefined8 *)(param_3 + 0x50);
  local_130 = *(undefined8 *)(param_3 + 0x48);
  uStack_118 = *(ulong *)(param_3 + 0x60);
  uStack_120 = *(undefined8 *)(param_3 + 0x58);
  iVar6 = (int)&local_d0;
  local_d0 = local_150;
  uStack_c8 = uStack_148;
  uStack_c0 = uStack_140;
  local_b8 = uStack_138;
  local_b0 = local_130;
  uStack_a8 = uStack_128;
  uStack_a0 = uStack_120;
  local_98 = uStack_118;
  local_90 = local_110;
  uStack_88 = uStack_108;
  uStack_80 = uStack_100;
  uStack_78 = uStack_f8;
  local_70 = local_f0;
  uStack_68 = uStack_e8;
  uStack_67 = uStack_e7;
  uStack_60 = uStack_e0;
  uStack_5f = uStack_df;
  FUN_100276094();
  uVar11 = local_b8;
  if (iVar6 == 1) {
    return;
  }
  uStack_1a8 = uStack_108;
  local_1b0 = local_110;
  uStack_198 = uStack_f8;
  uStack_1a0 = uStack_100;
  uStack_188 = uStack_e8;
  local_190 = local_f0;
  uStack_17f = uStack_df;
  uStack_187 = uStack_e7;
  uStack_180 = uStack_e0;
  uStack_1e8 = uStack_148;
  local_1f0 = local_150;
  uStack_1d8 = uStack_138;
  uStack_1e0 = uStack_140;
  uStack_1c8 = uStack_128;
  local_1d0 = local_130;
  uStack_1b8 = uStack_118;
  uStack_1c0 = uStack_120;
  FUN_1005a83a4(&local_1f0,auStack_270);
  FUN_100510c38();
  uVar4 = local_90;
  uVar9 = local_98;
  uVar3 = uStack_a0;
  uVar2 = uStack_a8;
  if ((uVar11 & 1) != 0) {
    if (local_98 != 0) {
      FUN_100008184(uStack_a8,uStack_a0);
      uVar11 = uVar9;
      _swift_bridgeObjectRetain();
      FUN_100510c38();
      FUN_100541944(uVar2,uVar3,uVar9,uVar4);
      if ((uVar11 & 1) == 0) goto LAB_10058fb6c;
    }
    lVar7 = local_d0;
    FUN_10056a264();
    lVar10 = *(long *)(lVar7 + 0x10);
    uVar11 = 0xffffffffffffffff;
    lVar8 = lVar7 + 0x20;
    do {
      if (uVar11 - lVar10 == -1) {
        _swift_bridgeObjectRelease(lVar7);
        FUN_100040bb4(&local_150,&DAT_100aab4b0,&DAT_100837c20);
        return;
      }
      uVar11 = uVar11 + 1;
      if (*(ulong *)(lVar7 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10058fbd0);
        (*pcVar5)();
      }
      FUN_1000b142c(lVar8,auStack_270);
      lVar1 = lStack_250;
      uVar9 = local_258;
      FUN_10003f030(auStack_270,local_258);
      (**(code **)(lVar1 + 0x20))(uVar9,lVar1);
      FUN_10003f094(auStack_270);
      lVar8 = lVar8 + 0x28;
    } while ((uVar9 & 1) != 0);
    _swift_bridgeObjectRelease(lVar7);
  }
LAB_10058fb6c:
  FUN_100040bb4(&local_150,&DAT_100aab4b0,&DAT_100837c20);
  return;
}


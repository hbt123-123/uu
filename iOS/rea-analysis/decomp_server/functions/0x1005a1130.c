// rea decompile_all
// name: FUN_1005a1130
// address: 0x1005a1130
// body: available
// range: 0x1005a1130-0x1005a1317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005a1130(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long unaff_x21;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  cVar3 = *(char *)(param_1 + 0x10);
  if ((long)cVar3 != 0xc) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyySuF(*(undefined8 *)(&DAT_10083cc80 + (long)cVar3 * 8));
  }
  _swift_beginAccess(param_1 + 0x18,auStack_80,0,0);
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    __ss6HasherV8_combineyySuF(4);
    uStack_108 = param_2[5];
    local_110 = param_2[4];
    uStack_f8 = param_2[7];
    uStack_100 = param_2[6];
    local_f0 = param_2[8];
    uStack_128 = param_2[1];
    local_130 = *param_2;
    uStack_118 = param_2[3];
    uStack_120 = param_2[2];
    FUN_100008184(uVar1,uVar2);
    _swift_bridgeObjectRetain(lVar4);
    FUN_10059e3f8(&local_130,uVar1,uVar2,lVar4,uVar5);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
      unaff_x21 = 0;
    }
    FUN_100541944(uVar1,uVar2,lVar4,uVar5);
    param_2[5] = uStack_108;
    param_2[4] = local_110;
    param_2[7] = uStack_f8;
    param_2[6] = uStack_100;
    param_2[8] = local_f0;
    param_2[1] = uStack_128;
    *param_2 = local_130;
    param_2[3] = uStack_118;
    param_2[2] = uStack_120;
  }
  _swift_beginAccess(param_1 + 0x38,auStack_98,0,0);
  lVar4 = *(long *)(param_1 + 0x48);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x50);
    __ss6HasherV8_combineyySuF(5);
    uStack_b8 = param_2[5];
    local_c0 = param_2[4];
    uStack_a8 = param_2[7];
    uStack_b0 = param_2[6];
    local_a0 = param_2[8];
    uStack_d8 = param_2[1];
    local_e0 = *param_2;
    uStack_c8 = param_2[3];
    uStack_d0 = param_2[2];
    FUN_100008184(uVar1,uVar2);
    _swift_bridgeObjectRetain(lVar4);
    FUN_10059e3f8(&local_e0,uVar1,uVar2,lVar4,uVar5);
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
    }
    FUN_100541944(uVar1,uVar2,lVar4,uVar5);
    param_2[5] = uStack_b8;
    param_2[4] = local_c0;
    param_2[7] = uStack_a8;
    param_2[6] = uStack_b0;
    param_2[8] = local_a0;
    param_2[1] = uStack_d8;
    *param_2 = local_e0;
    param_2[3] = uStack_c8;
    param_2[2] = uStack_d0;
  }
  return;
}


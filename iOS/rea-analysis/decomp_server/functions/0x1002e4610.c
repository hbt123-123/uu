// rea decompile_all
// name: FUN_1002e4610
// address: 0x1002e4610
// body: available
// range: 0x1002e4610-0x1002e48e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_1002e4610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long alStack_160 [6];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined8 local_90 [3];
  undefined8 local_78;
  undefined **ppuStack_70;
  
  local_120 = param_9;
  lVar4 = 0;
  local_130 = param_3;
  local_128 = param_4;
  local_118 = param_5;
  local_110 = param_8;
  local_100 = param_6;
  local_f0 = param_2;
  local_e4 = param_7;
  __s10Foundation4UUIDVMa();
  lVar15 = (long)&local_130 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_f8 = lVar15;
  __sSqMa(0,param_10);
  lVar14 = *(long *)(lVar4 + -8);
  lVar15 = lVar15 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_1002eec0c(0,param_10,param_11);
  local_108 = *(long *)(lVar5 + -8);
  uVar8 = *(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = lVar15 - uVar8;
  lVar11 = lVar13 - uVar8;
  FUN_1000b142c(param_1,local_90);
  (**(code **)(lVar14 + 0x10))(lVar15,local_130,lVar4);
  FUN_1000b142c(local_128,auStack_b8);
  *(undefined8 *)(lVar11 + -0x10) = param_10;
  *(undefined8 *)(lVar11 + -8) = param_11;
  uVar3 = local_110;
  uVar2 = local_118;
  uVar1 = local_120;
  FUN_1002e33f4(lVar11,local_90,0x544547,0xe300000000000000,lVar15,auStack_b8,local_118,local_110,
                local_120);
  uVar6 = 0;
  FUN_1003009a8();
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar12 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar7 = 0;
  local_128 = uVar6;
  FUN_100338154();
  ppuStack_70 = &PTR_PTR_1009b2868;
  local_90[0] = uVar12;
  local_78 = uVar7;
  FUN_10007f314(local_100,auStack_b8,&DAT_100a83d18,0x1008188a0);
  _swift_bridgeObjectRetain(uVar2);
  FUN_10004090c(uVar3,uVar1);
  uVar2 = local_f0;
  FUN_1002eeca4(local_f0,auStack_e0);
  lVar4 = local_108;
  _swift_retain(uVar12);
  lVar15 = local_f8;
  __s10Foundation4UUIDVACycfC(local_f8);
  (**(code **)(lVar4 + 0x10))(lVar13,lVar11,lVar5);
  _swift_retain();
  *(long *)(lVar11 + -0x18) = lVar5;
  *(undefined ***)(lVar11 + -0x10) = &PTR_PTR_1009aebd8;
  uVar1 = local_128;
  *(undefined ***)(lVar11 + -0x28) = &PTR_PTR_1009ae808;
  *(undefined8 *)(lVar11 + -0x20) = uVar1;
  *(long *)(lVar11 + -0x30) = unaff_x20;
  FUN_1002ffe4c(lVar15,lVar13,uVar2,uVar9,uVar10,local_90,auStack_b8,local_e4);
  _swift_release();
  if (*(char *)(unaff_x20 + 0x29) == '\x01') {
    FUN_1002e6b44(lVar15,0);
  }
  (**(code **)(lVar4 + 8))(lVar11,lVar5);
  return lVar15;
}


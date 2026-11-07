// rea decompile_all
// name: FUN_1002e48e8
// address: 0x1002e48e8
// body: available
// range: 0x1002e48e8-0x1002e4a9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1 *
FUN_1002e48e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long alStack_140 [6];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [40];
  undefined1 auStack_e0 [40];
  undefined8 local_b8 [3];
  undefined8 local_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [24];
  long local_78;
  undefined8 uStack_70;
  
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  puVar5 = auStack_110 + -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0;
  FUN_1003009a8();
  FUN_1000b142c(param_1,auStack_90);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar3 = 0;
  FUN_100338154();
  ppuStack_98 = &PTR_PTR_1009b2868;
  local_b8[0] = uVar8;
  local_a0 = uVar3;
  FUN_10007f314(param_3,auStack_e0,&DAT_100a83d18,0x1008188a0);
  FUN_1002eeca4(param_2,auStack_108);
  _swift_retain(uVar8);
  __s10Foundation4UUIDVACycfC(puVar5);
  puVar4 = auStack_90;
  FUN_1000ce034(puVar4,local_78);
  lVar1 = (long)puVar5 - (*(long *)(*(long *)(local_78 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(local_78 + -8) + 0x10))(lVar1,puVar4,local_78);
  _swift_retain();
  *(long *)(lVar1 + -0x18) = local_78;
  *(undefined8 *)(lVar1 + -0x10) = uStack_70;
  *(undefined ***)(lVar1 + -0x28) = &PTR_PTR_1009ae808;
  *(undefined8 *)(lVar1 + -0x20) = uVar2;
  *(long *)(lVar1 + -0x30) = unaff_x20;
  FUN_1002ffe4c(puVar5,lVar1,param_2,uVar6,uVar7,local_b8,auStack_e0,param_4);
  _swift_release();
  FUN_10003f094(auStack_90);
  if (*(char *)(unaff_x20 + 0x29) == '\x01') {
    FUN_1002e6b44(puVar5,0);
  }
  return puVar5;
}


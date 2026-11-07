// rea decompile_all
// name: FUN_1002e3c54
// address: 0x1002e3c54
// body: available
// range: 0x1002e3c54-0x1002e3dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 *
FUN_1002e3c54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
             undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  code *pcVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 auStack_110 [2];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [24];
  long local_78;
  undefined **ppuStack_70;
  
  local_e8 = param_11;
  local_f0 = param_12;
  lVar5 = 0;
  local_100 = param_5;
  local_f8 = param_2;
  local_e0 = param_3;
  local_d8 = param_6;
  __sSqMa(0,param_13);
  lVar9 = *(long *)(lVar5 + -8);
  lVar10 = (long)&local_100 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_1002eec0c(0,param_13,param_14);
  lVar11 = *(long *)(lVar6 + -8);
  lVar12 = lVar10 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000b142c(param_1,auStack_90);
  (**(code **)(lVar9 + 0x10))(lVar10,param_4,lVar5);
  FUN_1000b142c(local_100,auStack_b8);
  *(undefined8 *)(lVar12 + -0x10) = param_13;
  *(undefined8 *)(lVar12 + -8) = param_14;
  uVar4 = local_d8;
  uVar3 = local_e0;
  uVar2 = local_e8;
  uVar1 = local_f0;
  FUN_1002e33f4(lVar12,auStack_90,local_f8,local_e0,lVar10,auStack_b8,local_d8,local_e8,local_f0);
  ppuStack_70 = &PTR_PTR_1009aebd8;
  local_78 = lVar6;
  FUN_1000efc08(auStack_90);
  (**(code **)(lVar11 + 0x10))();
  pcVar8 = *(code **)(*unaff_x20 + 0x100);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar3);
  FUN_10004090c(uVar2,uVar1);
  puVar7 = auStack_90;
  (*pcVar8)(puVar7,param_7,param_8,param_9);
  (**(code **)(lVar11 + 8))(lVar12,lVar6);
  FUN_10003f094(auStack_90);
  return puVar7;
}


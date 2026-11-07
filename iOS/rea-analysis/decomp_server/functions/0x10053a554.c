// rea decompile_all
// name: FUN_10053a554
// address: 0x10053a554
// body: available
// range: 0x10053a554-0x10053a6f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010053a6d4) */

undefined1  [16] FUN_10053a554(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  long local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  uVar3 = *(long *)(*(long *)(param_2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar2 = (long)&local_110 - uVar3;
  lVar5 = lVar2 - uVar3;
  pcVar6 = *(code **)(*(long *)(param_2 + -8) + 0x10);
  (*pcVar6)(lVar5);
  FUN_10055d5b4(&local_a8,lVar5,param_1,param_2,param_3);
  (*pcVar6)(lVar2);
  plVar1 = &local_110;
  _swift_dynamicCast(plVar1,lVar2,param_2,&DAT_1009d2420,6);
  if ((int)plVar1 == 0) {
    (**(code **)(param_3 + 0x48))(&local_a8,&DAT_1009d1ef8,&PTR_PTR_1009d1f20,param_2,param_3);
  }
  else {
    FUN_1004f79f4(&local_a8);
    FUN_100006cdc(local_110,uStack_108);
    _swift_release(local_100);
  }
  lVar5 = local_a8;
  uVar4 = *(undefined8 *)(local_a8 + 0x10);
  _swift_bridgeObjectRetain(local_a8);
  lVar2 = lVar5 + 0x20;
  __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(lVar2,uVar4);
  _swift_bridgeObjectRelease(lVar5);
  uStack_e8 = uStack_80;
  local_f0 = local_88;
  uStack_d8 = uStack_70;
  uStack_e0 = uStack_78;
  uStack_c8 = uStack_60;
  local_d0 = local_68;
  local_c0 = local_58;
  uStack_108 = uStack_a0;
  local_110 = local_a8;
  uStack_f8 = uStack_90;
  local_100 = local_98;
  FUN_10053ac24(&local_110);
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = lVar2;
  return auVar7;
}


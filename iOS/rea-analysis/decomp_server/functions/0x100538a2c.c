// rea decompile_all
// name: FUN_100538a2c
// address: 0x100538a2c
// body: available
// range: 0x100538a2c-0x100538bcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100538a2c(uint param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long *unaff_x20;
  ulong unaff_x21;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78 [3];
  long *local_60;
  long lStack_58;
  
  lVar4 = (long)&local_a0 - (*(long *)(*(long *)(param_2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_2 + -8) + 0x10))(lVar4);
  puVar1 = &DAT_100aaa138;
  FUN_100004bb4(&DAT_100aaa138,&DAT_1008358e0);
  puVar2 = &local_a0;
  _swift_dynamicCast(puVar2,lVar4,param_2,puVar1,6);
  if ((int)puVar2 == 0) {
    local_80 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    FUN_100040bb4(&local_a0,&DAT_100aaa140,&DAT_100837af0);
    puVar1 = &DAT_100aaa108;
    FUN_100004bb4(&DAT_100aaa108,&DAT_1008358d0);
    FUN_100538bcc(local_78,param_1 & 0x1010101,param_2,puVar1,param_3,&PTR_PTR_1009d1680);
    uVar3 = unaff_x21;
    if (unaff_x21 == 0) {
      unaff_x20 = *(long **)(local_78[0] + 0x10);
      uVar3 = local_78[0] + 0x20;
      __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(uVar3,unaff_x20);
      _swift_bridgeObjectRelease(local_78[0]);
    }
  }
  else {
    FUN_1000a0074(&local_a0,local_78);
    unaff_x20 = local_78;
    FUN_10003f030(unaff_x20,local_60);
    uVar3 = (ulong)(param_1 & 0x1010101);
    (**(code **)(lStack_58 + 8))(uVar3,local_60,lStack_58);
    if (unaff_x21 == 0) {
      FUN_10003f094(local_78);
      unaff_x20 = local_60;
    }
    else {
      FUN_10003f094(local_78);
      uVar3 = unaff_x21;
    }
  }
  auVar5._8_8_ = unaff_x20;
  auVar5._0_8_ = uVar3;
  return auVar5;
}


// rea decompile_all
// name: FUN_100633858
// address: 0x100633858
// body: available
// range: 0x100633858-0x100633a2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100633858(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x20;
  long unaff_x21;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long local_78;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  long local_50;
  long lStack_48;
  
  iVar3 = (int)&local_d0;
  puVar7 = &local_d0;
  _swift_beginAccess(unaff_x20 + 0x20,auStack_a8,0,0);
  FUN_1000b142c(unaff_x20 + 0x20,auStack_90);
  puVar4 = &DAT_100ab7f00;
  FUN_100004bb4(&DAT_100ab7f00,&DAT_100848d68);
  puVar5 = &DAT_100ab8260;
  FUN_100004bb4(&DAT_100ab8260,&DAT_100849458);
  _swift_dynamicCast(&local_d0,auStack_90,puVar4,puVar5,6);
  if (iVar3 == 0) {
    local_b0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    FUN_100040bb4(&local_d0,&DAT_100ab8268,&DAT_100849460);
    FUN_100634d98();
    _swift_allocError(&DAT_1009e19f0,puVar7,0,0);
    _swift_willThrow();
  }
  else {
    FUN_1000a0074(&local_d0,auStack_68);
    lVar2 = lStack_48;
    lVar1 = local_50;
    FUN_1000ce034(auStack_68,local_50);
    (**(code **)(lVar2 + 0x10))(param_1,lVar1,lVar2);
    if (unaff_x21 == 0) {
      FUN_10003f030(auStack_68,local_50);
      local_78 = local_50;
      local_70 = *(undefined8 *)(lStack_48 + 8);
      FUN_1000efc08(auStack_90);
      (**(code **)(*(long *)(local_50 + -8) + 0x10))();
      _swift_beginAccess(unaff_x20 + 0x20,&local_d0,0x21,0);
      FUN_10003f094(unaff_x20 + 0x20);
      FUN_1000a0074(auStack_90,unaff_x20 + 0x20);
      _swift_endAccess(&local_d0);
      _swift_beginAccess(unaff_x20 + 0x48,auStack_90,1,0);
      uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
      *(undefined **)(unaff_x20 + 0x48) = PTR___swiftEmptyArrayStorage_100995ea0;
      _swift_bridgeObjectRelease(uVar6);
    }
    FUN_10003f094(auStack_68);
  }
  return;
}


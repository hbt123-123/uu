// rea decompile_all
// name: FUN_1003c1ac4
// address: 0x1003c1ac4
// body: available
// range: 0x1003c1ac4-0x1003c1c2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c1ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar4;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  puVar1 = &DAT_100a8c7c8;
  FUN_100004bb4(&DAT_100a8c7c8,&DAT_100822520);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  lVar2 = 0;
  FUN_1003c5f68();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = param_1;
  (**(code **)(extraout_x12 + 0x30))(param_1,1);
  if ((int)uVar3 == 1) {
    FUN_100040bb4(param_1,&DAT_100a8c7c8,&DAT_100822520);
    FUN_1003e8058(puVar4,param_2,param_3);
    _swift_bridgeObjectRelease(param_3);
    FUN_100040bb4(puVar4,&DAT_100a8c7c8,&DAT_100822520);
  }
  else {
    FUN_1000823d8(param_1,lVar2,FUN_1003c5f68);
    uVar3 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar3);
    local_58 = *unaff_x20;
    FUN_1003a68b8(lVar2,param_2,param_3,uVar3);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = local_58;
  }
  return;
}


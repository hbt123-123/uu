// rea decompile_all
// name: FUN_1003eae24
// address: 0x1003eae24
// body: available
// range: 0x1003eae24-0x1003eaf1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1003eae24(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long extraout_x12;
  uint uVar3;
  long lVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(undefined8 *)(*(long *)(param_2 + -8) + 0x40),param_1,param_1);
  lVar4 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar4);
  puVar1 = &DAT_100a8ad78;
  FUN_100004bb4(&DAT_100a8ad78,&DAT_1008236d0);
  puVar2 = &local_80;
  _swift_dynamicCast(puVar2,lVar4,param_2,puVar1,6);
  if (((ulong)puVar2 & 1) == 0) {
    local_60 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    FUN_10039b638(&local_80);
    uVar3 = 0;
  }
  else {
    FUN_1000a0074(&local_80,auStack_58);
    FUN_10003f030(auStack_58,local_40);
    (**(code **)(lStack_38 + 8))(local_40,lStack_38);
    uVar3 = (uint)local_40;
    FUN_10003f094(auStack_58);
  }
  return uVar3 & 1;
}


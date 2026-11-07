// rea decompile_all
// name: FUN_10039aae0
// address: 0x10039aae0
// body: available
// range: 0x10039aae0-0x10039ab9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10039aae0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  iVar1 = (int)&local_90;
  puVar2 = &DAT_100a8ad78;
  local_60 = param_1;
  FUN_100004bb4(&DAT_100a8ad78,&DAT_1008236d0);
  _swift_dynamicCast(&local_90,&local_60,param_2,puVar2,6);
  if (iVar1 == 0) {
    local_70 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    FUN_10039b638(&local_90);
    uVar3 = 0;
  }
  else {
    FUN_1000a0074(&local_90,auStack_58);
    FUN_10003f030(auStack_58,local_40);
    (**(code **)(lStack_38 + 8))(local_40,lStack_38);
    uVar3 = (uint)local_40;
    FUN_10003f094(auStack_58);
  }
  return uVar3 & 1;
}


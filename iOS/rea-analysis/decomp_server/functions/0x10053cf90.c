// rea decompile_all
// name: FUN_10053cf90
// address: 0x10053cf90
// body: available
// range: 0x10053cf90-0x10053d093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053cf90(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  uint unaff_w20;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined1 local_6f;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  iVar1 = (int)&local_e0;
  FUN_1000b142c(param_1,auStack_a8);
  puVar2 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  _swift_dynamicCast(&local_e0,auStack_a8,puVar2,&DAT_1009d5408,6);
  if (iVar1 == 0) {
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    local_c0 = 1;
    local_b8 = 0;
    FUN_1005419bc(0,0,0,0,1,0);
    unaff_w20 = 0;
  }
  else {
    local_80 = local_e0;
    uStack_78 = uStack_d8;
    local_70 = (undefined1)local_d0;
    local_6f = (undefined1)((ulong)local_d0 >> 8);
    local_68 = uStack_c8;
    uStack_60 = local_c0;
    local_58 = local_b8;
    FUN_1005a4228();
    FUN_1005419bc(local_e0,uStack_d8,local_d0,uStack_c8,local_c0,local_b8);
  }
  return unaff_w20 & 1;
}


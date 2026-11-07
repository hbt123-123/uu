// rea decompile_all
// name: FUN_10053adec
// address: 0x10053adec
// body: available
// range: 0x10053adec-0x10053aef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053adec(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  uint unaff_w20;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 auStack_c0 [40];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  iVar1 = (int)&local_100;
  FUN_1000b142c(param_1,auStack_c0);
  puVar2 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  _swift_dynamicCast(&local_100,auStack_c0,puVar2,&DAT_1009d7958,6);
  if (iVar1 == 0) {
    local_d0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    FUN_1005417f4(0,0,0,0,0,0,0);
    unaff_w20 = 0;
  }
  else {
    local_98 = local_100;
    uStack_90 = uStack_f8;
    local_88 = local_f0;
    uStack_80 = uStack_e8;
    local_78 = local_e0;
    uStack_70 = uStack_d8;
    local_68 = local_d0;
    thunk_FUN_1005c4020();
    FUN_1005417f4(local_100,uStack_f8,local_f0,uStack_e8,local_e0,uStack_d8,local_d0);
  }
  return unaff_w20 & 1;
}


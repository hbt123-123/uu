// rea decompile_all
// name: FUN_10053aff0
// address: 0x10053aff0
// body: available
// range: 0x10053aff0-0x10053b0e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053aff0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint unaff_w20;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  FUN_1000b142c(param_1,auStack_a8);
  puVar1 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  puVar2 = &local_d8;
  _swift_dynamicCast(puVar2,auStack_a8,puVar1,&DAT_1009d6da8,6);
  if ((int)puVar2 == 0) {
    local_d8 = 0;
    uStack_d0 = 0;
    uStack_c0 = 0xff;
    local_c8 = 0x2000000000000000;
    local_b8 = 0;
    uStack_b0 = 0;
    FUN_1005418a8(0,0,0x2000000000000000,0xff,0,0);
    unaff_w20 = 0;
  }
  else {
    local_80 = local_d8;
    uStack_78 = uStack_d0;
    local_70 = local_c8;
    local_68 = (undefined1)uStack_c0;
    local_60 = local_b8;
    uStack_58 = uStack_b0;
    FUN_1005b8c58();
    FUN_1005418a8(local_d8,uStack_d0,local_c8,uStack_c0,local_b8,uStack_b0);
  }
  return unaff_w20 & 1;
}


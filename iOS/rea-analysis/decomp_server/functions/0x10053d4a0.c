// rea decompile_all
// name: FUN_10053d4a0
// address: 0x10053d4a0
// body: available
// range: 0x10053d4a0-0x10053d587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053d4a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint unaff_w20;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  FUN_1000b142c(param_1,auStack_98);
  puVar1 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  puVar2 = &local_e0;
  _swift_dynamicCast(puVar2,auStack_98,puVar1,&DAT_1009d5520,6);
  if ((int)puVar2 == 0) {
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    local_a0 = 0;
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    local_30 = 0;
    FUN_100040bb4(&local_70,&DAT_100aab4b8,&DAT_100837c28);
    unaff_w20 = 0;
  }
  else {
    uStack_108 = uStack_b8;
    local_110 = local_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    local_f0 = local_a0;
    uStack_128 = uStack_d8;
    local_130 = local_e0;
    uStack_118 = uStack_c8;
    uStack_120 = uStack_d0;
    uStack_48 = uStack_b8;
    local_50 = local_c0;
    uStack_38 = uStack_a8;
    uStack_40 = uStack_b0;
    local_30 = local_a0;
    uStack_68 = uStack_d8;
    local_70 = local_e0;
    uStack_58 = uStack_c8;
    uStack_60 = uStack_d0;
    thunk_FUN_1005a7490();
    FUN_100040bb4(&local_130,&DAT_100aab4b8,&DAT_100837c28);
  }
  return unaff_w20 & 1;
}


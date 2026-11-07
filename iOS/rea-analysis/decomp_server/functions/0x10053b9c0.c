// rea decompile_all
// name: FUN_10053b9c0
// address: 0x10053b9c0
// body: available
// range: 0x10053b9c0-0x10053baab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053b9c0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint unaff_w20;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_10f;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 local_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 local_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  FUN_1000b142c(param_1,auStack_a8);
  puVar1 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  puVar2 = &local_100;
  _swift_dynamicCast(puVar2,auStack_a8,puVar1,&DAT_1009d4858,6);
  if ((int)puVar2 == 0) {
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_bf = 0;
    local_c7 = 0;
    uStack_c0 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_3f = 0;
    local_47 = 0;
    uStack_40 = 0;
    FUN_100040bb4(&local_80,&DAT_100aab4f8,&DAT_100838f20);
    unaff_w20 = 0;
  }
  else {
    uStack_128 = uStack_d8;
    local_130 = local_e0;
    uStack_120 = uStack_d0;
    uStack_10f = uStack_bf;
    uStack_148 = uStack_f8;
    local_150 = local_100;
    uStack_138 = uStack_e8;
    uStack_140 = uStack_f0;
    uStack_58 = uStack_d8;
    local_60 = local_e0;
    uStack_50 = uStack_d0;
    uStack_3f = uStack_bf;
    uStack_78 = uStack_f8;
    local_80 = local_100;
    uStack_68 = uStack_e8;
    uStack_70 = uStack_f0;
    thunk_FUN_1005a64f8();
    FUN_100040bb4(&local_150,&DAT_100aab4f8,&DAT_100838f20);
  }
  return unaff_w20 & 1;
}


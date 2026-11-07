// rea decompile_all
// name: FUN_1000a25f4
// address: 0x1000a25f4
// body: available
// range: 0x1000a25f4-0x1000a271f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a25f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,code *param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long unaff_x21;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [32];
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  (*param_8)(&local_70,param_11,param_12,param_13,param_1,param_2,param_3,param_4,param_5,param_6);
  if (unaff_x21 == 0) {
    local_78 = PTR___sSSN_1000f02f8;
    local_90 = local_70;
    uStack_88 = uStack_68;
    FUN_1000133cc(&local_90,auStack_c0,&DAT_100104198,&DAT_1000d5180);
    local_d8 = param_11;
    uStack_d0 = param_12;
    local_c8 = param_13;
    local_98 = 1;
    local_a0 = param_1;
    _swift_bridgeObjectRetain(uStack_68);
    _swift_bridgeObjectRetain(param_12);
    _swift_bridgeObjectRetain(param_13);
    _swift_bridgeObjectRetain(param_1);
    FUN_100099afc(&local_d8);
    FUN_100065194(&local_d8);
    FUN_10001fc18(&local_90,&DAT_100104198,&DAT_1000d5180);
    _swift_bridgeObjectRelease(uStack_68);
  }
  return;
}


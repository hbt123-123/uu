// rea decompile_all
// name: FUN_100537c38
// address: 0x100537c38
// body: available
// range: 0x100537c38-0x100537d3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100537c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6,long param_7,long param_8,long param_9,
                  undefined8 param_10)

{
  long unaff_x21;
  undefined1 auStack_c0 [16];
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  
  (**(code **)(param_9 + 0x10))(param_7,param_9);
  uStack_98 = param_10;
  local_b0 = param_7;
  lStack_a8 = param_8;
  local_a0 = param_9;
  local_90 = param_1;
  uStack_88 = param_3;
  local_80 = param_4;
  local_78 = param_5;
  local_70 = param_6;
  __s10Foundation15ContiguousBytesP010withUnsafeC0yqd__qd__SWKXEKlFTj
            (FUN_100537eb4,auStack_c0,PTR___sytN_100995e90 + 8,param_8,param_10);
  FUN_1005187f8(param_3);
  (**(code **)(*(long *)(param_8 + -8) + 8))(param_2,param_8);
  if (unaff_x21 != 0) {
    (**(code **)(*(long *)(param_7 + -8) + 8))(param_1,param_7);
  }
  return;
}


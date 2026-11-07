// rea decompile_all
// name: FUN_1005396e8
// address: 0x1005396e8
// body: available
// range: 0x1005396e8-0x1005397af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005396e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = param_2;
  uStack_58 = param_3;
  FUN_1004f9894(param_4,auStack_88);
  FUN_100008184(param_2,param_3);
  FUN_1005386f8(param_1,&local_60,auStack_88,param_5,param_6,param_7,
                PTR___s10Foundation4DataVN_1009961e8,param_8,&PTR_PTR_1009d16b0);
  FUN_1005187f8(param_4);
  FUN_100006cdc(param_2,param_3);
  return;
}


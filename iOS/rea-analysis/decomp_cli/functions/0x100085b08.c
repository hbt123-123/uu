// rea decompile_all
// name: FUN_100085b08
// address: 0x100085b08
// body: available
// range: 0x100085b08-0x100085b9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100085b08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar1 = param_7;
  __sS2ayxGycfC(param_7);
  local_60 = param_7;
  uStack_58 = param_2;
  FUN_1000994bc(param_3,param_4,param_5,param_6,uVar1,FUN_100086744,auStack_70,param_7);
  _swift_bridgeObjectRelease(uVar1);
  return;
}


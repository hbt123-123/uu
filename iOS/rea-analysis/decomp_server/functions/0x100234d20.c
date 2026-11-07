// rea decompile_all
// name: FUN_100234d20
// address: 0x100234d20
// body: available
// range: 0x100234d20-0x100234d8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100234d20(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_40;
  long lStack_38;
  undefined *local_28;
  
  uVar2 = DAT_100a7e9a0;
  uVar1 = DAT_100a7e998;
  if (param_2 != 0) {
    local_28 = PTR___sSSN_1009957f8;
    local_40 = param_1;
    lStack_38 = param_2;
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(uVar2);
    FUN_1002234e0(&local_40,uVar1,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    FUN_10003f094(&local_40);
  }
  return;
}


// rea decompile_all
// name: FUN_100355e60
// address: 0x100355e60
// body: available
// range: 0x100355e60-0x100355ee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100355e60(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_2;
  FUN_100355744(auStack_68);
  FUN_1000ce034(auStack_68,local_50);
  __ss28SingleValueEncodingContainerP6encodeyyqd__KSERd__lFTj
            (&local_40,PTR___sSSN_1009957f8,PTR___sSSSEsWP_100995800,local_50,uStack_48);
  FUN_10003f094(auStack_68);
  return;
}


// rea decompile_all
// name: FUN_100355ddc
// address: 0x100355ddc
// body: available
// range: 0x100355ddc-0x100355e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100355ddc(undefined1 param_1)

{
  undefined1 auStack_60 [24];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_31;
  
  local_31 = param_1;
  FUN_100355744(auStack_60);
  FUN_1000ce034(auStack_60,local_48);
  __ss28SingleValueEncodingContainerP6encodeyyqd__KSERd__lFTj
            (&local_31,PTR___sSbN_1009958c8,PTR___sSbSEsWP_1009958d0,local_48,uStack_40);
  FUN_10003f094(auStack_60);
  return;
}


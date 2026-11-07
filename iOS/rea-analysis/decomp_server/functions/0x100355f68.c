// rea decompile_all
// name: FUN_100355f68
// address: 0x100355f68
// body: available
// range: 0x100355f68-0x100355feb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100355f68(undefined4 param_1)

{
  undefined1 auStack_60 [24];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_34;
  
  local_34 = param_1;
  FUN_100355744(auStack_60);
  FUN_1000ce034(auStack_60,local_48);
  __ss28SingleValueEncodingContainerP6encodeyyqd__KSERd__lFTj
            (&local_34,PTR___sSfN_100995928,PTR___sSfSEsWP_100995938,local_48,uStack_40);
  FUN_10003f094(auStack_60);
  return;
}


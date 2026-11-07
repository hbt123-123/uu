// rea decompile_all
// name: FUN_1003562e8
// address: 0x1003562e8
// body: available
// range: 0x1003562e8-0x100356373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003562e8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_70 [24];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_44;
  
  local_44 = param_1;
  FUN_100355744(auStack_70);
  FUN_1000ce034(auStack_70,local_58);
  __ss28SingleValueEncodingContainerP6encodeyyqd__KSERd__lFTj
            (&local_44,param_4,param_5,local_58,uStack_50);
  FUN_10003f094(auStack_70);
  return;
}


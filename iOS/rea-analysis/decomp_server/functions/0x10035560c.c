// rea decompile_all
// name: FUN_10035560c
// address: 0x10035560c
// body: available
// range: 0x10035560c-0x1003556b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10035560c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long lStack_48;
  
  (**(code **)(unaff_x20 + 0x58))();
  if (param_2 != 0) {
    local_50 = param_1;
    lStack_48 = param_2;
    FUN_100355744(auStack_78);
    FUN_1000ce034(auStack_78,local_60);
    __ss28SingleValueEncodingContainerP6encodeyyqd__KSERd__lFTj
              (&local_50,PTR___sSSN_1009957f8,PTR___sSSSEsWP_100995800,local_60,uStack_58);
    _swift_bridgeObjectRelease(param_2);
    FUN_10003f094(auStack_78);
  }
  return;
}


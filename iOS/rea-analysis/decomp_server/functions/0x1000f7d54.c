// rea decompile_all
// name: FUN_1000f7d54
// address: 0x1000f7d54
// body: available
// range: 0x1000f7d54-0x1000f7deb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000f7d54(undefined8 param_1)

{
  undefined1 auStack_50 [16];
  undefined4 local_40;
  
  FUN_100401b14(0);
  local_40 = (undefined4)param_1;
  FUN_1003fb48c(FUN_1000fa9bc,auStack_50,0xd0000000000000a2,0x80000001008898a0,0xd00000000000002f,
                0x8000000100889950,0x39,0);
  FUN_1000f7b10(param_1);
  return;
}


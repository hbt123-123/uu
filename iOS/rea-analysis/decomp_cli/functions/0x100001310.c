// rea decompile_all
// name: entry
// address: 0x100001310
// body: available
// range: 0x100001310-0x1000013bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000013b4) */

undefined8 entry(undefined8 param_1)

{
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  FUN_100020abc();
  DAT_1001055e0 = param_1;
  FUN_1000013c0();
  _swift_bridgeObjectRetain(param_1);
  FUN_1000786bc(auStack_58);
  _swift_bridgeObjectRelease(param_1);
  FUN_100001400(auStack_58,local_40);
  (**(code **)(lStack_38 + 0x20))(local_40,lStack_38);
  FUN_100001428(auStack_58);
  return 0;
}


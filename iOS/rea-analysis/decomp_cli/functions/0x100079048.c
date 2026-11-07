// rea decompile_all
// name: FUN_100079048
// address: 0x100079048
// body: available
// range: 0x100079048-0x1000790eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000790cc) */

void FUN_100079048(void)

{
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  FUN_1000786bc(auStack_78);
  FUN_100001400(auStack_78,local_60);
  (**(code **)(lStack_58 + 0x20))(local_60,lStack_58);
  FUN_100001428(auStack_78);
  return;
}


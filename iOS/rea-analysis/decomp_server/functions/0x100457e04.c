// rea decompile_all
// name: FUN_100457e04
// address: 0x100457e04
// body: available
// range: 0x100457e04-0x100457e5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100457e04(void)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  FUN_100004bb4(&DAT_100a9f350,&DAT_100827710);
  _swift_initStaticObject();
  FUN_1005451b4(&local_40);
  DAT_100b37c18 = uStack_38;
  DAT_100b37c10 = local_40;
  DAT_100b37c28 = uStack_28;
  DAT_100b37c20 = uStack_30;
  DAT_100b37c38 = uStack_18;
  DAT_100b37c30 = local_20;
  return;
}


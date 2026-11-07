// rea decompile_all
// name: FUN_100524f40
// address: 0x100524f40
// body: available
// range: 0x100524f40-0x100524fc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100524f40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *in_x4;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  (*in_x4)();
  uVar3 = *(undefined8 *)(puVar1 + 0x10);
  _swift_bridgeObjectRetain(puVar1);
  puVar2 = puVar1 + 0x20;
  __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(puVar2,uVar3);
  _swift_bridgeObjectRelease_n(puVar1,2);
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = puVar2;
  return auVar4;
}


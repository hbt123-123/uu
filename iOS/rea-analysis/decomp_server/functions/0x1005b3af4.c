// rea decompile_all
// name: FUN_1005b3af4
// address: 0x1005b3af4
// body: available
// range: 0x1005b3af4-0x1005b3b6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005b3af4(void)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar2 = 0;
  FUN_1005424b0();
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(lVar2 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
  puVar3 = puVar1;
  FUN_1005b8e5c();
  puVar4 = puVar1;
  FUN_1005b9004();
  puVar5 = puVar1;
  FUN_1005b9004();
  DAT_100b3a220 = lVar2;
  DAT_100b3a228 = puVar3;
  DAT_100b3a230 = puVar4;
  DAT_100b3a238 = puVar5;
  DAT_100b3a240 = puVar1;
  DAT_100b3a248 = puVar1;
  return;
}


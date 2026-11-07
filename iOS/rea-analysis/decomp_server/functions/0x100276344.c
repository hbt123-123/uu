// rea decompile_all
// name: FUN_100276344
// address: 0x100276344
// body: available
// range: 0x100276344-0x1002763c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100276344(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  
  lVar2 = 0;
  FUN_1002763e4(0,&DAT_100a821f0,FUN_1002763c8,FUN_1002c70ac);
  _swift_allocObject();
  lVar3 = 0;
  FUN_1002c6dd8();
  _swift_allocObject();
  puVar4 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar3 + 0x10) = puVar4;
  *puVar4 = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(long *)(lVar2 + 0x10) = lVar3;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  return lVar2;
}


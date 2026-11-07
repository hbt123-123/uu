// rea decompile_all
// name: FUN_10017822c
// address: 0x10017822c
// body: available
// range: 0x10017822c-0x100178303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10017822c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_allocObject();
  _swift_unknownObjectWeakInit(unaff_x20 + 0x10,0);
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000ccd84();
  puVar2 = &DAT_100a750f0;
  FUN_100004bb4(&DAT_100a750f0,&DAT_100808400);
  _swift_allocObject();
  FUN_1003e29fc(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  *(undefined1 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0xf000000000000000;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + 0x10,param_1);
  return unaff_x20;
}


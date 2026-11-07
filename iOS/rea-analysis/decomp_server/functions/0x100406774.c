// rea decompile_all
// name: FUN_100406774
// address: 0x100406774
// body: available
// range: 0x100406774-0x10040681f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100406774(undefined2 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_100a8d368;
  FUN_100004bb4(&DAT_100a8d368,&DAT_1008236c0);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = *(undefined8 *)PTR__NSFilePosixPermissions_1009952c0;
  *(undefined **)(puVar1 + 0x40) = PTR___ss5Int16VN_100995c50;
  *(undefined2 *)(puVar1 + 0x28) = param_1;
  puVar2 = puVar1;
  FUN_100406820(puVar1);
  _swift_setDeallocating(puVar1);
  FUN_1003eacf0(puVar1 + 0x20);
  FUN_1004064c8(puVar2);
  _swift_bridgeObjectRelease(puVar2);
  return;
}


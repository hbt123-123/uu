// rea decompile_all
// name: FUN_10039794c
// address: 0x10039794c
// body: available
// range: 0x10039794c-0x1003979ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10039794c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (DAT_100a89330 != -1) {
    _swift_once(&DAT_100a89330,FUN_1003e7108);
  }
  uVar1 = DAT_100b368e8;
  puVar2 = &DAT_100a8aa68;
  FUN_100004bb4(&DAT_100a8aa68,&DAT_10081ec30);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined1 **)(puVar2 + 0x18) = &DAT_d000000000000010;
  *(undefined8 *)(puVar2 + 0x20) = 0x80000001008afe60;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  return puVar2;
}


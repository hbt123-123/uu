// rea decompile_all
// name: FUN_1003ab384
// address: 0x1003ab384
// body: available
// range: 0x1003ab384-0x1003ab417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003ab384(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x18);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    puVar2 = &DAT_100a8b6a0;
    FUN_100004bb4(&DAT_100a8b6a0,&DAT_100820830);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x28) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x10) = uVar3;
    *(undefined8 *)(puVar2 + 0x18) = 0x6f6c6c6568;
    *(undefined8 *)(puVar2 + 0x20) = 0xe500000000000000;
    *(undefined **)(unaff_x20 + 0x18) = puVar2;
    _swift_retain(puVar2);
    puVar1 = (undefined *)0x0;
  }
  _swift_retain(puVar1);
  return puVar2;
}


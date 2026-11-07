// rea decompile_all
// name: FUN_1001175b0
// address: 0x1001175b0
// body: available
// range: 0x1001175b0-0x100117637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1001175b0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _TtC14UURemoteServer15InputController::___lazy_storage___keyboardPressedMap;
  puVar2 = *(undefined **)
            (unaff_x20 + _TtC14UURemoteServer15InputController::___lazy_storage___keyboardPressedMap
            );
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = &DAT_100a794b8;
    FUN_100004bb4(&DAT_100a794b8,&DAT_10080dd70);
    _swift_allocObject();
    FUN_1003bda64();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    _swift_retain();
    _swift_release(uVar4);
    puVar2 = (undefined *)0x0;
  }
  _swift_retain(puVar2);
  return puVar3;
}


// rea decompile_all
// name: FUN_100149e1c
// address: 0x100149e1c
// body: available
// range: 0x100149e1c-0x100149eb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_100149e1c(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 local_38;
  
  lVar1 = _TtC14UURemoteServer33ClipboardFileReceiveCopyOperation::___lazy_storage___receiveOffset;
  puVar2 = *(undefined8 **)
            (unaff_x20 +
            _TtC14UURemoteServer33ClipboardFileReceiveCopyOperation::___lazy_storage___receiveOffset
            );
  puVar3 = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    local_38 = 0;
    FUN_100004bb4(&DAT_100a7a308,&DAT_10080ec80);
    _swift_allocObject();
    puVar3 = &local_38;
    FUN_1003f2d90();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 **)(unaff_x20 + lVar1) = puVar3;
    _swift_retain();
    _swift_release(uVar4);
    puVar2 = (undefined8 *)0x0;
  }
  _swift_retain(puVar2);
  return puVar3;
}


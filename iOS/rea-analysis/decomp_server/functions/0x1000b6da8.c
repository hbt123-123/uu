// rea decompile_all
// name: FUN_1000b6da8
// address: 0x1000b6da8
// body: available
// range: 0x1000b6da8-0x1000b6e7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000b6da8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = *(long *)(unaff_x20 + 0xc0);
  lVar4 = lVar1;
  if (lVar1 == 0) {
    puVar3 = &DAT_10099b050;
    puVar2 = puVar3;
    _swift_allocObject(&DAT_10099b050,0x18,7);
    _swift_weakInit(puVar2 + 0x10);
    _swift_allocObject(&DAT_10099b050,0x18,7);
    _swift_weakInit(puVar3 + 0x10);
    lVar4 = 0;
    FUN_1000c55e0();
    _swift_allocObject();
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined1 *)(lVar4 + 0x50) = 0;
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined1 *)(lVar4 + 0x40) = 0;
    *(code **)(lVar4 + 0x10) = FUN_1000c12b8;
    *(undefined **)(lVar4 + 0x18) = puVar2;
    *(code **)(lVar4 + 0x20) = FUN_1000c12c0;
    *(undefined **)(lVar4 + 0x28) = puVar3;
    uVar5 = *(undefined8 *)(unaff_x20 + 0xc0);
    *(long *)(unaff_x20 + 0xc0) = lVar4;
    _swift_retain();
    _swift_release(uVar5);
    lVar1 = 0;
  }
  _swift_retain(lVar1);
  return lVar4;
}


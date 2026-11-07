// rea decompile_all
// name: FUN_10063f954
// address: 0x10063f954
// body: available
// range: 0x10063f954-0x10063facf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10063f954(long param_1,undefined8 param_2,undefined1 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0x10;
  puVar2 = &DAT_100ab7cb8;
  FUN_100004bb4(&DAT_100ab7cb8,&DAT_100848cc0);
  puVar3 = puVar2;
  _swift_initStaticObject();
  *(undefined **)(unaff_x20 + 0xb0) = puVar3;
  puVar4 = &DAT_100ab7cc0;
  FUN_100004bb4(&DAT_100ab7cc0,&DAT_100848cf0);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 8;
  *(undefined8 *)(puVar4 + 0x10) = 4;
  puVar5 = puVar2;
  _swift_initStaticObject(puVar2,&DAT_100ab6510);
  *(undefined **)(puVar4 + 0x20) = puVar5;
  puVar5 = puVar2;
  _swift_initStaticObject(puVar2,&DAT_100ab6938);
  *(undefined **)(puVar4 + 0x28) = puVar5;
  puVar5 = puVar2;
  _swift_initStaticObject(puVar2,&DAT_100ab6d60);
  *(undefined **)(puVar4 + 0x30) = puVar5;
  _swift_initStaticObject(puVar2,&DAT_100ab7188);
  *(undefined **)(puVar4 + 0x38) = puVar2;
  *(undefined **)(unaff_x20 + 0xb8) = puVar4;
  lVar6 = *(long *)(param_1 + 0x10);
  if (0xffffffffffffffcb < lVar6 - 0x39U) {
    FUN_1000b142c(param_2,unaff_x20 + 0x18);
    *(undefined1 *)(unaff_x20 + 0x40) = param_3;
    *(long *)(unaff_x20 + 0x10) = lVar6;
    *(undefined **)(unaff_x20 + 0xa0) = puVar3;
    *(undefined **)(unaff_x20 + 0xa8) = puVar4;
    _swift_bridgeObjectRetain(puVar4);
    FUN_10063fad0(param_1);
    _swift_bridgeObjectRelease(param_1);
    FUN_100640074();
    FUN_10003f094(param_2);
    if (unaff_x21 != 0) {
      _swift_release();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10063fad0);
  (*pcVar1)();
}


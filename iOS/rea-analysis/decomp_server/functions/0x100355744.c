// rea decompile_all
// name: FUN_100355744
// address: 0x100355744
// body: available
// range: 0x100355744-0x10035590f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100355744(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar9 = &DAT_100a832d0;
  FUN_100004bb4(&DAT_100a832d0,&DAT_1008177d8);
  _swift_initStackObject();
  *(undefined8 *)(puVar9 + 0x18) = 2;
  *(undefined8 *)(puVar9 + 0x10) = 1;
  uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_retain(uVar13);
  _swift_bridgeObjectRetain(uVar15);
  puVar10 = PTR___sSiN_100995968;
  puVar12 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  *(undefined **)(puVar9 + 0x38) = &DAT_1009b4410;
  puVar11 = puVar10;
  FUN_1003581dc();
  *(undefined **)(puVar9 + 0x40) = puVar11;
  puVar11 = &DAT_1009b4390;
  _swift_allocObject(&DAT_1009b4390,0x29,7);
  *(undefined **)(puVar9 + 0x20) = puVar11;
  *(undefined **)(puVar11 + 0x10) = puVar10;
  *(undefined **)(puVar11 + 0x18) = puVar12;
  *(undefined8 *)(puVar11 + 0x20) = uVar14;
  puVar11[0x28] = 0;
  FUN_1002c5b4c();
  uVar6 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar7 = *(undefined1 *)(unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  FUN_100357c68();
  puVar11 = puVar9;
  _swift_allocObject();
  puVar11[0x18] = 1;
  *(undefined8 *)(puVar11 + 0x20) = uVar13;
  *(undefined8 *)(puVar11 + 0x10) = uVar15;
  puVar11[0x28] = uVar6;
  *(undefined8 *)(puVar11 + 0x30) = uVar14;
  *(undefined8 *)(puVar11 + 0x38) = uVar3;
  *(undefined8 *)(puVar11 + 0x40) = uVar1;
  *(undefined8 *)(puVar11 + 0x48) = uVar4;
  puVar11[0x50] = uVar7;
  *(undefined8 *)(puVar11 + 0x58) = uVar2;
  *(undefined8 *)(puVar11 + 0x60) = uVar5;
  param_1[3] = puVar9;
  puVar9 = &DAT_100a88408;
  FUN_100358110(&DAT_100a88408,FUN_100357c68,&TargetProtocolConformanceDescriptor_10081c220);
  param_1[4] = puVar9;
  *param_1 = puVar11;
  if (!SCARRY8(*(long *)(unaff_x20 + 0x18),1)) {
    *(long *)(unaff_x20 + 0x18) = *(long *)(unaff_x20 + 0x18) + 1;
    FUN_100317824(uVar14,uVar3);
    FUN_100357714(uVar1,uVar4,uVar7);
    _swift_retain(uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x100355910);
  (*pcVar8)();
}


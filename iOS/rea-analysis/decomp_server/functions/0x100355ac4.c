// rea decompile_all
// name: FUN_100355ac4
// address: 0x100355ac4
// body: available
// range: 0x100355ac4-0x100355c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100355ac4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long *unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar14 = *unaff_x20;
  lVar15 = unaff_x20[4];
  lVar17 = unaff_x20[2];
  puVar9 = &DAT_100a832d0;
  FUN_100004bb4(&DAT_100a832d0,&DAT_1008177d8);
  _swift_initStackObject();
  *(undefined8 *)(puVar9 + 0x18) = 2;
  *(undefined8 *)(puVar9 + 0x10) = 1;
  lVar16 = unaff_x20[3];
  _swift_retain(lVar15);
  _swift_bridgeObjectRetain(lVar17);
  puVar10 = PTR___sSiN_100995968;
  puVar13 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  *(undefined **)(puVar9 + 0x38) = &DAT_1009b4410;
  puVar11 = puVar10;
  FUN_1003581dc();
  *(undefined **)(puVar9 + 0x40) = puVar11;
  puVar11 = &DAT_1009b4390;
  _swift_allocObject(&DAT_1009b4390,0x29,7);
  *(undefined **)(puVar9 + 0x20) = puVar11;
  *(undefined **)(puVar11 + 0x10) = puVar10;
  *(undefined **)(puVar11 + 0x18) = puVar13;
  *(long *)(puVar11 + 0x20) = lVar16;
  puVar11[0x28] = 0;
  FUN_1002c5b4c(puVar9);
  lVar6 = unaff_x20[5];
  lVar16 = unaff_x20[6];
  lVar3 = unaff_x20[7];
  lVar1 = unaff_x20[8];
  lVar4 = unaff_x20[9];
  lVar7 = unaff_x20[10];
  lVar2 = unaff_x20[0xb];
  lVar5 = unaff_x20[0xc];
  lVar12 = lVar14;
  _swift_allocObject(lVar14,0x68,7);
  *(undefined8 *)(lVar12 + 0x18) = 0;
  *(long *)(lVar12 + 0x20) = lVar15;
  *(long *)(lVar12 + 0x10) = lVar17;
  *(char *)(lVar12 + 0x28) = (char)lVar6;
  *(long *)(lVar12 + 0x30) = lVar16;
  *(long *)(lVar12 + 0x38) = lVar3;
  *(long *)(lVar12 + 0x40) = lVar1;
  *(long *)(lVar12 + 0x48) = lVar4;
  *(char *)(lVar12 + 0x50) = (char)lVar7;
  *(long *)(lVar12 + 0x58) = lVar2;
  *(long *)(lVar12 + 0x60) = lVar5;
  param_1[3] = lVar14;
  puVar9 = &DAT_100a88410;
  FUN_100358110(&DAT_100a88410,FUN_100357c88,&TargetProtocolConformanceDescriptor_10081c0b8);
  param_1[4] = (long)puVar9;
  *param_1 = lVar12;
  if (!SCARRY8(unaff_x20[3],1)) {
    unaff_x20[3] = unaff_x20[3] + 1;
    FUN_100317824(lVar16,lVar3);
    FUN_100357714(lVar1,lVar4,(char)lVar7);
    _swift_retain(lVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x100355c94);
  (*pcVar8)();
}


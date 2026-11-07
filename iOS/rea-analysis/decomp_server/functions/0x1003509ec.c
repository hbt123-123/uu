// rea decompile_all
// name: FUN_1003509ec
// address: 0x1003509ec
// body: available
// range: 0x1003509ec-0x100350bbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1003509ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long unaff_x20;
  long unaff_x21;
  long local_88 [3];
  long local_70;
  undefined *local_68;
  
  lVar10 = param_1;
  FUN_100357bc0();
  _swift_allocObject();
  *(undefined8 *)(lVar10 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined8 *)(lVar10 + 0x18) = 0;
  *(undefined1 *)(lVar10 + 0x20) = 2;
  uVar8 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar9 = *(undefined1 *)(unaff_x20 + 0x50);
  lVar11 = lVar10;
  FUN_100357ba0();
  lVar12 = lVar11;
  _swift_allocObject();
  *(long *)(lVar12 + 0x18) = lVar10;
  *(undefined **)(lVar12 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined1 *)(lVar12 + 0x20) = uVar8;
  *(undefined8 *)(lVar12 + 0x28) = uVar1;
  *(undefined8 *)(lVar12 + 0x30) = uVar4;
  *(undefined8 *)(lVar12 + 0x38) = uVar2;
  *(undefined8 *)(lVar12 + 0x40) = uVar5;
  *(undefined1 *)(lVar12 + 0x48) = uVar9;
  *(undefined8 *)(lVar12 + 0x50) = uVar3;
  *(undefined8 *)(lVar12 + 0x58) = uVar6;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar3);
  puVar13 = &DAT_100a88418;
  local_70 = lVar11;
  FUN_100358110(&DAT_100a88418,FUN_100357ba0,&TargetProtocolConformanceDescriptor_10081c450);
  local_88[0] = lVar12;
  local_68 = puVar13;
  _swift_retain(lVar10);
  FUN_100317824(uVar1,uVar4);
  FUN_100357714(uVar2,uVar5,uVar9);
  _swift_retain(uVar6);
  __sSE6encode2toys7Encoder_p_tKFTj(local_88,uVar3,uVar7);
  if (unaff_x21 == 0) {
    FUN_10003f094(local_88);
    _swift_beginAccess((undefined8 *)(lVar10 + 0x10),local_88,0,0);
    lVar11 = *(long *)(lVar10 + 0x10);
    FUN_100357d58(lVar11,*(undefined8 *)(lVar10 + 0x18),*(undefined1 *)(lVar10 + 0x20));
    _swift_release(lVar10);
  }
  else {
    _swift_release(lVar10);
    FUN_10003f094(local_88);
  }
  return lVar11;
}


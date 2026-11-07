// rea decompile_all
// name: FUN_1001762e4
// address: 0x1001762e4
// body: available
// range: 0x1001762e4-0x1001764a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1001762e4(void)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  puVar1 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_60 + -extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = unaff_x20 + _TtC14UURemoteServer22ClipboardBaseOperation::taskData;
  _swift_weakLoadStrong();
  if (lVar4 == 0) {
LAB_100176450:
    (**(code **)(lVar9 + 0x38))(puVar5,1,1,lVar2);
  }
  else {
    lVar8 = *(long *)(lVar4 + 0x88);
    _swift_retain(lVar8);
    _swift_release(lVar4);
    lVar4 = _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::url;
    if (lVar8 == 0) goto LAB_100176450;
    _swift_beginAccess(lVar8 + _TtC14UURemoteServer28ClipboardTaskFileUlrItemData::url,auStack_58,0,
                       0);
    FUN_10007f314(lVar8 + lVar4,puVar5,&DAT_100a766c8,&DAT_10080b1d0);
    _swift_release(lVar8);
    puVar3 = puVar5;
    (**(code **)(lVar9 + 0x30))(puVar5,1,lVar2);
    if ((int)puVar3 != 1) {
      lVar4 = lVar7;
      (**(code **)(lVar9 + 0x20))(lVar7,puVar5,lVar2);
      __s10Foundation3URLV4pathSSvg();
      puVar3 = puVar5;
      FUN_100219ce4();
      uVar6 = (uint)puVar3;
      _swift_bridgeObjectRelease(puVar5);
      (**(code **)(lVar9 + 8))(lVar7,lVar2);
      goto LAB_100176488;
    }
  }
  FUN_100040bb4(puVar5,&DAT_100a766c8,&DAT_10080b1d0);
  lVar4 = 0;
  uVar6 = 1;
LAB_100176488:
  auVar10._8_4_ = uVar6 & 1;
  auVar10._0_8_ = lVar4;
  auVar10._12_4_ = 0;
  return auVar10;
}


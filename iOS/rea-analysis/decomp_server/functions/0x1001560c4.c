// rea decompile_all
// name: FUN_1001560c4
// address: 0x1001560c4
// body: available
// range: 0x1001560c4-0x1001564bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001560c4(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined4 extraout_w8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  undefined4 *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auStack_d0 [16];
  undefined4 auStack_c0 [4];
  undefined1 auStack_b0 [8];
  long local_a8;
  code *local_a0;
  long lStack_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100a79890;
  FUN_100004bb4(&DAT_100a79890,&DAT_10080e600);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_b0 + -extraout_x8;
  lVar3 = 0;
  local_88 = puVar7;
  FUN_100127240();
  local_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = 0;
  local_90 = puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar9 + 0x40));
  uVar12 = (long)(puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dropTasks,auStack_78,0x21
                     ,0);
  __s10Foundation4DateVACycfC(uVar12);
  uVar4 = uVar12;
  FUN_100129978();
  local_a0 = *(code **)(lVar9 + 8);
  lStack_98 = lVar3;
  (*local_a0)(uVar12,lVar3);
  _swift_endAccess(auStack_78);
  lVar3 = *(long *)(uVar4 + 0x10);
  if (lVar3 != 0) {
    FUN_100401b14(0);
    puVar10 = (undefined4 *)(uVar4 + 0x20);
    do {
      (*(code *)PTR____chkstk_darwin_100995498)(*puVar10);
      *(undefined4 *)(uVar12 - 0x10) = extraout_w8;
      FUN_1003fb4bc(FUN_10016bc1c,uVar12 - 0x20,0xd0000000000000a4,0x800000010088d870,
                    0xd00000000000001d,0x8000000100893ee0,0xb9,0);
      lVar3 = lVar3 + -1;
      puVar10 = puVar10 + 1;
    } while (lVar3 != 0);
  }
  _swift_bridgeObjectRelease(uVar4);
  lVar3 = _TtC14UURemoteServer18ClipboardPCManager::dragTransfer;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dragTransfer,auStack_78,
                     0x21,0);
  __s10Foundation4DateVACycfC(uVar12);
  uVar4 = uVar12;
  FUN_100127b1c();
  (*local_a0)(uVar12,lStack_98);
  _swift_endAccess(auStack_78);
  if ((uVar4 & 1) != 0) {
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_100156570,0,0xd0000000000000a4,0x800000010088d870,0xd00000000000001d,
                  0x8000000100893ee0,0xbc,0);
  }
  puVar7 = local_90;
  FUN_10016b6f8(unaff_x20 + lVar3,local_90);
  puVar6 = local_88;
  FUN_10007f314(puVar7,local_88,&DAT_100a79890,&DAT_10080e600);
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  puVar5 = puVar6;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar6,1,lVar3);
  if ((int)puVar5 == 1) {
    FUN_10016b73c(puVar7);
    FUN_100040bb4(puVar6,&DAT_100a79890,&DAT_10080e600);
    puVar7 = puVar6;
  }
  else {
    FUN_100040bb4(puVar6,&DAT_100a79890,&DAT_10080e600);
    bVar1 = puVar7[(long)*(int *)(local_a8 + 0x1c) + 4];
    FUN_10016b73c();
    if ((bVar1 & 1) != 0) {
      return;
    }
  }
  FUN_100153164();
  puVar6 = puVar7;
  FUN_10018ab14();
  _swift_release(puVar7);
  if (((ulong)puVar6 & 1) != 0) {
    uVar8 = 0x8000000100893f00;
    FUN_10015659c(0x100000000000001b,0x8000000100893f00);
    lVar3 = _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
    uVar4 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
    _swift_unknownObjectWeakLoadStrong();
    if (uVar4 != 0) {
      uVar12 = uVar4;
      FUN_1001bc2b4();
      if ((uVar12 & 1) == 0) {
        FUN_100156db0();
      }
      else {
        lVar3 = unaff_x20 + lVar3;
        _swift_unknownObjectWeakLoadStrong();
        if (lVar3 != 0) {
          uVar11 = *(undefined8 *)
                    (unaff_x20 +
                    _TtC14UURemoteServer18ClipboardPCManager::___lazy_storage___clipboardAbility);
          _swift_retain(uVar11);
          FUN_100188b54();
          _swift_release(uVar11);
          _swift_unknownObjectRelease(lVar3);
          _swift_unknownObjectRelease(uVar4);
          _swift_bridgeObjectRelease(uVar8);
          return;
        }
      }
      _swift_unknownObjectRelease(uVar4);
    }
  }
  return;
}


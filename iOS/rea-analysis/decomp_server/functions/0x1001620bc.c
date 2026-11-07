// rea decompile_all
// name: FUN_1001620bc
// address: 0x1001620bc
// body: available
// range: 0x1001620bc-0x1001625bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001620bc(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined *puVar11;
  long extraout_x8;
  ulong uVar12;
  long extraout_x12;
  long unaff_x20;
  undefined8 *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long local_e0 [3];
  char *local_c8;
  long local_c0 [3];
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar7 = 0;
  FUN_100127240();
  local_e0[2] = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar15 = (long)local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_e0[1] = lVar15;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar15 = lVar15 - extraout_x12;
  FUN_10015659c(0x81e59dafe89abce4,0xac000000a2ade69c);
  lVar7 = _TtC14UURemoteServer18ClipboardPCManager::dropTasks;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dropTasks,auStack_78,0,0)
  ;
  lVar7 = *(long *)(unaff_x20 + lVar7);
  puVar13 = *(undefined8 **)(lVar7 + 0x10);
  puVar8 = (undefined8 *)PTR___swiftEmptyArrayStorage_100995ea0;
  if (puVar13 != (undefined8 *)0x0) {
    puVar8 = puVar13;
    FUN_10006d580(puVar13,0);
    puVar9 = &local_a0;
    thunk_FUN_100074010(puVar9,puVar8 + 4,puVar13,lVar7);
    local_c8 = (char *)puVar9;
    _swift_bridgeObjectRetain(lVar7);
    FUN_10003f638(local_a0,uStack_98,local_90,uStack_88,local_80);
    if (local_c8 != (char *)puVar13) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1001625bc);
      (*pcVar5)();
    }
  }
  lVar7 = puVar8[2];
  if (lVar7 != 0) {
    puVar13 = puVar8 + 4;
    do {
      FUN_100161224(*(undefined4 *)puVar13);
      lVar7 = lVar7 + -1;
      puVar13 = (undefined8 *)((long)puVar13 + 4);
    } while (lVar7 != 0);
  }
  _swift_release(puVar8);
  lVar7 = _TtC14UURemoteServer18ClipboardPCManager::dragTransfer;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dragTransfer,&local_a0,0,
                     0);
  local_e0[0] = lVar7;
  FUN_10016b6f8(unaff_x20 + lVar7,lVar15);
  lVar10 = *(long *)(lVar15 + *(int *)(local_e0[2] + 0x20));
  _swift_bridgeObjectRetain();
  thunk_FUN_10004b1a8();
  FUN_10016b73c();
  lVar7 = 0;
  uVar12 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((long)uVar12 < 0x40) {
    uVar16 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(lVar10 + 0x38);
  local_c8 = s_____10088fc40 + 0x20;
  while( true ) {
    while (uVar16 != 0) {
      uVar4 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar16 = uVar16 - 1 & uVar16;
      uVar2 = *(undefined4 *)
               (*(long *)(lVar10 + 0x30) +
               (lVar7 << 8 | LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) << 2));
      FUN_100153208();
      uVar14 = *(undefined8 *)(lVar15 + 0x20);
      local_a4 = uVar2;
      _swift_retain(uVar14);
      FUN_1003e37e8(local_c0,&local_a4);
      _swift_release(uVar14);
      if (local_c0[0] != 0) {
        _swift_release();
        FUN_100401b14(0);
        FUN_1003fb45c(FUN_1001359d8,0,0xd0000000000000ac,(ulong)local_c8 | 0x8000000000000000,
                      0xd000000000000015,0x800000010088ffd0,0xe4,7);
        uVar14 = *(undefined8 *)(lVar15 + 0x20);
        local_c0[0] = 0;
        local_a4 = uVar2;
        _swift_retain(uVar14);
        FUN_1003e3634(local_c0,&local_a4);
        _swift_release(uVar14);
      }
      _swift_release();
    }
    bVar6 = SCARRY8(lVar7,1);
    lVar7 = lVar7 + 1;
    if (bVar6) break;
    if ((long)(uVar12 + 0x3f >> 6) <= lVar7) {
      _swift_release(lVar10);
      lVar7 = 0;
      __s10Foundation4UUIDVMa();
      lVar15 = local_e0[1];
      (**(code **)(*(long *)(lVar7 + -8) + 0x38))(local_e0[1],1,1,lVar7);
      lVar10 = local_e0[2];
      puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
      *(undefined **)(lVar15 + *(int *)(local_e0[2] + 0x14)) =
           PTR___swiftEmptyArrayStorage_100995ea0;
      puVar8 = (undefined8 *)(lVar15 + *(int *)(local_e0[2] + 0x18));
      *puVar8 = 0;
      puVar8[1] = 0xe000000000000000;
      puVar1 = (undefined4 *)(lVar15 + *(int *)(local_e0[2] + 0x1c));
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 1;
      iVar3 = *(int *)(local_e0[2] + 0x20);
      FUN_1000cced0();
      *(undefined **)(lVar15 + iVar3) = puVar11;
      iVar3 = *(int *)(lVar10 + 0x24);
      lVar7 = 0;
      __s10Foundation4DateVMa();
      (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar15 + iVar3,1,1,lVar7);
      lVar7 = local_e0[0];
      *(undefined **)(lVar15 + *(int *)(lVar10 + 0x28)) = PTR___swiftEmptySetSingleton_100995eb0;
      *(undefined1 *)(lVar15 + *(int *)(lVar10 + 0x2c)) = 0;
      _swift_beginAccess(unaff_x20 + local_e0[0],local_c0,0x21,0);
      FUN_10016bd8c(lVar15,unaff_x20 + lVar7);
      _swift_endAccess(local_c0);
      lVar7 = _TtC14UURemoteServer18ClipboardPCManager::timer;
      _objc_msgSend(*(ID *)(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::timer),
                    "invalidate");
      *(undefined8 *)(unaff_x20 + lVar7) = 0;
      lVar7 = 0;
      FUN_1001533d4();
      uVar14 = *(undefined8 *)
                (lVar7 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::fileHelper);
      FUN_100401b14(0);
      FUN_1003fb45c(FUN_1001906ec,0,0xd0000000000000ad,0x8000000100890a70,0xd000000000000016,
                    0x80000001008935c0,0x169,7);
      FUN_10060536c(uVar14);
      uVar14 = 0;
      FUN_10015567c(0);
      FUN_1001536b4();
      FUN_10014842c();
      _swift_release(uVar14);
      FUN_1001536c4();
      FUN_10014842c();
      _swift_release(uVar14);
      FUN_1001536d4();
      FUN_10014842c();
      _swift_release(uVar14);
      FUN_1001536e4();
      FUN_10014842c();
      _swift_release(uVar14);
      return;
    }
    uVar16 = ((ulong *)(lVar10 + 0x38))[lVar7];
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1001625b8);
  (*pcVar5)();
}


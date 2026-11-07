// rea decompile_all
// name: FUN_1001f1f6c
// address: 0x1001f1f6c
// body: available
// range: 0x1001f1f6c-0x1001f24f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f1f6c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  code *pcVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_140 [16];
  ulong auStack_130 [4];
  undefined1 auStack_110 [16];
  long alStack_100 [4];
  undefined1 auStack_e0 [8];
  char *local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  char *local_a0;
  ulong local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  lVar6 = 0;
  __s10Foundation4DateVMa();
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_e0 + lVar5;
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) {
    return;
  }
  cVar4 = *(char *)(param_1 + 0x14);
  if (cVar4 == '\0') {
    _swift_bridgeObjectRelease(0xe700000000000000);
  }
  else {
    uVar7 = 0x6465686361746564;
    if (cVar4 != '\x01') {
      uVar7 = 0x646574697865;
    }
    uVar11 = 0xe800000000000000;
    if (cVar4 != '\x01') {
      uVar11 = 0xe600000000000000;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar7,uVar11,0x676e696e6e7572,0xe700000000000000,0);
    _swift_bridgeObjectRelease(uVar11);
    if ((uVar7 & 1) == 0) {
      FUN_100401b14(0);
      pcVar9 = FUN_1001fa3d4;
      uVar11 = 0x37c;
      goto LAB_1001f24c8;
    }
  }
  *(undefined1 *)(param_1 + 0x14) = 1;
  puVar1 = (undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::onOutput);
  uVar11 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_10007ed2c(uVar11,uVar2);
  __s10Foundation4DateVACycfC(puVar13);
  lVar12 = _TtC14UURemoteServer15TerminalSession::lastActiveTime;
  _swift_beginAccess(param_1 + _TtC14UURemoteServer15TerminalSession::lastActiveTime,&local_90,0x21,
                     0);
  puVar10 = puVar13;
  (**(code **)(lVar15 + 0x28))(param_1 + lVar12,puVar13,lVar6);
  _swift_endAccess(&local_90);
  lVar12 = *(long *)(param_1 + _TtC14UURemoteServer15TerminalSession::tmuxController);
  if (lVar12 != 0) {
    lVar14 = ((undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName))[1];
    if (lVar14 != 0) {
      uVar11 = *(undefined8 *)(param_1 + _TtC14UURemoteServer15TerminalSession::tmuxSessionName);
      iVar3 = *(int *)(param_1 + 0x18);
      _swift_retain(lVar12);
      if (-1 < iVar3) {
        _swift_bridgeObjectRetain(lVar14);
        pcVar8 = _ptsname(iVar3);
        if (pcVar8 != (char *)0x0) {
          __sSS7cStringSSSPys4Int8VG_tcfC();
          local_90 = 0x3a686361746564;
          uStack_88 = 0xe700000000000000;
          __sSS6appendyySSF(uVar11,lVar14);
          _swift_bridgeObjectRelease(lVar14);
          uVar7 = local_90;
          local_b0 = uStack_88;
          local_a8 = puVar13;
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(long *)((long)alStack_100 + lVar5) = param_1;
          *(char **)((long)alStack_100 + lVar5 + 8) = pcVar8;
          local_a0 = pcVar8;
          *(undefined1 **)((long)alStack_100 + lVar5 + 0x10) = puVar10;
          *(long *)((long)alStack_100 + lVar5 + 0x18) = lVar12;
          FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
          __sSo17OS_dispatch_queueC8DispatchE11getSpecific3keyxSgAC0dF3KeyCyxG_tlFZ
                    (&local_90,*(undefined8 *)(lVar12 + 0x18));
          if ((local_90 & 0x100) == 0) {
            __s10Foundation4DateVACycfC(puVar13);
            uVar11 = 0;
            FUN_100401b14();
            local_b8 = uVar11;
            (*(code *)PTR____chkstk_darwin_100995498)();
            uVar11 = local_b0;
            *(ulong *)((long)auStack_130 + lVar5 + 0x10) = uVar7;
            *(undefined8 *)((long)auStack_130 + lVar5 + 0x18) = uVar11;
            local_d8 = "set-client-ignore-size:";
            pcStack_d0 = "socketPath";
            local_c8 = 0xd000000000000094;
            uStack_c0 = 0xd00000000000002a;
            FUN_1003fb48c(FUN_1001fa460,(long)auStack_130 + lVar5,0xd000000000000094,
                          0x8000000100880950,0xd00000000000002a,0x8000000100880ed0,0x21e,0);
            pcVar8 = local_a0;
            FUN_1001f0704(local_a0,puVar10,0);
            FUN_1000a452c(pcVar8,puVar10);
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(ulong *)((long)auStack_130 + lVar5) = uVar7;
            *(undefined8 *)((long)auStack_130 + lVar5 + 8) = uVar11;
            *(undefined1 **)((long)auStack_130 + lVar5 + 0x10) = puVar13;
            FUN_1003fb48c(FUN_1001fa468,auStack_140 + lVar5,local_c8,
                          (ulong)pcStack_d0 | 0x8000000000000000,uStack_c0,
                          (ulong)local_d8 | 0x8000000000000000,0x220,0);
            _swift_bridgeObjectRelease(uVar11);
            (**(code **)(lVar15 + 8))(puVar13,lVar6);
          }
          else {
            (*(code *)PTR____chkstk_darwin_100995498)();
            uVar11 = local_b0;
            *(ulong *)((long)auStack_130 + lVar5) = uVar7;
            *(undefined8 *)((long)auStack_130 + lVar5 + 8) = uVar11;
            *(code **)((long)auStack_130 + lVar5 + 0x10) = FUN_1001fa3ec;
            *(undefined1 **)((long)auStack_130 + lVar5 + 0x18) = auStack_110 + lVar5;
            __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                      (FUN_1001fa438,auStack_140 + lVar5,PTR___sytN_100995e90 + 8);
            _swift_bridgeObjectRelease(uVar11);
          }
          puVar13 = local_a8;
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          pcVar8 = local_a0;
          *(long *)(puVar13 + -0x20) = param_1;
          *(char **)(puVar13 + -0x18) = pcVar8;
          *(undefined1 **)(puVar13 + -0x10) = puVar10;
          FUN_1003fb48c(FUN_1001fa454,puVar13 + -0x30,0xd000000000000095,0x80000001008a00c0,
                        0x2928686361746564,0xe800000000000000,0x38c,0);
          _swift_bridgeObjectRelease(puVar10);
          _swift_release(lVar12);
          goto LAB_1001f248c;
        }
        _swift_bridgeObjectRelease(lVar14);
      }
      FUN_100401b14(0);
      FUN_1003fb4bc(FUN_1001fa3e4,param_1,0xd000000000000095,0x80000001008a00c0,0x2928686361746564,
                    0xe800000000000000,0x38e,0);
      _swift_release(lVar12);
    }
  }
LAB_1001f248c:
  FUN_100401b14(0);
  pcVar9 = FUN_1001fa3dc;
  uVar11 = 0x393;
LAB_1001f24c8:
  FUN_1003fb48c(pcVar9,param_1,0xd000000000000095,0x80000001008a00c0,0x2928686361746564,
                0xe800000000000000,uVar11,0);
  _swift_release(param_1);
  return;
}


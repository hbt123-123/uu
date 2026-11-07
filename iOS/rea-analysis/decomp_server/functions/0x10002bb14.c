// rea decompile_all
// name: FUN_10002bb14
// address: 0x10002bb14
// body: available
// range: 0x10002bb14-0x10002bf37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002bb14(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  long lVar10;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  long local_a8;
  int local_a0;
  int iStack_9c;
  undefined4 local_98;
  undefined1 *local_80;
  undefined1 auStack_78 [24];
  
  uVar4 = param_1;
  FUN_10004d12c();
  uVar5 = param_1;
  thunk_FUN_100152fd0(param_1,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  if ((uVar5 & 1) == 0) {
    puVar7 = auStack_78;
    _swift_beginAccess(unaff_x20 + 200,puVar7,0x20,0);
    lVar10 = *(long *)(unaff_x20 + 200);
    if ((*(long *)(lVar10 + 0x10) == 0) ||
       (uVar4 = param_1, thunk_FUN_1001a2c34(), ((ulong)puVar7 & 1) == 0)) {
      _swift_endAccess(auStack_78);
    }
    else {
      plVar9 = (long *)(*(long *)(lVar10 + 0x38) + uVar4 * 0x18);
      lVar10 = *plVar9;
      iVar1 = (int)plVar9[1];
      iVar2 = *(int *)((long)plVar9 + 0xc);
      uVar3 = (undefined4)plVar9[2];
      _swift_endAccess(auStack_78);
      local_b0 = (undefined4)param_1;
      local_a8 = lVar10;
      local_a0 = iVar1;
      iStack_9c = iVar2;
      local_98 = uVar3;
      if ((((*(long *)(unaff_x20 + 0x108) == lVar10) &&
           (lVar10 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) +
                              _TtC14UURemoteServer15StreamerManager::dispatcher), lVar10 != 0)) &&
          (lVar10 = *(long *)(lVar10 + _TtC14UURemoteServer18StreamerDispatcher::
                                       currentConnectSession), lVar10 != 0)) &&
         (*(int *)(lVar10 + _TtC14UURemoteServer22StreamerConnectSession::handle) == iVar1)) {
        uVar4 = param_1;
        FUN_10002250c();
        if (((uVar4 >> 0x20 & 1) == 0) && (iVar2 == (int)uVar4)) {
          uVar4 = param_1;
          FUN_1000231b4(param_1,PTR___swiftEmptySetSingleton_100995eb0);
          local_c0 = param_2;
          uStack_b8 = param_3;
          if ((uVar4 & 1) != 0) {
            _swift_beginAccess(unaff_x20 + 200,auStack_78,0x21,0);
            FUN_1001ddfa4(param_1);
            _swift_endAccess(auStack_78);
            FUN_100401b14(0);
            local_80 = (undefined1 *)&local_80;
            (*(code *)PTR____chkstk_darwin_100995498)();
            FUN_1003fb48c(FUN_10003f900,auStack_d0,0xd0000000000000a9,0x8000000100877660,
                          0xd000000000000048,0x8000000100878ac0,0x879,0);
            FUN_100030274(iVar1,param_1,iVar2,uVar3);
            return;
          }
          FUN_10002c1c8(param_1,iVar1);
          FUN_100401b14(0);
          local_80 = (undefined1 *)&local_80;
          (*(code *)PTR____chkstk_darwin_100995498)();
          FUN_1003fb48c(FUN_10003f8f4,auStack_d0,0xd0000000000000a9,0x8000000100877660,
                        0xd000000000000048,0x8000000100878ac0,0x875,0);
          return;
        }
        _swift_beginAccess(unaff_x20 + 200,auStack_78,0x21,0);
        FUN_1001ddfa4(param_1);
        _swift_endAccess(auStack_78);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        pcVar6 = FUN_10003f8d0;
        uVar8 = 0x86d;
      }
      else {
        _swift_beginAccess(unaff_x20 + 200,auStack_78,0x21,0);
        FUN_1001ddfa4(param_1);
        _swift_endAccess(auStack_78);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        pcVar6 = FUN_10003f8c4;
        uVar8 = 0x868;
      }
      FUN_1003fb48c(pcVar6,&local_c0,0xd0000000000000a9,0x8000000100877660,0xd000000000000048,
                    0x8000000100878ac0,uVar8,0);
    }
  }
  return;
}


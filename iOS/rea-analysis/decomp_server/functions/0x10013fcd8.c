// rea decompile_all
// name: FUN_10013fcd8
// address: 0x10013fcd8
// body: available
// range: 0x10013fcd8-0x10014062f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code FUN_10013fcd8(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  char *pcVar4;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code cVar13;
  undefined1 auStack_d0 [16];
  undefined4 local_c0;
  code *local_b8;
  code *pcStack_b0;
  code *local_a8;
  undefined8 local_a0;
  code *local_98;
  char *local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  undefined4 local_6c;
  code *local_68;
  
  uVar5 = *(undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTaskFile);
  uVar2 = (undefined4)param_1;
  local_6c = uVar2;
  _swift_retain(uVar5);
  FUN_1003e37e8(&local_68,&local_6c);
  _swift_release(uVar5);
  pcVar1 = local_68;
  if (local_68 == (code *)0x0) {
    if ((param_2 & 1) == 0) {
      return (code)0x6;
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_a0 = (code *)CONCAT44(local_a0._4_4_,uVar2);
    FUN_1003fb48c(FUN_1001452fc,&pcStack_b0,0xd0000000000000ad,0x8000000100890750,0x45746c7561666564
                  ,0xee002928726f7272,0x15c,7);
    FUN_1001436f8(param_1,2);
    lVar3 = unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::delegate;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar3 != 0) {
      FUN_100167028(param_1,2);
      _swift_unknownObjectRelease(lVar3);
      return (code)0x2;
    }
    return (code)0x2;
  }
  plVar6 = *(long **)(local_68 + 0x10);
  pcVar8 = *(code **)(*plVar6 + 0xb8);
  plVar7 = plVar6;
  _swift_retain();
  (*pcVar8)();
  _swift_release(plVar6);
  if (((ulong)plVar7 & 1) == 0) {
    plVar7 = *(long **)(pcVar1 + 0x10);
    pcVar9 = *(code **)(*plVar7 + 0xb0);
    _swift_retain(plVar7);
    pcVar8 = FUN_1001406e0;
    (*pcVar9)(FUN_1001406e0,0);
    _swift_release(plVar7);
    plVar7 = *(long **)(pcVar1 + 0x10);
    pcVar10 = *(code **)(*plVar7 + 0xb0);
    _swift_retain(plVar7);
    pcVar9 = FUN_10014071c;
    (*pcVar10)(FUN_10014071c,0);
    _swift_release(plVar7);
    plVar7 = *(long **)(pcVar1 + 0x10);
    pcVar11 = *(code **)(*plVar7 + 0xb0);
    _swift_retain(plVar7);
    pcVar10 = FUN_100140758;
    (*pcVar11)(FUN_100140758,0);
    _swift_release(plVar7);
    plVar7 = *(long **)(pcVar1 + 0x10);
    pcVar12 = *(code **)(*plVar7 + 0xb0);
    _swift_retain(plVar7);
    pcVar11 = FUN_100140778;
    (*pcVar12)(FUN_100140778,0);
    _swift_release(plVar7);
    uVar5 = 0;
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_88 = 0xd000000000000026;
    local_80 = "allTakProcessData";
    local_90 = s____url__100890c30 + 0x10;
    local_c0 = uVar2;
    local_b8 = pcVar11;
    pcStack_b0 = pcVar8;
    local_a8 = pcVar9;
    local_a0 = pcVar10;
    local_78 = uVar5;
    FUN_1003fb48c(FUN_100145304,auStack_d0,0xd0000000000000ad,0x8000000100890750,0xd000000000000026,
                  0x8000000100890c40,0x16c,7);
    if ((param_2 & 1) != 0) {
      uVar5 = *(undefined8 *)
               (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
      local_6c = uVar2;
      _swift_retain(uVar5);
      FUN_1003e37e8(&local_68,&local_6c);
      _swift_release(uVar5);
      if (local_68 != (code *)0x0) {
        cVar13 = local_68[_TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::result];
        _swift_release();
        if ((cVar13 == (code)0x5) || (cVar13 == (code)0x3)) {
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_a0._0_5_ = CONCAT14(cVar13,uVar2);
          FUN_1003fb48c(FUN_100145350,&pcStack_b0,0xd0000000000000ad,
                        (ulong)local_80 | 0x8000000000000000,local_88,
                        (ulong)local_90 | 0x8000000000000000,0x16e,7);
          _swift_release(pcVar1);
          return cVar13;
        }
      }
      if (0 < (long)pcVar8) {
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_a0 = (code *)CONCAT44(local_a0._4_4_,uVar2);
        FUN_1003fb48c(FUN_100145348,&pcStack_b0,0xd0000000000000ad,
                      (ulong)local_80 | 0x8000000000000000,local_88,
                      (ulong)local_90 | 0x8000000000000000,0x173,7);
        _swift_release(pcVar1);
        if ((long)pcVar10 < 1) {
          return (code)0x2;
        }
        return (code)0x5;
      }
    }
    if (SCARRY8((long)pcVar8,(long)pcVar9)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100140630);
      (*pcVar1)();
    }
    if (pcVar8 + (long)pcVar9 != pcVar11) {
      if ((param_2 & 1) == 0) goto LAB_1001403c8;
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_a0 = (code *)CONCAT44(local_a0._4_4_,uVar2);
      FUN_1003fb48c(FUN_100145314,&pcStack_b0,0xd0000000000000ad,
                    (ulong)local_80 | 0x8000000000000000,local_88,
                    (ulong)local_90 | 0x8000000000000000,0x178,7);
      FUN_1001436f8(param_1,4);
      lVar3 = unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::delegate;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar3 == 0) {
LAB_100140490:
        _swift_release(pcVar1);
        return (code)0x4;
      }
      cVar13 = (code)0x4;
      uVar5 = 4;
      goto LAB_1001402f0;
    }
    uVar5 = *(undefined8 *)
             (unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
    local_6c = uVar2;
    _swift_retain(uVar5);
    FUN_1003e37e8(&local_68,&local_6c);
    _swift_release(uVar5);
    if (local_68 != (code *)0x0) {
      if (pcVar8 == (code *)0x0) {
        if (pcVar10 == (code *)0x0) {
          (*(code *)PTR____chkstk_darwin_100995498)
                    (*(undefined8 *)
                      (local_68 +
                      _TtC14UURemoteServer32ClipboardFileReceiveCopyTaskData::receiveDataCount));
          local_a0 = (code *)CONCAT44(local_a0._4_4_,uVar2);
          local_98 = local_68;
          if (extraout_x8 == extraout_x12) {
            FUN_1003fb48c(FUN_10014533c,&pcStack_b0,0xd0000000000000ad,
                          (ulong)local_80 | 0x8000000000000000,local_88,
                          (ulong)local_90 | 0x8000000000000000,0x18c,7);
            FUN_1001436f8(param_1,1);
            lVar3 = unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::delegate;
            _swift_unknownObjectWeakLoadStrong();
            if (lVar3 == 0) {
              _swift_release(pcVar1);
              _swift_release(local_68);
              return (code)0x1;
            }
            cVar13 = (code)0x1;
            uVar5 = 1;
          }
          else {
            FUN_1003fb48c(FUN_100145330,&pcStack_b0,0xd0000000000000ad,
                          (ulong)local_80 | 0x8000000000000000,local_88,
                          (ulong)local_90 | 0x8000000000000000,399,7);
            FUN_1001436f8(param_1,4);
            lVar3 = unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::delegate;
            _swift_unknownObjectWeakLoadStrong();
            if (lVar3 == 0) {
              _swift_release(pcVar1);
              pcVar1 = local_68;
              goto LAB_100140490;
            }
            cVar13 = (code)0x4;
            uVar5 = 4;
          }
        }
        else {
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_a0 = (code *)CONCAT44(local_a0._4_4_,uVar2);
          local_98 = pcVar10;
          FUN_1003fb48c(FUN_100145324,&pcStack_b0,0xd0000000000000ad,
                        (ulong)local_80 | 0x8000000000000000,local_88,
                        (ulong)local_90 | 0x8000000000000000,0x187,7);
          FUN_1001436f8(param_1,5);
          lVar3 = unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::delegate;
          _swift_unknownObjectWeakLoadStrong();
          if (lVar3 == 0) {
            _swift_release(pcVar1);
            _swift_release(local_68);
            return (code)0x5;
          }
          cVar13 = (code)0x5;
          uVar5 = 5;
        }
LAB_1001405e4:
        FUN_100167028(param_1,uVar5);
        _swift_unknownObjectRelease(lVar3);
        _swift_release(pcVar1);
        _swift_release(local_68);
        return cVar13;
      }
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_a0 = (code *)CONCAT44(local_a0._4_4_,uVar2);
      FUN_1003fb48c(thunk_FUN_1001452fc,&pcStack_b0,0xd0000000000000ad,
                    (ulong)local_80 | 0x8000000000000000,0x45746c7561666564,0xee002928726f7272,0x15c
                    ,7);
      FUN_1001436f8(param_1,2);
      lVar3 = unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::delegate;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar3 != 0) {
        cVar13 = (code)0x2;
        uVar5 = 2;
        goto LAB_1001405e4;
      }
      _swift_release(pcVar1);
      pcVar1 = local_68;
      goto LAB_10014030c;
    }
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar4 = local_80;
    local_a0 = (code *)CONCAT44(local_a0._4_4_,uVar2);
    FUN_1003fb48c(FUN_10014531c,&pcStack_b0,0xd0000000000000ad,(ulong)local_80 | 0x8000000000000000,
                  local_88,(ulong)local_90 | 0x8000000000000000,0x17f,7);
    if ((param_2 & 1) == 0) goto LAB_1001403c8;
    (*(code *)PTR____chkstk_darwin_100995498)();
  }
  else {
    if ((param_2 & 1) == 0) {
LAB_1001403c8:
      _swift_release(pcVar1);
      return (code)0x6;
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar4 = "allTakProcessData";
  }
  local_a0 = (code *)CONCAT44(local_a0._4_4_,uVar2);
  FUN_1003fb48c(thunk_FUN_1001452fc,&pcStack_b0,0xd0000000000000ad,
                (ulong)pcVar4 | 0x8000000000000000,0x45746c7561666564,0xee002928726f7272,0x15c,7);
  FUN_1001436f8(param_1,2);
  lVar3 = unaff_x20 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::delegate;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 == 0) {
LAB_10014030c:
    _swift_release(pcVar1);
    return (code)0x2;
  }
  cVar13 = (code)0x2;
  uVar5 = 2;
LAB_1001402f0:
  FUN_100167028(param_1,uVar5);
  _swift_unknownObjectRelease(lVar3);
  _swift_release(pcVar1);
  return cVar13;
}


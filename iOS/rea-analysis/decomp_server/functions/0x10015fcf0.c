// rea decompile_all
// name: FUN_10015fcf0
// address: 0x10015fcf0
// body: available
// range: 0x10015fcf0-0x100160513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10015fcf0(byte *param_1,long param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 extraout_x12_02;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  undefined4 uVar19;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined4 auStack_e8 [2];
  long alStack_e0 [2];
  code *local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined4 local_7c;
  undefined1 auStack_78 [24];
  char local_58;
  undefined7 uStack_57;
  
  lVar6 = 0;
  __s10Foundation4DateVMa();
  local_c0 = *(long *)(lVar6 + -8);
  local_b8 = (undefined *)lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_c0 + 0x40));
  lVar14 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar15 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar16 = lVar15 - extraout_x12;
  lVar6 = 0;
  __s10Foundation3URLVMa();
  local_98 = *(long *)(lVar6 + -8);
  lVar18 = *(long *)(local_98 + 0x40);
  local_a0 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = lVar16 - (lVar18 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_c8 = lVar13 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar6 = (lVar13 - extraout_x12_00) - extraout_x12_01;
  bVar1 = *param_1;
  local_b0 = lVar6;
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    local_90 = param_2;
    if (param_3 == 0) {
      if ((bVar1 & 1) != 0) {
        FUN_1001533d4();
        FUN_1001426bc(lVar15,param_4);
        lVar14 = local_98;
        lVar6 = local_a0;
        lVar16 = lVar15;
        (**(code **)(local_98 + 0x30))(lVar15,1,local_a0);
        if ((int)lVar16 == 1) {
          FUN_100040bb4(lVar15,&DAT_100a766c8,&DAT_10080b1d0);
        }
        else {
          lVar16 = lVar13;
          (**(code **)(lVar14 + 0x20))(lVar13,lVar15,lVar6);
          FUN_100153164();
          puVar7 = &DAT_100a75a28;
          FUN_100004bb4(&DAT_100a75a28,&DAT_100809ad0);
          bVar1 = *(byte *)(lVar14 + 0x50);
          _swift_allocObject();
          *(undefined8 *)(puVar7 + 0x18) = 2;
          *(undefined8 *)(puVar7 + 0x10) = 1;
          (**(code **)(lVar14 + 0x10))
                    (puVar7 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)),lVar13,
                     lVar6);
          FUN_1001894e4(puVar7,0,0);
          _swift_release(lVar16);
          _swift_bridgeObjectRelease(puVar7);
          FUN_100190108(*(undefined8 *)
                         (param_2 +
                         _TtC14UURemoteServer18ClipboardPCManager::
                         ___lazy_storage___fileReceiveModel));
          (**(code **)(lVar14 + 8))(lVar13,lVar6);
        }
      }
    }
    else {
      local_a8 = param_3;
      _swift_retain(param_3);
      lVar13 = local_90;
      uVar19 = (undefined4)param_4;
      if ((bVar1 & 1) != 0) {
        FUN_1001533d4();
        FUN_1001426bc(lVar16,param_4);
        lVar4 = local_98;
        lVar3 = local_a0;
        lVar8 = lVar16;
        (**(code **)(local_98 + 0x30))(lVar16,1,local_a0);
        lVar15 = local_b0;
        if ((int)lVar8 == 1) {
          FUN_100040bb4(lVar16,&DAT_100a766c8,&DAT_10080b1d0);
        }
        else {
          local_d0 = *(code **)(lVar4 + 0x20);
          (*local_d0)(local_b0,lVar16,lVar3);
          __s10Foundation4DateVACycfC(lVar14);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(undefined8 *)(lVar6 + -0x20) = extraout_x12_02;
          *(undefined4 *)(lVar6 + -0x18) = uVar19;
          *(long *)(lVar6 + -0x10) = lVar14;
          FUN_100407cdc(&local_58,FUN_10016bf08,lVar6 + -0x30,PTR___sSbN_1009958c8);
          cVar5 = local_58;
          (**(code **)(local_c0 + 8))(lVar14,local_b8);
          lVar13 = local_90;
          if (cVar5 == '\x01') {
            if ((*(long *)(local_90 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop) != 0)
               && (*(long *)(local_90 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop) ==
                   local_a8)) {
              uVar10 = *(ulong *)(local_90 +
                                 _TtC14UURemoteServer18ClipboardPCManager::
                                 ___lazy_storage___fileReceiveModel);
              FUN_100190108();
              lVar6 = local_b0;
              uVar12 = 0;
              if ((uVar10 & 1) != 0) {
                FUN_100153164();
                puVar7 = &DAT_100a75a28;
                FUN_100004bb4(&DAT_100a75a28,&DAT_100809ad0);
                lVar15 = local_98;
                uVar10 = (ulong)*(byte *)(local_98 + 0x50);
                _swift_allocObject();
                lVar14 = local_a0;
                *(undefined8 *)(puVar7 + 0x18) = 2;
                *(undefined8 *)(puVar7 + 0x10) = 1;
                pcVar9 = *(code **)(lVar15 + 0x10);
                local_b8 = puVar7;
                (*pcVar9)(puVar7 + (uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff)),lVar6,local_a0);
                puVar7 = &DAT_10099f2e0;
                _swift_allocObject(&DAT_10099f2e0,0x18,7);
                _swift_unknownObjectWeakInit(puVar7 + 0x10,lVar13);
                lVar13 = local_c8;
                (*pcVar9)(local_c8,lVar6,lVar14);
                uVar17 = uVar10 + 0x24 & (uVar10 ^ 0xffffffffffffffff);
                puVar11 = &DAT_10099fc50;
                _swift_allocObject(&DAT_10099fc50,uVar17 + lVar18,uVar10 | 7);
                lVar6 = local_a8;
                *(undefined **)(puVar11 + 0x10) = puVar7;
                *(long *)(puVar11 + 0x18) = local_a8;
                *(undefined4 *)(puVar11 + 0x20) = uVar19;
                (*local_d0)(puVar11 + uVar17,lVar13,lVar14);
                _swift_retain(lVar6);
                _swift_retain(puVar7);
                puVar2 = local_b8;
                FUN_1001894e4(local_b8,FUN_10016bf2c,puVar11);
                _swift_release(lVar6);
                _swift_release(uVar12);
                _swift_bridgeObjectRelease(puVar2);
                _swift_release(puVar11);
                (**(code **)(local_98 + 8))(local_b0,lVar14);
                _swift_release(puVar7);
                return;
              }
              FUN_10015659c(0x1000000000000018,0x8000000100894700);
              _swift_release(local_a8);
              (**(code **)(local_98 + 8))(lVar6,local_a0);
              return;
            }
            (**(code **)(local_98 + 8))(local_b0,lVar3);
          }
          else {
            (**(code **)(lVar4 + 8))(lVar15,lVar3);
            lVar13 = local_90;
          }
        }
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(undefined4 *)(lVar6 + -0x10) = uVar19;
      pcVar9 = FUN_10016bf00;
      FUN_1003fb4bc(FUN_10016bf00,lVar6 + -0x20,0xd0000000000000a4,0x800000010088d870,
                    0xd000000000000020,0x80000001008945d0,0x267,0);
      if ((*(long *)(lVar13 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop) != 0) &&
         (*(long *)(lVar13 + _TtC14UURemoteServer18ClipboardPCManager::incomingDrop) == local_a8)) {
        pcVar9 = (code *)0x1000000000000018;
        FUN_10015659c(0x1000000000000018,0x80000001008946e0);
      }
      FUN_1001533d4();
      uVar12 = *(undefined8 *)
                (pcVar9 + _TtC14UURemoteServer29ClipboardFileReceiveCopyModel::allTakProcessData);
      local_7c = uVar19;
      _swift_retain(uVar12);
      FUN_1003e37e8(&local_58,&local_7c);
      _swift_release(uVar12);
      lVar6 = CONCAT71(uStack_57,local_58);
      if (lVar6 != 0) {
        FUN_100004bb4(&DAT_100a77058,&DAT_10080e920);
        puVar7 = &DAT_10099f868;
        _swift_allocObject(&DAT_10099f868,0x18,7);
        _swift_unknownObjectWeakInit(puVar7 + 0x10,pcVar9);
        puVar11 = &DAT_10099fc28;
        _swift_allocObject(&DAT_10099fc28,0x20,7);
        *(long *)(puVar11 + 0x10) = lVar6;
        *(undefined **)(puVar11 + 0x18) = puVar7;
        _swift_retain(lVar6);
        _swift_retain(puVar7);
        pcVar9 = thunk_FUN_10016bb80;
        FUN_1003f1064(0x3ff0000000000000,thunk_FUN_10016bb80,puVar11);
        _swift_release(lVar6);
        _swift_release(pcVar9);
        _swift_release(puVar7);
        _swift_release(puVar11);
      }
      FUN_100143100(param_4);
      _swift_release(local_a8);
    }
  }
  return;
}


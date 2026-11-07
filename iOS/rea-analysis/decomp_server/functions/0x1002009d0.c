// rea decompile_all
// name: FUN_1002009d0
// address: 0x1002009d0
// body: available
// range: 0x1002009d0-0x1002013cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002009d0(undefined4 param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  code *param_6,undefined8 param_7)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ID IVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  char *pcVar15;
  undefined1 auStack_160 [16];
  code *local_150;
  undefined8 uStack_148;
  undefined4 local_140 [2];
  ulong local_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  undefined *local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  undefined4 local_e8;
  uint local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined8 local_c8;
  long local_c0;
  ulong local_88;
  undefined1 auStack_80 [32];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_80,0,0);
  lVar2 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    FUN_1000c7b64();
    lVar10 = *(long *)(lVar2 + 0x78);
    bVar1 = *(byte *)(lVar2 + 0x81);
    _swift_release(lVar2);
    if (((bVar1 & 1) == 0) && (lVar10 == 6)) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_150 = param_6;
      uStack_148 = param_7;
      local_140[0] = param_1;
      local_138 = param_2;
      local_130 = param_3;
      local_128 = param_4;
      local_120 = param_5;
      FUN_1003fb45c(FUN_100203914,auStack_160,0xd0000000000000a0,0x800000010088d990,
                    0xd000000000000049,0x80000001008a29b0,0x62,0);
    }
  }
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar2 = DAT_100b360a8;
  if ((*(byte *)(*(long *)(DAT_100b360a8 + 0x88) +
                 _TtC14UURemoteServer19SecondScreenManager::rotatingScreenID + 4) & 1) == 0) {
    FUN_100401b14(0);
    FUN_1003fb4bc(FUN_1001fe288,0,0xd0000000000000a0,0x800000010088d990,0xd00000000000003d,
                  0x80000001008a2a00,0xbe,0);
  }
  else {
    uVar11 = *(undefined8 *)(DAT_100b360a8 + 0x80);
    uVar3 = param_3;
    FUN_1004e2fa0(param_3,param_4,param_5);
    _swift_retain(uVar11);
    FUN_100027bc4();
    _swift_release(uVar11);
    if ((uVar3 >> 0x20 & 1) == 0) {
      local_e0 = param_7;
      IVar4 = _objc_msgSend(*(ID *)(*(long *)(lVar2 + 0x80) + 0x10),"screenId");
      local_e8 = (undefined4)IVar4;
      uVar11 = 0;
      FUN_100401b14();
      (*(code *)PTR____chkstk_darwin_100995498)();
      iVar14 = (int)uVar3;
      local_120 = CONCAT44(local_120._4_4_,iVar14);
      local_d0 = "st(_:message:action:type:)";
      local_140[0] = param_1;
      local_138 = param_3;
      local_130 = param_4;
      local_128 = param_5;
      local_c8 = uVar11;
      FUN_1003fb48c(FUN_1002038c8,&local_150,0xd0000000000000a0,0x800000010088d990,
                    0xd000000000000049,0x80000001008a29b0,0x6f,0);
      IVar4 = _objc_msgSend(*(ID *)(*(long *)(lVar2 + 0x80) + 0x10),"screenId");
      uVar5 = param_3;
      FUN_1004e2fa0(param_3,param_4,param_5);
      local_e4 = (uint)(-1 < (int)uVar5 && (int)IVar4 != iVar14);
      uVar5 = param_3;
      FUN_1004e3194(param_3,param_4,param_5);
      local_d8 = 0xd000000000000049;
      local_c0 = lVar2;
      if (((int)uVar5 < 1) ||
         (uVar5 = param_3, FUN_1004e3388(param_3,param_4,param_5), (int)uVar5 < 1)) {
        (*(code *)PTR____chkstk_darwin_100995498)();
        pcVar15 = local_d0;
        local_130 = CONCAT44(local_130._4_4_,iVar14);
        local_128 = param_3;
        local_120 = param_4;
        local_118 = param_5;
        FUN_1003fb48c(FUN_1002038dc,local_140,0xd0000000000000a0,
                      (ulong)local_d0 | 0x8000000000000000,0xd000000000000049,0x80000001008a29b0,
                      0x7f,0);
        local_108 = PTR___swiftEmptyArrayStorage_100995ea0;
        uVar11 = 0xd000000000000049;
      }
      else {
        uVar11 = *(undefined8 *)(lVar2 + 0x80);
        uVar5 = param_3;
        FUN_1004e3194(param_3,param_4,param_5);
        local_f0 = CONCAT44(local_f0._4_4_,(int)uVar5);
        uVar5 = param_3;
        FUN_1004e3388(param_3,param_4,param_5);
        uVar6 = param_3;
        FUN_1004e47d0(param_3,param_4,param_5);
        uVar7 = param_3;
        FUN_1004e49c4(param_3,param_4,param_5);
        _swift_retain(uVar11);
        uVar8 = uVar3;
        FUN_100024470(uVar3,local_f0 & 0xffffffff,uVar5,uVar6,uVar7);
        _swift_release(uVar11);
        if ((int)uVar8 == 0) {
          local_108 = PTR___swiftEmptyArrayStorage_100995ea0;
          pcVar15 = local_d0;
          uVar11 = local_d8;
        }
        else {
          puVar9 = (undefined *)0x0;
          FUN_1000347e4(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
          uVar5 = *(ulong *)(puVar9 + 0x10);
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar5) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            FUN_1000347e4(puVar9,uVar5 + 1,1);
          }
          *(ulong *)(puVar9 + 0x10) = uVar5 + 1;
          *(int *)(puVar9 + uVar5 * 0x38 + 0x20) = (int)uVar8;
          *(undefined8 *)(puVar9 + uVar5 * 0x38 + 0x28) = 0;
          *(undefined8 *)(puVar9 + uVar5 * 0x38 + 0x30) = 0xe000000000000000;
          *(undefined8 *)(puVar9 + uVar5 * 0x38 + 0x38) = 0;
          *(undefined8 *)(puVar9 + uVar5 * 0x38 + 0x40) = 0xe000000000000000;
          *(undefined8 *)(puVar9 + uVar5 * 0x38 + 0x50) = 0xc000000000000000;
          *(undefined8 *)(puVar9 + uVar5 * 0x38 + 0x48) = 0;
          pcVar15 = local_d0;
          uVar11 = local_d8;
          local_108 = puVar9;
        }
      }
      uVar12 = *(undefined8 *)(local_c0 + 0x80);
      _swift_retain(uVar12);
      uVar5 = uVar3;
      FUN_10001a914();
      _swift_release(uVar12);
      local_100 = param_3;
      local_f8 = param_4;
      local_f0 = param_5;
      local_88 = uVar5;
      FUN_1001fd13c(&local_88,param_3,param_4,param_5,uVar3);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_120 = uVar5;
      FUN_1003fb48c(FUN_1002038ec,&local_130,0xd0000000000000a0,(ulong)pcVar15 | 0x8000000000000000,
                    uVar11,0x80000001008a29b0,0x95,0);
      lVar2 = unaff_x20 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar2 == 0) {
        FUN_1003fb48c(FUN_1001fdf68,0,0xd0000000000000a0,(ulong)pcVar15 | 0x8000000000000000,uVar11,
                      0x80000001008a29b0,0x9a,0);
        local_110 = 0;
        uVar7 = local_f0;
        uVar6 = local_f8;
        uVar3 = local_100;
      }
      else {
        FUN_1000c7b64();
        lVar10 = *(long *)(lVar2 + 0x18);
        if (lVar10 == 0) {
          FUN_1003fb48c(FUN_100112350,0,0xd0000000000000ac,0x800000010088b950,0xd00000000000002c,
                        0x800000010088ba40,0x224,0);
          _swift_release(lVar2);
        }
        else {
          uVar11 = *(undefined8 *)(lVar2 + 0x20);
          uVar12 = *(undefined8 *)(lVar2 + 0x28);
          _swift_bridgeObjectRetain(lVar10);
          _swift_bridgeObjectRetain(uVar11);
          _swift_bridgeObjectRetain(uVar12);
          FUN_10019eb70(uVar5,lVar10,uVar11,uVar12);
          _swift_bridgeObjectRelease(uVar12);
          _swift_bridgeObjectRelease(uVar11);
          _swift_bridgeObjectRelease(lVar10);
          _swift_release(lVar2);
        }
        uVar7 = local_f0;
        uVar6 = local_f8;
        uVar3 = local_100;
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_120 = uVar5;
        FUN_1003fb48c(FUN_1002038f4,&local_130,0xd0000000000000a0,
                      (ulong)local_d0 | 0x8000000000000000,local_d8,0x80000001008a29b0,0x98,0);
        local_110 = uVar5;
      }
      lVar2 = unaff_x20 + 0x10;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar2 != 0) {
        FUN_1000c7b64();
        lVar10 = *(long *)(lVar2 + 0x78);
        bVar1 = *(byte *)(lVar2 + 0x81);
        _swift_release(lVar2);
        if (((bVar1 & 1) == 0) && (lVar10 == 6)) {
          (*(code *)PTR____chkstk_darwin_100995498)();
          uStack_148 = local_e0;
          local_150 = param_6;
          local_140[0] = param_1;
          local_138 = param_2;
          local_130 = uVar3;
          local_128 = uVar6;
          local_120 = uVar7;
          local_118 = uVar5;
          FUN_1003fb45c(FUN_1002038fc,auStack_160,0xd0000000000000a0,
                        (ulong)local_d0 | 0x8000000000000000,local_d8,0x80000001008a29b0,0x9f,0);
        }
      }
      lVar2 = local_c0;
      uVar11 = *(undefined8 *)(local_c0 + 0x80);
      _swift_retain(uVar11);
      puVar9 = local_108;
      local_88 = local_88 & 0xffffffffffffff00;
      FUN_10001b168(param_1,param_2,uVar5,local_e8,param_6 == (code *)0x0,local_108,param_6,local_e0
                   );
      _swift_release(uVar11);
      _swift_bridgeObjectRelease(puVar9);
      if (((*(byte *)(unaff_x20 + 0x18) & 1) == 0) &&
         (*(char *)(*(long *)(lVar2 + 0x88) + 0x14) == '\x01')) {
        lVar10 = unaff_x20 + 0x10;
        _swift_unknownObjectWeakLoadStrong();
        if (lVar10 != 0) {
          FUN_1000c7b64();
          lVar13 = *(long *)(lVar10 + 0x78);
          bVar1 = *(byte *)(lVar10 + 0x81);
          _swift_release(lVar10);
          if (((bVar1 & 1) == 0) && (lVar13 == 6)) goto LAB_10020133c;
        }
        *(undefined1 *)(unaff_x20 + 0x18) = 1;
        uVar11 = *(undefined8 *)(lVar2 + 0x80);
        _swift_retain(uVar11);
        FUN_100024070();
        _swift_release(uVar11);
      }
LAB_10020133c:
      if (local_e4 == 0) {
        return;
      }
      uVar11 = *(undefined8 *)(lVar2 + 0x80);
      _swift_retain(uVar11);
      FUN_1000162bc(param_1,0);
      _swift_release(uVar11);
      return;
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_130 = param_3;
    local_128 = param_4;
    local_120 = param_5;
    FUN_1003fb4ec(FUN_1002038bc,local_140,0xd0000000000000a0,0x800000010088d990,0xd000000000000049,
                  0x80000001008a29b0,0x6a,0);
  }
  puVar9 = &DAT_100a75b88;
  FUN_100004bb4(&DAT_100a75b88,&DAT_100812c00);
  _swift_allocObject();
  *(undefined8 *)(puVar9 + 0x18) = 2;
  *(undefined8 *)(puVar9 + 0x10) = 1;
  *(undefined4 *)(puVar9 + 0x20) = 0xffffffff;
  *(undefined8 *)(puVar9 + 0x28) = 0;
  *(undefined8 *)(puVar9 + 0x30) = 0xe000000000000000;
  *(undefined8 *)(puVar9 + 0x38) = 0;
  *(undefined8 *)(puVar9 + 0x40) = 0xe000000000000000;
  *(undefined8 *)(puVar9 + 0x50) = 0xc000000000000000;
  *(undefined8 *)(puVar9 + 0x48) = 0;
  if (param_6 == (code *)0x0) {
    uVar11 = *(undefined8 *)(lVar2 + 0x80);
    _swift_retain(uVar11);
    FUN_10001e180(param_1,param_2,puVar9);
    _swift_release(uVar11);
    _swift_bridgeObjectRelease(puVar9);
  }
  else {
    _swift_retain(param_7);
    (*param_6)(puVar9);
    _swift_bridgeObjectRelease(puVar9);
    FUN_10007ed2c(param_6,param_7);
  }
  return;
}


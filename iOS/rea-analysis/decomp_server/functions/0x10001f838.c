// rea decompile_all
// name: FUN_10001f838
// address: 0x10001f838
// body: available
// range: 0x10001f838-0x10001ff93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010001ff80) */

undefined * FUN_10001f838(ulong param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  ulong uVar13;
  class_t *self;
  ID self_00;
  ulong uVar14;
  ID IVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  int extraout_w12;
  long extraout_x12;
  long unaff_x20;
  long lVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  ulong uVar21;
  undefined8 ***pppuVar22;
  undefined8 ****ppppuVar23;
  undefined4 uVar24;
  undefined8 ***pppuVar25;
  uint uVar26;
  undefined1 auStack_190 [16];
  undefined4 local_180;
  undefined4 uStack_17c;
  uint local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  uint uStack_168;
  undefined4 local_164;
  undefined8 ***local_160;
  char *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  char *local_140;
  char *local_138;
  char *local_130;
  undefined *local_e8;
  undefined1 auStack_d0 [16];
  undefined4 local_c0;
  undefined1 auStack_b8 [32];
  undefined8 ***local_98;
  uint uStack_90;
  uint local_8c;
  uint local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  char local_70;
  
  local_c0 = param_3;
  FUN_10003a168(param_2,FUN_100040b14,auStack_d0);
  ppppuVar23 = *(undefined8 *****)(param_2 + 0x10);
  ppppuVar11 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100995ea0;
  if (ppppuVar23 != (undefined8 ****)0x0) {
    ppppuVar11 = ppppuVar23;
    FUN_10006d60c(ppppuVar23,0);
    ppppuVar12 = &local_98;
    FUN_100074110(ppppuVar12,ppppuVar11 + 4,ppppuVar23,param_2);
    uVar19 = CONCAT44(local_8c,uStack_90);
    uVar4 = CONCAT44(uStack_84,local_88);
    _swift_retain(param_2);
    FUN_10003f638(local_98,uVar19,uVar4,uStack_80,local_78);
    if (ppppuVar12 != ppppuVar23) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10001ff80);
      (*pcVar9)();
    }
  }
  local_98 = ppppuVar11;
  FUN_100033714(&local_98);
  _swift_release(param_2);
  pppuVar22 = (undefined8 ***)local_98[2];
  local_160 = local_98;
  uVar21 = param_1;
  if (pppuVar22 == (undefined8 ***)0x0) {
    local_e8 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    ppppuVar11 = (undefined8 ****)(local_98 + 4);
    local_158 = " preferredTrack:";
    local_130 = " controllerResolution:";
    local_138 = "screensDidWake()";
    local_140 = "StreamerManager.swift";
    local_e8 = PTR___swiftEmptyArrayStorage_100995ea0;
    uStack_148 = 0xc000000000000000;
    local_150 = 0;
    uVar20 = (undefined4)param_1;
    do {
      pppuVar25 = *ppppuVar11;
      puVar17 = auStack_b8;
      _swift_beginAccess(unaff_x20 + 0x80,puVar17,0x20,0);
      uVar6 = uStack_16c;
      uVar10 = local_170;
      lVar18 = *(long *)(unaff_x20 + 0x80);
      uVar3 = SUB84(pppuVar25,0);
      uVar26 = (uint)((ulong)pppuVar25 >> 0x20);
      local_170 = (undefined4)unaff_x20;
      uVar5 = local_170;
      uStack_16c = (undefined4)((ulong)unaff_x20 >> 0x20);
      uVar7 = uStack_16c;
      local_170 = uVar10;
      uStack_16c = uVar6;
      if (*(long *)(lVar18 + 0x10) == 0) {
LAB_10001f9d8:
        _swift_endAccess(auStack_b8);
LAB_10001f9e0:
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_180 = (undefined4)uVar21;
        uStack_17c = uVar3;
        local_178 = uVar26;
        local_170 = uVar5;
        uStack_16c = uVar7;
        FUN_1003fb48c(FUN_100040b24,auStack_190,0xd0000000000000a9,0x8000000100877660,
                      0xd00000000000003a,0x800000010087c130,0x9d9,0);
      }
      else {
        uVar14 = (ulong)pppuVar25 & 0xffffffff;
        uVar13 = uVar14;
        thunk_FUN_1001a2c34();
        if (((ulong)puVar17 & 1) == 0) goto LAB_10001f9d8;
        uVar2 = *(uint *)(*(long *)(lVar18 + 0x38) + uVar13 * 4);
        _swift_endAccess(auStack_b8);
        if (uVar2 != uVar26) goto LAB_10001f9e0;
        uVar19 = *(undefined8 *)(unaff_x20 + 0x10);
        self = &objc::class_t::StartVideoCaptureConfig;
        _objc_allocWithZone();
        self_00 = _objc_msgSend((ID)self,"init");
        FUN_100039cd0(uVar19,self_00);
        _objc_msgSend(self_00,"setScreenId:",uVar14);
        FUN_10001aa0c(uVar14);
        _objc_msgSend(self_00,"setVideoTrackIndex:",uVar14);
        _objc_msgSend(self_00,"screenId");
        FUN_10003990c(&local_98);
        uVar10 = local_164;
        uVar2 = uStack_168;
        uStack_168 = (uint)self_00;
        uVar8 = uStack_168;
        local_164 = (undefined4)(self_00 >> 0x20);
        uVar6 = local_164;
        uStack_168 = uVar2;
        local_164 = uVar10;
        if (local_70 == '\x02') {
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_170 = uVar5;
          uStack_16c = uVar7;
          uStack_168 = uVar8;
          local_164 = uVar6;
          FUN_1003fb48c(thunk_FUN_10003ef70,&local_180,0xd0000000000000a9,0x8000000100877660,
                        0xd000000000000019,(ulong)local_158 | 0x8000000000000000,0x9f0,0);
        }
        else {
          uVar21 = (ulong)local_8c;
          uVar13 = (ulong)local_88;
          uVar14 = (ulong)uStack_90;
          _objc_msgSend(self_00,"setResolutionWidth:",(ulong)local_98 >> 0x20);
          _objc_msgSend(self_00,"setResolutionHeight:",uVar14);
          _objc_msgSend(self_00,"setResolutionPixelWidth:",uVar21);
          _objc_msgSend(self_00,"setResolutionPixelHeight:",uVar13);
        }
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_180 = uVar3;
        local_178 = uVar8;
        uStack_174 = uVar6;
        local_170 = uVar5;
        uStack_16c = uVar7;
        FUN_1003fb48c(thunk_FUN_10003ea0c,auStack_190,0xd0000000000000a9,0x8000000100877660,
                      0xd00000000000001a,(ulong)local_130 | 0x8000000000000000,0x2a8,0);
        _objc_msgSend(self_00,"setVideoTrackIndex:",(ulong)uVar26);
        uVar21 = param_1 & 0xffffffff;
        IVar15 = _objc_msgSend(*(ID *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) +
                                      _TtC14UURemoteServer15StreamerManager::controlled),
                               "ControlledStopVideoCapture:videoIndex:",uVar21,(ulong)uVar26);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_170 = uVar20;
        uStack_16c = uVar24;
        FUN_1003fb48c(thunk_FUN_10003f65c,&local_180,extraout_x12 + -0x14,
                      (ulong)local_138 | 0x8000000000000000,extraout_x12 + -0x8a,
                      (ulong)local_140 | 0x8000000000000000,0x18d,0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        uVar24 = (undefined4)IVar15;
        local_170 = uVar20;
        uStack_16c = uVar3;
        uStack_168 = uVar26;
        local_164 = uVar24;
        FUN_1003fb48c(FUN_100040b34,&local_180,0xd0000000000000a9,0x8000000100877660,
                      0xd00000000000003a,0x800000010087c130,0x9df,0);
        FUN_10001adc4(uVar21,self_00,0);
        uVar10 = (undefined4)uVar21;
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_170 = uVar20;
        uStack_16c = uVar3;
        uStack_168 = uVar26;
        local_164 = uVar10;
        FUN_1003fb48c(FUN_100040b40,&local_180,0xd0000000000000a9,0x8000000100877660,
                      0xd00000000000003a,0x800000010087c130,0x9e1,0);
        if (extraout_w12 == 0) {
          uVar21 = param_1 & 0xffffffff;
        }
        else {
          FUN_100020c04((ulong)pppuVar25 & 0xffffffff,uVar26);
          puVar16 = local_e8;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar16 & 1) == 0) {
            plVar1 = (long *)(local_e8 + 0x10);
            local_e8 = (undefined *)0x0;
            FUN_1000347e4(0,*plVar1 + 1,1);
          }
          uVar21 = param_1 & 0xffffffff;
          uVar13 = *(ulong *)(local_e8 + 0x10);
          if (*(ulong *)(local_e8 + 0x18) >> 1 <= uVar13) {
            puVar16 = (undefined *)(ulong)(1 < *(ulong *)(local_e8 + 0x18));
            FUN_1000347e4(puVar16,uVar13 + 1,1,local_e8);
            local_e8 = puVar16;
          }
          *(ulong *)(local_e8 + 0x10) = uVar13 + 1;
          *(int *)(local_e8 + uVar13 * 0x38 + 0x20) = extraout_w12;
          *(undefined8 *)(local_e8 + uVar13 * 0x38 + 0x28) = 0;
          *(undefined8 *)(local_e8 + uVar13 * 0x38 + 0x30) = 0xe000000000000000;
          *(undefined8 *)(local_e8 + uVar13 * 0x38 + 0x38) = 0;
          *(undefined8 *)(local_e8 + uVar13 * 0x38 + 0x40) = 0xe000000000000000;
          *(undefined8 *)(local_e8 + uVar13 * 0x38 + 0x50) = uStack_148;
          *(undefined8 *)(local_e8 + uVar13 * 0x38 + 0x48) = local_150;
        }
      }
      ppppuVar11 = ppppuVar11 + 1;
      pppuVar22 = (undefined8 ***)((long)pppuVar22 + -1);
    } while (pppuVar22 != (undefined8 ***)0x0);
  }
  _swift_release(local_160);
  if (*(long *)(local_e8 + 0x10) != 0) {
    FUN_1000162bc(uVar21,0);
  }
  return local_e8;
}


// rea decompile_all
// name: FUN_10018ced8
// address: 0x10018ced8
// body: available
// range: 0x10018ced8-0x10018d4cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10018ced8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_e0 [16];
  ulong auStack_d0 [2];
  char *local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100a766c8;
  FUN_100004bb4(&DAT_100a766c8,&DAT_10080b1d0);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_b0 = (long)&local_c0 - extraout_x8;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  uVar12 = ((long)&local_c0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) {
    FUN_10018c1b4();
    _swift_allocObject();
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    (**(code **)(lVar13 + 0x38))
              (param_1 + _TtC14UURemoteServer24ClipboardFileReceiveInfo::fileUrl,1,1,lVar3);
    local_90 = param_1;
    FUN_10061630c(&local_90);
    _swift_release(param_1);
  }
  else {
    local_a8 = lVar13;
    local_a0 = param_2;
    local_98 = lVar3;
    FUN_100191ed4(param_3,param_4,param_5);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = param_3;
    *(undefined8 *)(param_1 + 0x38) = param_4;
    _swift_bridgeObjectRetain_n(param_4,2);
    _swift_bridgeObjectRelease(uVar10);
    uVar10 = 0;
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)(uVar12 - 0x10) = param_3;
    *(undefined8 *)(uVar12 - 8) = param_4;
    local_c0 = s______baseUrl__100898ef0 + 0x10;
    uStack_b8 = uVar10;
    FUN_1003fb45c(FUN_100192474,uVar12 - 0x20,0xd0000000000000ad,0x8000000100890a70,
                  0xd000000000000029,0x8000000100898f00,0x74,7);
    local_90 = param_6;
    uStack_88 = param_7;
    _swift_bridgeObjectRetain(param_7);
    __sSS6appendyySSF(param_3,param_4);
    _swift_bridgeObjectRelease(param_4);
    uVar10 = uStack_88;
    lVar3 = local_90;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(local_90,uStack_88);
    _swift_bridgeObjectRelease(uVar10);
    IVar4 = NSURL::fileURLWithPath_((ID)&_OBJC_CLASS___NSURL,"fileURLWithPath:",lVar3);
    __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(uVar12,IVar4);
    pcVar9 = "defaultManager";
    IVar5 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    IVar4 = IVar5;
    __s10Foundation3URLV4pathSSvg();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(pcVar9);
    IVar4 = NSFileManager::fileExistsAtPath_(IVar5,"fileExistsAtPath:",IVar4);
    if (((IVar4 & 1) == 0) || (uVar6 = uVar12, FUN_10021a470(), (uVar6 & 1) != 0)) {
      pcVar9 = "defaultManager";
      IVar5 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
      IVar4 = IVar5;
      __s10Foundation3URLV4pathSSvg();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(pcVar9);
      IVar4 = NSFileManager::createFileAtPath_contents_attributes_
                        (IVar5,"createFileAtPath:contents:attributes:",IVar4,0,0);
      lVar3 = local_a8;
      if ((int)IVar4 == 0) {
        _swift_bridgeObjectRelease(param_4);
        (*(code *)PTR____chkstk_darwin_100995498)();
        *(ulong *)(uVar12 - 0x10) = uVar12;
        FUN_1003fb45c(FUN_10019247c,uVar12 - 0x20,0xd0000000000000ad,0x8000000100890a70,
                      0xd000000000000029,(ulong)local_c0 | 0x8000000000000000,0x80,7);
        lVar8 = 0;
        FUN_10018c1b4();
        _swift_allocObject();
        lVar13 = local_98;
        *(undefined8 *)(lVar8 + 0x10) = 0;
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(lVar3 + 0x38))
                  (lVar8 + _TtC14UURemoteServer24ClipboardFileReceiveInfo::fileUrl,1,1,local_98);
        local_90 = lVar8;
        FUN_10061630c(&local_90);
        _swift_release(lVar8);
        _swift_release(param_1);
        pcVar11 = *(code **)(lVar3 + 8);
      }
      else {
        lVar7 = 0;
        FUN_10018c1b4();
        _swift_allocObject();
        lVar13 = local_98;
        *(undefined8 *)(lVar7 + 0x10) = 0;
        *(undefined8 *)(lVar7 + 0x18) = 0;
        lVar8 = _TtC14UURemoteServer24ClipboardFileReceiveInfo::fileUrl;
        pcVar11 = *(code **)(lVar3 + 0x38);
        (*pcVar11)(lVar7 + _TtC14UURemoteServer24ClipboardFileReceiveInfo::fileUrl,1,1,local_98);
        lVar1 = local_b0;
        (**(code **)(lVar3 + 0x10))(local_b0,uVar12,lVar13);
        (*pcVar11)(lVar1,0,1,lVar13);
        _swift_beginAccess(lVar7 + lVar8,&local_90,0x21,0);
        FUN_100135ab0(lVar1,lVar7 + lVar8);
        _swift_endAccess(&local_90);
        uVar10 = *(undefined8 *)(lVar7 + 0x18);
        *(undefined8 *)(lVar7 + 0x10) = param_3;
        *(undefined8 *)(lVar7 + 0x18) = param_4;
        _swift_bridgeObjectRelease(uVar10);
        local_90 = lVar7;
        FUN_10061630c(&local_90);
        _swift_release(lVar7);
        _swift_release(param_1);
        pcVar11 = *(code **)(lVar3 + 8);
      }
    }
    else {
      _swift_bridgeObjectRelease(param_4);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(ulong *)(uVar12 - 0x10) = uVar12;
      FUN_1003fb45c(FUN_100192484,uVar12 - 0x20,0xd0000000000000ad,0x8000000100890a70,
                    0xd000000000000029,(ulong)local_c0 | 0x8000000000000000,0x79,7);
      lVar8 = 0;
      FUN_10018c1b4();
      _swift_allocObject();
      lVar13 = local_98;
      lVar3 = local_a8;
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(local_a8 + 0x38))
                (lVar8 + _TtC14UURemoteServer24ClipboardFileReceiveInfo::fileUrl,1,1,local_98);
      local_90 = lVar8;
      FUN_10061630c(&local_90);
      _swift_release(lVar8);
      _swift_release(param_1);
      pcVar11 = *(code **)(lVar3 + 8);
    }
    (*pcVar11)(uVar12,lVar13);
  }
  return;
}


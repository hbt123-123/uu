// rea decompile_all
// name: FUN_10010c710
// address: 0x10010c710
// body: available
// range: 0x10010c710-0x10010cd1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010c710(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_d0 [16];
  ulong local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined4 local_98 [6];
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  uVar3 = param_2;
  FUN_100434128(param_2,param_3,param_4);
  *(bool *)(unaff_x20 + 0x60) = uVar3 == 1;
  if (((*(byte *)(unaff_x20 + 0x81) & 1) == 0) && (*(long *)(unaff_x20 + 0x78) == 6)) {
    uVar3 = param_2;
    FUN_100434128(param_2,param_3,param_4);
    if (uVar3 == 6) {
      uVar3 = param_2;
      uVar6 = param_3;
      FUN_100435bb4(param_2,param_3,param_4);
      if (*(ulong *)(unaff_x20 + 0x38) == 0) {
        _swift_bridgeObjectRelease(uVar6);
        goto LAB_10010c7ec;
      }
      if ((uVar3 == *(ulong *)(unaff_x20 + 0x30)) && (*(ulong *)(unaff_x20 + 0x38) == uVar6)) {
        _swift_bridgeObjectRelease(uVar6);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        _swift_bridgeObjectRelease(uVar6);
        if ((uVar3 & 1) == 0) goto LAB_10010c7ec;
      }
    }
    else {
LAB_10010c7ec:
      _swift_beginAccess(unaff_x20 + 0x88,auStack_78,0x21,0);
      if (*(char *)(unaff_x20 + 0x8c) == '\x01') {
        *(undefined4 *)(unaff_x20 + 0x88) = 0xffffffff;
        *(undefined1 *)(unaff_x20 + 0x8c) = 0;
        pcVar5 = *(code **)(unaff_x20 + 0x90);
        puVar4 = &DAT_100a75980;
        FUN_100004bb4(&DAT_100a75980,&DAT_100809a40);
        _swift_allocObject();
        *(undefined8 *)(puVar4 + 0x18) = 2;
        *(undefined8 *)(puVar4 + 0x10) = 1;
        local_80 = PTR___ss5Int32VN_100995c78;
        local_98[0] = 0xffffffff;
        FUN_10003e8bc(local_98,puVar4 + 0x30);
        *(undefined8 *)(puVar4 + 0x20) = 0x7365725f74736163;
        *(undefined8 *)(puVar4 + 0x28) = 0xeb00000000746c75;
        FUN_10003f094(local_98);
        (*pcVar5)(0xd00000000000001a,0x800000010088bb20,puVar4);
        _swift_bridgeObjectRelease(puVar4);
      }
      _swift_endAccess(auStack_78);
    }
    FUN_100112668(param_1);
  }
  uVar3 = param_2;
  FUN_100434128(param_2,param_3,param_4);
  if (uVar3 != 6) goto LAB_10010c98c;
  if (((*(byte *)(unaff_x20 + 0x81) & 1) == 0) && (*(long *)(unaff_x20 + 0x78) == 6)) {
    uVar3 = param_2;
    uVar6 = param_3;
    FUN_100435bb4(param_2,param_3,param_4);
    if (*(ulong *)(unaff_x20 + 0x38) == 0) {
      _swift_bridgeObjectRelease(uVar6);
    }
    else {
      if ((uVar3 == *(ulong *)(unaff_x20 + 0x30)) && (*(ulong *)(unaff_x20 + 0x38) == uVar6)) {
        _swift_bridgeObjectRelease(uVar6);
        goto LAB_10010c98c;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      _swift_bridgeObjectRelease(uVar6);
      if ((uVar3 & 1) != 0) goto LAB_10010c98c;
    }
  }
  _swift_beginAccess(unaff_x20 + 0x88,local_98,1,0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined4 *)(unaff_x20 + 0x88) = 0;
  *(undefined1 *)(unaff_x20 + 0x8c) = 1;
  *(code **)(unaff_x20 + 0x90) = thunk_FUN_1000f62a0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  _swift_release(uVar7);
LAB_10010c98c:
  uVar3 = param_2;
  uVar6 = param_3;
  FUN_100434128(param_2,param_3,param_4);
  *(ulong *)(unaff_x20 + 0x78) = uVar3;
  *(byte *)(unaff_x20 + 0x80) = (byte)uVar6 & 1;
  *(undefined1 *)(unaff_x20 + 0x81) = 0;
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar2 = DAT_100b360a8;
  uVar7 = *(undefined8 *)(DAT_100b360a8 + 0x50);
  uVar3 = param_2;
  FUN_100434128(param_2,param_3,param_4);
  _swift_retain(uVar7);
  FUN_10000dbb8(uVar3 == 6);
  _swift_release(uVar7);
  uVar3 = param_2;
  uVar6 = param_3;
  FUN_100434128(param_2,param_3,param_4);
  if ((uVar6 & 1) != 0) {
    local_c0 = param_2;
    uStack_b8 = param_3;
    local_b0 = param_4;
    if ((long)uVar3 < 5) {
      if ((2 < uVar3 - 2) && (uVar3 != 0)) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        FUN_1003fb48c(FUN_10011265c,auStack_d0,0xd0000000000000ac,0x800000010088b950,
                      0xd000000000000029,0x800000010088bca0,0xb5,0);
        FUN_10010ddc4(param_1,param_2,param_3,param_4);
        FUN_10010e620(param_1,param_2,param_3,param_4);
      }
    }
    else if ((long)uVar3 < 7) {
      if (uVar3 == 5) {
        FUN_10010cff8(param_1,param_2,param_3,param_4);
      }
      else {
        uVar7 = *(undefined8 *)(lVar2 + 0x80);
        _swift_retain(uVar7);
        FUN_100021838(param_1);
        _swift_release(uVar7);
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        FUN_1003fb48c(FUN_100112650,auStack_d0,0xd0000000000000ac,0x800000010088b950,
                      0xd00000000000002e,0x800000010088bc70,0xa5,0);
        FUN_10010d488(param_2,param_3,param_4);
        FUN_10010d6c4(param_1,param_2,param_3,param_4);
      }
    }
    else if (uVar3 != 7) {
      if (uVar3 == 8) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        pcVar1 = "handleOnReceiveTerminalAppData(_:options:)";
        lVar2 = -0x82;
        pcVar5 = FUN_100112644;
        uVar7 = 0xab;
      }
      else {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        pcVar1 = "handleOnReceivePortMappingAppData(_:options:)";
        lVar2 = -0x7f;
        pcVar5 = FUN_100112638;
        uVar7 = 0xb0;
      }
      FUN_1003fb48c(pcVar5,auStack_d0,0xd0000000000000ac,0x800000010088b950,
                    lVar2 + -0x2fffffffffffff54,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,uVar7,0
                   );
      FUN_10010ddc4(param_1,param_2,param_3,param_4);
    }
  }
  return;
}


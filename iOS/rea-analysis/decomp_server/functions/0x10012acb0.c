// rea decompile_all
// name: FUN_10012acb0
// address: 0x10012acb0
// body: available
// range: 0x10012acb0-0x10012b40b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10012b408 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

uint FUN_10012acb0(double param_1,double param_2,double param_3,double param_4,ID param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ID self;
  undefined1 *puVar5;
  undefined1 *puVar6;
  char *pcVar7;
  long extraout_x8;
  uint uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  undefined1 auStack_1c0 [16];
  int aiStack_1b0 [2];
  double adStack_1a8 [3];
  char *local_190;
  uint local_174;
  undefined4 local_170;
  undefined2 local_16c;
  undefined1 local_168;
  undefined2 uStack_167;
  undefined1 uStack_165;
  undefined2 local_164;
  undefined1 uStack_162;
  undefined4 local_160;
  undefined2 local_15c;
  long local_158;
  undefined1 local_150;
  undefined2 uStack_14f;
  undefined1 uStack_14d;
  undefined1 local_14c;
  undefined2 uStack_14b;
  double local_148;
  double local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined3 local_12f;
  undefined1 uStack_12c;
  undefined3 uStack_12b;
  undefined8 local_128;
  undefined1 local_120;
  undefined1 local_11f;
  undefined4 local_11e;
  undefined2 local_11a;
  ulong local_118;
  undefined1 local_110;
  undefined2 uStack_10f;
  undefined1 uStack_10d;
  undefined1 local_10c;
  undefined2 uStack_10b;
  undefined1 uStack_109;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined1 local_df;
  undefined4 local_de;
  undefined2 local_da;
  ulong local_d8;
  undefined1 local_d0 [5];
  undefined3 uStack_cb;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined3 uStack_ab;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined4 local_9e;
  undefined2 local_9a;
  ulong local_98;
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&local_190 + lVar1;
  uVar4 = param_5;
  FUN_100128e5c(param_1,param_2);
  if ((uVar4 & 1) == 0) {
LAB_10012adcc:
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_10012b40c,0,0xd000000000000095,0x800000010088e950,0x6174286b63696c63,
                  0xee00293a74656772,0x14,0);
  }
  else {
    FUN_1000f6060(0);
    uVar4 = param_5;
    FUN_1003d56bc();
    if (uVar4 == 0) goto LAB_10012adcc;
    iVar10 = 0;
    _AXIsProcessTrusted();
    if (iVar10 == 0) goto LAB_10012adcc;
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    lVar11 = DAT_100b360a8;
    uVar4 = 1;
    FUN_1000b35b4();
    if ((uVar4 & 1) != 0) goto LAB_10012adcc;
    lVar11 = *(long *)(lVar11 + 0x80);
    _swift_retain(lVar11);
    iVar10 = (int)param_5;
    if ((iVar10 < 0) || (FUN_1003d56bc(), param_5 == 0)) {
      param_5 = _objc_msgSend(*(ID *)(lVar11 + 0x10),"screenId");
      FUN_100027f54();
      if (param_5 != 0) goto LAB_10012ae94;
      _swift_release();
      iVar2 = (int)lVar11;
      param_3 = 0.0;
      param_4 = 0.0;
    }
    else {
LAB_10012ae94:
      _objc_msgSend(param_5,"frame");
      param_3 = param_3 * param_1;
      _objc_msgSend(param_5,"frame");
      param_4 = param_4 * param_2;
      FUN_10003f55c(param_5);
      _swift_release();
      iVar2 = (int)lVar11;
    }
    local_158 = 0;
    local_174 = 0;
    _AXUIElementCreateSystemWide();
    uVar4 = (ulong)(uint)(float)param_3;
    _AXUIElementCopyElementAtPosition(uVar4,(float)param_4);
    if ((((iVar2 == 0) && (local_158 != 0)) &&
        (lVar11 = local_158, _AXUIElementGetPid(local_158,&local_174), (int)lVar11 == 0)) &&
       (self = NSRunningApplication::runningApplicationWithProcessIdentifier_
                         ((ID)&_OBJC_CLASS___NSRunningApplication,
                          "runningApplicationWithProcessIdentifier:",(ulong)local_174), self != 0))
    {
      pcVar7 = "bundleIdentifier";
      puVar5 = (undefined1 *)NSRunningApplication::bundleIdentifier(self,"bundleIdentifier");
      if (puVar5 == (undefined1 *)0x0) goto LAB_10012af50;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      local_190 = pcVar7;
      if ((puVar5 == &DAT_d000000000000010) && (pcVar7 == (char *)0x800000010088e9f0)) {
        _swift_bridgeObjectRelease(0x800000010088e9f0);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (puVar5,pcVar7,&DAT_d000000000000010,0x800000010088e9f0,0);
        _swift_bridgeObjectRelease(pcVar7);
        if (((ulong)puVar5 & 1) == 0) goto LAB_10012af50;
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(int *)((long)aiStack_1b0 + lVar1) = iVar10;
      *(double *)((long)adStack_1a8 + lVar1) = param_1;
      *(double *)((long)adStack_1a8 + lVar1 + 8) = param_2;
      FUN_1003fb48c(FUN_10012b9a4,auStack_1c0 + lVar1,0xd000000000000095,0x800000010088e950,
                    0x6174286b63696c63);
      local_168 = 1;
      local_170 = CONCAT31(local_170._1_3_,1);
      __s10Foundation4DateVACycfC(lVar9);
      __s10Foundation4DateV21timeIntervalSince1970Sdvg();
      pcVar13 = *(code **)(lVar12 + 8);
      uVar14 = uVar4;
      (*pcVar13)(lVar9,lVar3);
      local_d0[0] = 3;
      uStack_cb = (undefined3)(CONCAT22(uStack_10b,CONCAT11(local_10c,uStack_10d)) >> 8);
      local_b8 = 0;
      local_b0 = local_168;
      uStack_ab = (undefined3)(CONCAT22(uStack_14b,CONCAT11(local_14c,uStack_14d)) >> 8);
      local_a8 = 0;
      local_a0 = (undefined1)local_170;
      local_9f = 5;
      local_9e = local_160;
      local_9a = local_15c;
      puVar5 = local_d0;
      local_c8 = param_3;
      dStack_c0 = param_4;
      local_98 = uVar4;
      FUN_10011878c(puVar5,6);
      if (((ulong)puVar5 & 1) != 0) {
        local_170 = CONCAT31(local_170._1_3_,1);
        __s10Foundation4DateVACycfC(lVar9);
        __s10Foundation4DateV21timeIntervalSince1970Sdvg();
        uVar4 = uVar14;
        (*pcVar13)(lVar9,lVar3);
        local_110 = 0;
        uStack_10f = (undefined2)CONCAT21(uStack_14f,local_150);
        uStack_10d = (undefined1)((ushort)uStack_14f >> 8);
        uStack_10b = (undefined2)CONCAT21(uStack_14b,local_14c);
        uStack_109 = (undefined1)((ushort)uStack_14b >> 8);
        local_f8 = 0;
        local_f0 = (undefined1)local_170;
        local_e8 = 0;
        local_e0 = 1;
        local_df = 0;
        local_de = CONCAT13(uStack_165,CONCAT21(uStack_167,local_168));
        local_da = local_164;
        puVar5 = &local_110;
        local_108 = param_3;
        dStack_100 = param_4;
        local_d8 = uVar14;
        FUN_10011878c(puVar5,6);
        __s10Foundation4DateVACycfC(lVar9);
        __s10Foundation4DateV21timeIntervalSince1970Sdvg();
        (*pcVar13)(lVar9,lVar3);
        local_150 = 1;
        uStack_14f = (undefined2)local_160;
        uStack_14d = (undefined1)((uint)local_160 >> 0x10);
        local_14c = local_160._3_1_;
        local_138 = 0;
        local_130 = 1;
        _local_12f = CONCAT13(uStack_165,CONCAT21(uStack_167,local_168));
        uStack_12b = (undefined3)(CONCAT13(uStack_162,CONCAT21(local_164,uStack_165)) >> 8);
        local_128 = 0;
        local_120 = 1;
        local_11f = 0;
        local_11e = local_170;
        local_11a = local_16c;
        puVar6 = &local_150;
        local_148 = param_3;
        local_140 = param_4;
        local_118 = uVar4;
        FUN_10011878c(puVar6,6);
        uVar8 = (uint)puVar5 & (uint)puVar6;
        goto LAB_10012ae14;
      }
      FUN_1003fb4ec(FUN_10012b58c,0,0xd000000000000095,0x800000010088e950,0x6174286b63696c63,
                    0xee00293a74656772,0x25,0);
    }
    else {
LAB_10012af50:
      FUN_100401b14(0);
      FUN_1003fb4bc(FUN_10012b438,0,0xd000000000000095,0x800000010088e950,0x6174286b63696c63,
                    0xee00293a74656772,0x1f,0);
    }
  }
  uVar8 = 0;
LAB_10012ae14:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_90) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8 & 1;
}


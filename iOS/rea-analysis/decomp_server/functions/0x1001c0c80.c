// rea decompile_all
// name: FUN_1001c0c80
// address: 0x1001c0c80
// body: available
// range: 0x1001c0c80-0x1001c102b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001c1028 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001c0c80(double param_1,double param_2,undefined8 param_3,double param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ID self;
  undefined4 uVar5;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 uVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_120 [8];
  double *local_118;
  undefined8 local_110;
  long local_108;
  double *local_100;
  long local_f8;
  long lStack_f0;
  undefined4 local_e6;
  undefined2 local_e2;
  undefined1 local_e0;
  undefined1 local_df;
  undefined2 uStack_de;
  undefined4 uStack_dc;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [8];
  double local_c0;
  double dStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined3 local_a7;
  undefined1 uStack_a4;
  undefined3 uStack_a3;
  undefined8 local_a0;
  undefined1 local_98;
  undefined1 local_97;
  undefined4 local_96;
  undefined2 local_92;
  double local_90;
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  local_f8 = *(long *)(lVar3 + -8);
  lStack_f0 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_f8 + 0x40));
  puVar8 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1001c102c,0,0xd00000000000008f,0x800000010089cc40,&DAT_d000000000000018,
                0x800000010089ccd0,0x16c,0);
  local_108 = _TtC14UURemoteServer12InputHandler::mouseStates;
  lVar3 = *(long *)(unaff_x20 + _TtC14UURemoteServer12InputHandler::mouseStates);
  lVar4 = lVar3;
  _swift_retain();
  FUN_1003bdcd0();
  _swift_release(lVar3);
  lVar3 = *(long *)(lVar4 + 0x10);
  if (lVar3 == 0) {
    _swift_bridgeObjectRelease(lVar4);
    return;
  }
  local_100 = (double *)
              (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePointTime);
  local_118 = (double *)(unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePoint)
  ;
  local_110 = _TtC14UURemoteServer12InputHandler::controller;
  lVar10 = 0x20;
  do {
    lVar7 = *(long *)(lVar4 + lVar10);
    if ((lVar7 == 1) || (uVar1 = lVar7 - 2U >> 1, 7 < (uVar1 | lVar7 << 0x3f))) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(&DAT_1008119f4 + uVar1 * 4);
    }
    iVar2 = 1;
    _CGEventSourceButtonState(1,uVar5);
    if (iVar2 != 0) {
      uVar6 = *(undefined8 *)(unaff_x20 + local_108);
      local_df = 0;
      local_d0 = lVar7;
      _swift_retain(uVar6);
      FUN_1003be2ac(&local_df,&local_d0);
      _swift_release(uVar6);
      uVar9 = 0;
      if (lVar7 != 1) {
        uVar1 = lVar7 - 2U >> 1;
        if ((uVar1 | lVar7 << 0x3f) < 8) {
          uVar9 = (undefined1)(0x405050503050201 >> ((uVar1 & 7) << 3));
        }
        else {
          uVar9 = 5;
        }
      }
      dVar11 = param_1;
      dVar13 = param_2;
      if (((ulong)local_100[1] & 1) == 0) {
        dVar12 = *local_100;
        __s10Foundation4DateVACycfC(puVar8);
        __s10Foundation4DateV21timeIntervalSince1970Sdvg();
        (**(code **)(local_f8 + 8))(puVar8,lStack_f0);
        dVar12 = param_1 - dVar12;
        dVar11 = dVar12;
        dVar13 = param_2;
        if (0.05 <= dVar12) goto LAB_1001c0f50;
        dVar11 = *local_118;
        dVar13 = local_118[1];
      }
      else {
LAB_1001c0f50:
        if (DAT_100a73b60 != -1) {
          _swift_once(&DAT_100a73b60,FUN_1000efc4c);
        }
        NSEvent::mouseLocation((ID)&_OBJC_CLASS___NSEvent,"mouseLocation");
        self = 0;
        dVar12 = dVar11;
        param_2 = dVar13;
        FUN_1000f6060();
        thunk_FUN_1003d7218();
        if (self != 0) {
          _objc_msgSend(self,"frame");
          dVar13 = param_4 - dVar13;
        }
      }
      local_d8 = 1;
      local_e0 = 1;
      __s10Foundation4DateVACycfC(puVar8);
      __s10Foundation4DateV21timeIntervalSince1970Sdvg();
      param_1 = dVar12;
      (**(code **)(local_f8 + 8))(puVar8,lStack_f0);
      local_c8[0] = 1;
      *(undefined4 *)((ulong)local_c8 | 1) = (undefined4)local_d0;
      *(undefined4 *)((long)((ulong)local_c8 | 1) + 3) = local_d0._3_4_;
      local_b0 = 0;
      local_a8 = local_d8;
      _local_a7 = CONCAT13((char)uStack_dc,CONCAT21(uStack_de,local_df));
      uStack_a3 = (undefined3)((uint)uStack_dc >> 8);
      local_a0 = 0;
      local_98 = local_e0;
      local_96 = local_e6;
      local_92 = local_e2;
      local_c0 = dVar11;
      dStack_b8 = dVar13;
      local_97 = uVar9;
      local_90 = dVar12;
      FUN_10011878c(local_c8,5);
    }
    lVar10 = lVar10 + 8;
    lVar3 = lVar3 + -1;
    if (lVar3 == 0) {
      _swift_bridgeObjectRelease(lVar4);
      return;
    }
  } while( true );
}


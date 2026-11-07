// rea decompile_all
// name: FUN_1001bea44
// address: 0x1001bea44
// body: available
// range: 0x1001bea44-0x1001becf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1001bea44(double param_1,double param_2,undefined8 param_3,double param_4,ulong param_5,
                  byte param_6,undefined8 param_7)

{
  long lVar1;
  ID self;
  ulong *puVar2;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  long lVar6;
  double dVar7;
  undefined1 auStack_d0 [10];
  undefined4 local_c6;
  undefined2 local_c2;
  undefined1 local_c0;
  undefined1 local_b8;
  bool local_b7;
  undefined2 uStack_b6;
  undefined4 uStack_b4;
  ulong local_b0;
  double local_a8;
  double dStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_7f;
  undefined4 local_7e;
  undefined2 local_7a;
  double local_78;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer12InputHandler::mouseStates);
  local_b7 = (param_6 & 1) != 0;
  local_b0 = param_5;
  _swift_retain(uVar3);
  FUN_1003be2ac(&local_b7,&local_b0);
  _swift_release(uVar3);
  if ((long)param_5 < 4) {
    if (param_5 == 1) {
      uVar5 = 0;
    }
    else if (param_5 == 2) {
      uVar5 = 1;
    }
    else {
LAB_1001beb48:
      uVar5 = 5;
    }
  }
  else if (param_5 == 4) {
    uVar5 = 2;
  }
  else if (param_5 == 8) {
    uVar5 = 3;
  }
  else {
    if (param_5 != 0x10) goto LAB_1001beb48;
    uVar5 = 4;
  }
  if (((ulong)((double *)
              (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePointTime))[1] &
      1) == 0) {
    dVar7 = *(double *)
             (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePointTime);
    __s10Foundation4DateVACycfC(puVar4);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar6 + 8))(puVar4,lVar1);
    dVar7 = param_1 - dVar7;
    param_2 = 0.05;
    param_1 = dVar7;
    if (dVar7 < 0.05) {
      param_1 = *(double *)
                 (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePoint);
      param_2 = ((double *)
                (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePoint))[1];
      goto LAB_1001bec14;
    }
  }
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  NSEvent::mouseLocation((ID)&_OBJC_CLASS___NSEvent,"mouseLocation");
  self = 0;
  dVar7 = param_1;
  FUN_1000f6060();
  thunk_FUN_1003d7218();
  if (self != 0) {
    _objc_msgSend(self,"frame");
    param_2 = param_4 - param_2;
  }
LAB_1001bec14:
  local_b8 = 1;
  local_c0 = 1;
  __s10Foundation4DateVACycfC(puVar4);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar6 + 8))(puVar4,lVar1);
  local_b0 = (CONCAT44(uStack_b4,CONCAT31(CONCAT21(uStack_b6,local_b7),param_6)) ^ 0xff) &
             0xffffffffffffff01;
  local_98 = 0;
  local_90 = local_b8;
  local_88 = 0;
  local_80 = local_c0;
  local_7e = local_c6;
  local_7a = local_c2;
  puVar2 = &local_b0;
  local_a8 = param_1;
  dStack_a0 = param_2;
  local_7f = uVar5;
  local_78 = dVar7;
  FUN_10011878c(puVar2,param_7);
  return (uint)puVar2 & 1;
}


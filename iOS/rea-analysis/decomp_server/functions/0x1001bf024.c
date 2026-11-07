// rea decompile_all
// name: FUN_1001bf024
// address: 0x1001bf024
// body: available
// range: 0x1001bf024-0x1001bf24f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1001bf024(double param_1,double param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,byte param_6,undefined8 param_7,byte param_8)

{
  long lVar1;
  ID self;
  undefined1 *puVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  double dVar4;
  undefined1 auStack_e0 [10];
  undefined4 local_d6;
  undefined2 local_d2;
  byte local_d0;
  byte local_c8;
  undefined1 local_c0 [8];
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  byte local_a0;
  undefined8 local_98;
  byte local_90;
  undefined1 local_8f;
  undefined4 local_8e;
  undefined2 local_8a;
  double local_88;
  
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (((ulong)((double *)
              (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePointTime))[1] &
      1) == 0) {
    dVar4 = *(double *)
             (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePointTime);
    __s10Foundation4DateVACycfC(puVar2);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar3 + 8))(puVar2,lVar1);
    dVar4 = param_1 - dVar4;
    param_2 = 0.05;
    param_1 = dVar4;
    if (dVar4 < 0.05) {
      param_1 = *(double *)
                 (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePoint);
      param_2 = ((double *)
                (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePoint))[1];
      goto LAB_1001bf160;
    }
  }
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  NSEvent::mouseLocation((ID)&_OBJC_CLASS___NSEvent,"mouseLocation");
  self = 0;
  dVar4 = param_1;
  FUN_1000f6060();
  thunk_FUN_1003d7218();
  if (self != 0) {
    _objc_msgSend(self,"frame");
    param_2 = param_4 - param_2;
  }
LAB_1001bf160:
  local_c8 = param_6 & 1;
  local_d0 = param_8 & 1;
  __s10Foundation4DateVACycfC(puVar2);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  local_c0[0] = 2;
  local_a0 = local_c8;
  local_90 = local_d0;
  local_8f = 5;
  local_8e = local_d6;
  local_8a = local_d2;
  puVar2 = local_c0;
  local_b8 = param_1;
  dStack_b0 = param_2;
  local_a8 = param_5;
  local_98 = param_7;
  local_88 = dVar4;
  FUN_10011878c(puVar2,6);
  return (uint)puVar2 & 1;
}


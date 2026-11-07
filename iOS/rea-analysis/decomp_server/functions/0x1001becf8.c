// rea decompile_all
// name: FUN_1001becf8
// address: 0x1001becf8
// body: available
// range: 0x1001becf8-0x1001bf023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1001becf8(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  ID self;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined4 local_120;
  undefined2 local_11c;
  undefined1 local_118;
  undefined4 local_110;
  undefined2 local_10c;
  undefined1 local_108;
  undefined4 local_107;
  undefined1 uStack_104;
  undefined3 uStack_103;
  undefined1 local_100;
  undefined2 uStack_ff;
  undefined1 uStack_fd;
  undefined1 local_fc;
  undefined2 uStack_fb;
  undefined1 uStack_f9;
  double local_f8;
  double dStack_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined4 local_ce;
  undefined2 local_ca;
  double local_c8;
  undefined1 local_c0 [8];
  double local_b8;
  double dStack_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_8f;
  undefined4 local_8e;
  undefined2 local_8a;
  double local_88;
  
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  lVar4 = (long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (((ulong)((double *)
              (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePointTime))[1] &
      1) == 0) {
    dVar9 = *(double *)
             (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePointTime);
    __s10Foundation4DateVACycfC(lVar4);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar6 + 8))(lVar4,lVar2);
    dVar9 = param_1 - dVar9;
    param_2 = 0.05;
    param_1 = dVar9;
    if (0.05 <= dVar9) goto LAB_1001bedc4;
    param_1 = *(double *)
               (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePoint);
    param_2 = ((double *)
              (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePoint))[1];
  }
  else {
LAB_1001bedc4:
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    NSEvent::mouseLocation((ID)&_OBJC_CLASS___NSEvent,"mouseLocation");
    self = 0;
    dVar9 = param_1;
    FUN_1000f6060();
    thunk_FUN_1003d7218();
    if (self != 0) {
      _objc_msgSend(self,"frame");
      param_2 = param_4 - param_2;
    }
  }
  if (param_5 < 4) {
    if (param_5 == 1) {
      uVar5 = 0;
      goto LAB_1001bee88;
    }
    if (param_5 == 2) {
      uVar5 = 1;
      goto LAB_1001bee88;
    }
  }
  else {
    if (param_5 == 4) {
      uVar5 = 2;
      goto LAB_1001bee88;
    }
    if (param_5 == 8) {
      uVar5 = 3;
      goto LAB_1001bee88;
    }
    if (param_5 == 0x10) {
      uVar5 = 4;
      goto LAB_1001bee88;
    }
  }
  uVar5 = 5;
LAB_1001bee88:
  local_120 = CONCAT31(local_120._1_3_,1);
  local_108 = 1;
  __s10Foundation4DateVACycfC(lVar4);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  pcVar7 = *(code **)(lVar6 + 8);
  dVar8 = dVar9;
  (*pcVar7)(lVar4,lVar2);
  local_c0[0] = 0;
  local_a8 = 0;
  local_a0 = (undefined1)local_120;
  local_98 = 0;
  local_90 = local_108;
  local_8e = local_110;
  local_8a = local_10c;
  puVar3 = local_c0;
  local_b8 = param_1;
  dStack_b0 = param_2;
  local_8f = uVar5;
  local_88 = dVar9;
  FUN_10011878c(puVar3,2);
  uVar1 = 0;
  if (((ulong)puVar3 & 1) != 0) {
    local_108 = 1;
    local_118 = 1;
    __s10Foundation4DateVACycfC(lVar4);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (*pcVar7)(lVar4,lVar2);
    local_100 = 1;
    uStack_ff = (undefined2)local_107;
    uStack_fd = (undefined1)((uint)local_107 >> 0x10);
    local_fc = uStack_104;
    uStack_fb = (undefined2)uStack_103;
    uStack_f9 = (undefined1)((uint3)uStack_103 >> 0x10);
    local_e8 = 0;
    local_e0 = local_108;
    local_d8 = 0;
    local_d0 = local_118;
    local_ce = local_120;
    local_ca = local_11c;
    puVar3 = &local_100;
    local_f8 = param_1;
    dStack_f0 = param_2;
    local_cf = uVar5;
    local_c8 = dVar8;
    FUN_10011878c(puVar3,2);
    uVar1 = (uint)puVar3;
  }
  return uVar1 & 1;
}


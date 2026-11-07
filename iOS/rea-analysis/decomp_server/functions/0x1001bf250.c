// rea decompile_all
// name: FUN_1001bf250
// address: 0x1001bf250
// body: available
// range: 0x1001bf250-0x1001bf6f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1001bf250(double param_1,double param_2,undefined8 param_3,double param_4,long *param_5)

{
  undefined8 *puVar1;
  double *pdVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  long lVar7;
  undefined1 *puVar8;
  ID IVar9;
  undefined1 *puVar10;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  undefined1 auStack_110 [16];
  long alStack_100 [2];
  undefined1 auStack_f0 [10];
  undefined4 local_e6;
  undefined2 local_e2;
  undefined7 local_e0;
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  long local_d0;
  undefined1 local_c8;
  undefined1 local_c0 [8];
  double local_b8;
  double dStack_b0;
  long local_a8;
  undefined1 local_a0;
  undefined8 local_9f;
  undefined8 uStack_97;
  undefined1 local_8f;
  undefined4 local_8e;
  undefined2 local_8a;
  double local_88;
  
  lVar7 = 0;
  __s10Foundation4DateVMa();
  lVar13 = *(long *)(lVar7 + -8);
  lVar14 = lVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  uVar6 = (uint)lVar14;
  lVar14 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_f0 + lVar14;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer12InputHandler::___lazy_storage___remainAbsCount);
  *puVar1 = 0x14;
  *(undefined1 *)(puVar1 + 1) = 0;
  if (DAT_100a73b78 != -1) {
    uVar6 = 0xa73b78;
    _swift_once(&DAT_100a73b78,FUN_100121efc);
  }
  if (DAT_100a73b70 != -1) {
    uVar6 = 0xa73b70;
    _swift_once(&DAT_100a73b70,FUN_100121d90);
  }
  if (DAT_100a79650 == (code *)0x0) {
    pbVar12 = (byte *)(unaff_x20 + _TtC14UURemoteServer12InputHandler::isCursorHidden);
    *pbVar12 = 0;
  }
  else {
    (*DAT_100a79650)();
    pbVar12 = (byte *)(unaff_x20 + _TtC14UURemoteServer12InputHandler::isCursorHidden);
    bVar3 = *pbVar12;
    *pbVar12 = (byte)uVar6 ^ 1;
    if (((uVar6 & 1) == 0) && (bVar3 == 0)) {
      *puVar1 = 0x14;
      *(undefined1 *)(puVar1 + 1) = 0;
    }
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(long *)((long)alStack_100 + lVar14) = unaff_x20;
  FUN_1003fb45c(FUN_1001c1580,auStack_110 + lVar14,0xd00000000000008f,0x800000010089cc40,
                0xd000000000000021,0x800000010089ce30,0xbe,0);
  if ((*pbVar12 & 1) == 0) {
    lVar15 = *param_5;
    bVar3 = *(byte *)(param_5 + 1);
    lVar14 = param_5[2];
    bVar4 = *(byte *)(param_5 + 3);
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    uVar11 = *(undefined8 *)(DAT_100b360a8 + 0x80);
    _swift_retain(uVar11);
    NSEvent::mouseLocation((ID)&_OBJC_CLASS___NSEvent,"mouseLocation");
    IVar9 = 0;
    FUN_1000f6060();
    thunk_FUN_1003d7218();
    if (IVar9 == 0) {
      _swift_release(uVar11);
    }
    else {
      _objc_msgSend(IVar9,"frame");
      _swift_release(uVar11);
      param_2 = param_4 - param_2;
    }
    if ((bVar3 & 1) == 0) {
      param_1 = param_1 + (double)lVar15;
    }
    if ((bVar4 & 1) == 0) {
      param_2 = param_2 + (double)lVar14;
    }
    FUN_1000f5db0();
    pdVar2 = (double *)(unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePoint);
    *pdVar2 = param_1;
    pdVar2[1] = param_2;
    dVar16 = param_1;
    __s10Foundation4DateVACycfC(puVar10);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (**(code **)(lVar13 + 8))(puVar10,lVar7);
    uVar6 = (uint)puVar10;
    pdVar2 = (double *)
             (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePointTime);
    *pdVar2 = dVar16;
    *(undefined1 *)(pdVar2 + 1) = 0;
    FUN_1001be7d0(param_1,param_2);
    goto LAB_1001bf66c;
  }
  if (((ulong)((double *)
              (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePointTime))[1] &
      1) == 0) {
    dVar16 = *(double *)
              (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePointTime);
    __s10Foundation4DateVACycfC(puVar10);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    puVar8 = puVar10;
    (**(code **)(lVar13 + 8))(puVar10,lVar7);
    uVar5 = SUB81(puVar8,0);
    dVar16 = param_1 - dVar16;
    param_2 = 0.05;
    param_1 = dVar16;
    if (0.05 <= dVar16) goto LAB_1001bf4c4;
    param_1 = *(double *)
               (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePoint);
    param_2 = ((double *)
              (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePoint))[1];
  }
  else {
LAB_1001bf4c4:
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    NSEvent::mouseLocation((ID)&_OBJC_CLASS___NSEvent,"mouseLocation");
    IVar9 = 0;
    dVar16 = param_1;
    FUN_1000f6060();
    thunk_FUN_1003d7218();
    uVar5 = 0;
    if (IVar9 != 0) {
      _objc_msgSend(IVar9,"frame");
      uVar5 = 0;
      param_2 = param_4 - param_2;
    }
  }
  FUN_1001be744();
  local_d0 = *param_5;
  local_c8 = (undefined1)param_5[1];
  uStack_d9 = (undefined1)param_5[2];
  uStack_d8 = (undefined7)((ulong)param_5[2] >> 8);
  uStack_d1 = (undefined1)param_5[3];
  __s10Foundation4DateVACycfC(puVar10);
  __s10Foundation4DateV21timeIntervalSince1970Sdvg();
  (**(code **)(lVar13 + 8))(puVar10,lVar7);
  local_a8 = local_d0;
  local_a0 = local_c8;
  uStack_97 = CONCAT17(uStack_d1,uStack_d8);
  local_9f = CONCAT17(uStack_d9,local_e0);
  local_8f = 5;
  local_8e = local_e6;
  local_8a = local_e2;
  puVar10 = local_c0;
  local_c0[0] = uVar5;
  local_b8 = param_1;
  dStack_b0 = param_2;
  local_88 = dVar16;
  FUN_10011878c(puVar10,6);
  uVar6 = (uint)puVar10;
LAB_1001bf66c:
  return uVar6 & 1;
}


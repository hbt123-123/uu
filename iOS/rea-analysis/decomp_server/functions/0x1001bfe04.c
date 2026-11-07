// rea decompile_all
// name: FUN_1001bfe04
// address: 0x1001bfe04
// body: available
// range: 0x1001bfe04-0x1001c011b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1001bfe04(double param_1,double param_2,double *param_3)

{
  double *pdVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  uint5 uVar5;
  undefined1 uVar6;
  uint uVar7;
  long lVar8;
  undefined1 *puVar9;
  long extraout_x8;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  code *pcVar14;
  long lVar15;
  double dVar16;
  undefined1 auStack_100 [16];
  long alStack_f0 [2];
  long local_e0;
  undefined4 local_d6;
  undefined2 local_d2;
  undefined1 local_d0;
  undefined1 local_c8;
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
  
  lVar8 = 0;
  __s10Foundation4DateVMa();
  lVar15 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_e0 + lVar4;
  dVar12 = *param_3;
  bVar2 = *(byte *)(param_3 + 1);
  dVar13 = param_3[2];
  bVar3 = *(byte *)(param_3 + 3);
  if ((((bVar2 & 1) == 0) && (((ulong)dVar12 & 0x7ff0000000000000) == 0x7ff0000000000000)) ||
     (((bVar3 & 1) == 0 && (((ulong)dVar13 & 0x7ff0000000000000) == 0x7ff0000000000000)))) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(double **)((long)alStack_f0 + lVar4) = param_3;
    FUN_1003fb4ec(FUN_1001c1570,auStack_100 + lVar4,0xd00000000000008f,0x800000010089cc40,
                  &DAT_d000000000000028,0x800000010089cd50,0xf7,5);
    uVar7 = 0;
  }
  else {
    if ((bVar2 & 1) == 0) {
      dVar16 = -1.0;
      if (-1.0 < dVar12) {
        dVar16 = dVar12;
      }
      param_2 = 1.0;
      dVar12 = 1.0;
      param_1 = 1.0;
      if (dVar16 <= 1.0) {
        dVar12 = dVar16;
        param_1 = dVar16;
      }
    }
    if ((bVar3 & 1) == 0) {
      dVar16 = -1.0;
      if (-1.0 < dVar13) {
        dVar16 = dVar13;
      }
      param_2 = 1.0;
      dVar13 = 1.0;
      param_1 = 1.0;
      if (dVar16 <= 1.0) {
        dVar13 = dVar16;
        param_1 = dVar16;
      }
    }
    uVar6 = *(undefined1 *)(param_3 + 4);
    uVar5 = *(uint5 *)((long)param_3 + 0x1c);
    local_e0 = lVar8;
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    uVar11 = *(undefined8 *)(DAT_100b360a8 + 0x80);
    _swift_retain(uVar11);
    local_c0[0] = uVar6;
    FUN_1000334ec(dVar12,bVar2,dVar13,bVar3,(ulong)uVar5);
    _swift_release(uVar11);
    FUN_1000f5db0();
    pdVar1 = (double *)(unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePoint);
    *pdVar1 = param_1;
    pdVar1[1] = param_2;
    dVar12 = param_1;
    __s10Foundation4DateVACycfC(lVar10);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    lVar4 = local_e0;
    pcVar14 = *(code **)(lVar15 + 8);
    lVar8 = lVar10;
    dVar13 = dVar12;
    (*pcVar14)(lVar10,local_e0);
    uVar6 = (undefined1)lVar8;
    pdVar1 = (double *)
             (unaff_x20 + _TtC14UURemoteServer12InputHandler::lastMouseMoveAbsolutePointTime);
    *pdVar1 = dVar12;
    *(undefined1 *)(pdVar1 + 1) = 0;
    FUN_1001be744();
    local_c8 = 1;
    local_d0 = 1;
    __s10Foundation4DateVACycfC(lVar10);
    __s10Foundation4DateV21timeIntervalSince1970Sdvg();
    (*pcVar14)(lVar10,lVar4);
    local_a8 = 0;
    local_a0 = local_c8;
    local_98 = 0;
    local_90 = local_d0;
    local_8f = 5;
    local_8e = local_d6;
    local_8a = local_d2;
    puVar9 = local_c0;
    local_c0[0] = uVar6;
    local_b8 = param_1;
    dStack_b0 = param_2;
    local_88 = dVar13;
    FUN_10011878c(puVar9,6);
    uVar7 = (uint)puVar9;
  }
  return uVar7 & 1;
}


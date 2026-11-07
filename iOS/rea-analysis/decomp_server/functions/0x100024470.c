// rea decompile_all
// name: FUN_100024470
// address: 0x100024470
// body: available
// range: 0x100024470-0x100024a77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000247f0) */
/* WARNING: Removing unreachable block (ram,0x000100024928) */
/* WARNING: Removing unreachable block (ram,0x0001000248b0) */
/* WARNING: Removing unreachable block (ram,0x000100024918) */

undefined8
FUN_100024470(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  int iVar10;
  long unaff_x20;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined1 auStack_150 [16];
  undefined *local_140;
  int local_138;
  undefined8 local_130;
  long lStack_128;
  undefined8 local_120;
  undefined1 local_110 [32];
  undefined1 auStack_f0 [40];
  char local_c8;
  undefined1 auStack_c0 [4];
  int local_bc;
  int iStack_b8;
  int local_b4;
  int local_b0;
  char local_98;
  undefined4 local_90;
  int iStack_8c;
  int iStack_88;
  int local_84;
  int iStack_80;
  uint local_7c;
  
  lVar15 = *(long *)(unaff_x20 + 0x38);
  iVar10 = (int)param_1;
  if (*(char *)(lVar15 + 0x14) == '\x01') {
    uVar2 = param_1;
    FUN_100039b50();
    if ((uVar2 & 1) != 0) {
      if ((*(byte *)(lVar15 + 0x14) & 1) == 0) {
        iVar11 = *(int *)(lVar15 + 0x10);
        iVar12 = -1;
        goto joined_r0x0001000244dc;
      }
      FUN_100039b50();
      if ((uVar2 & 1) == 0) goto LAB_1000244e8;
      iVar12 = -1;
      goto LAB_10002463c;
    }
  }
  else {
    iVar11 = *(int *)(lVar15 + 0x10);
    iVar12 = iVar11;
joined_r0x0001000244dc:
    if ((iVar11 < 0) || (iVar11 != iVar10)) {
LAB_10002463c:
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      pcVar3 = FUN_10003fe58;
      uVar8 = 0x529;
      local_120._4_4_ = iVar12;
      goto LAB_1000246ac;
    }
  }
LAB_1000244e8:
  FUN_10003990c(auStack_f0,param_1);
  if (local_c8 != '\x02') {
    FUN_10003990c(auStack_c0,param_1);
    if (local_98 == '\x02') {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      pcVar9 = "elWidth:pixelHeight:)";
      uVar8 = 0xd000000000000042;
      pcVar3 = FUN_10003fe20;
      uVar7 = 0x5f0;
    }
    else {
      iVar14 = (int)param_2;
      iVar13 = (int)param_3;
      iVar11 = (int)param_5;
      iVar12 = (int)param_4;
      if (iVar12 == 0 && iVar11 == 0) {
        if (local_bc == iVar14 && iStack_b8 == iVar13) {
          return 0;
        }
      }
      else if ((local_b4 == iVar12 && (local_bc == iVar14 && iStack_b8 == iVar13)) &&
              (local_b0 == iVar11)) {
        return 0;
      }
      uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
      uVar2 = param_1;
      FUN_10004ffa0();
      uVar1 = local_7c;
      if ((uVar2 & 1) == 0) {
        local_90 = CONCAT31(local_90._1_3_,1);
        local_7c = local_7c & 0xffffff00;
        iStack_8c = iVar14;
        iStack_88 = iVar13;
        local_84 = iVar12;
        iStack_80 = iVar11;
        FUN_1000140c4(param_1 & 0xffffffff,CONCAT44(iVar14,local_90),CONCAT44(iVar12,iVar13),
                      CONCAT44(uVar1,iVar11) & 0xffffff00ffffffff);
        FUN_10003e078(&local_90,param_1,param_2,param_3,param_4,param_5);
        return 0;
      }
      FUN_10003e078(param_1,param_2,param_3,param_4,param_5);
      lVar15 = *(long *)(unaff_x20 + 0x140);
      if (lVar15 != 0) {
        uVar7 = *(undefined8 *)(unaff_x20 + 0x138);
        _swift_bridgeObjectRetain(lVar15);
        IVar4 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
        if ((int)IVar4 == 0) {
          FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
          __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
          puVar5 = &DAT_1009975c0;
          _swift_allocObject(&DAT_1009975c0,0x18,7);
          _swift_weakInit(puVar5 + 0x10,uVar8);
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_120 = &local_90;
          puVar6 = &DAT_100a75b48;
          local_140 = puVar5;
          local_138 = iVar10;
          local_130 = uVar7;
          lStack_128 = lVar15;
          FUN_100004bb4(&DAT_100a75b48,&DAT_100809bd8);
          __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                    (local_110,FUN_10003fe44,auStack_150,puVar6);
          _swift_bridgeObjectRelease(lVar15);
          _swift_release(puVar5);
          return 0;
        }
        FUN_1000501e4(param_1,uVar7,lVar15,&local_90);
        _swift_bridgeObjectRelease(lVar15);
        return 0;
      }
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      pcVar9 = " skip pendingRemoved screenId:";
      uVar8 = 0xd000000000000045;
      pcVar3 = FUN_10003fe3c;
      uVar7 = 0x54d;
    }
    local_120 = (undefined4 *)CONCAT44(local_120._4_4_,iVar10);
    FUN_1003fb4ec(pcVar3,&local_130,0xd0000000000000a9,0x8000000100877660,uVar8,
                  (ulong)pcVar9 | 0x8000000000000000,uVar7,0);
    return 0;
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  pcVar3 = FUN_10003fe18;
  uVar8 = 0x52d;
LAB_1000246ac:
  local_120 = (undefined4 *)CONCAT44(local_120._4_4_,iVar10);
  FUN_1003fb4ec(pcVar3,&local_130,0xd0000000000000a9,0x8000000100877660,0xd000000000000045,
                0x800000010087a450,uVar8,0);
  return 0xffffffff;
}


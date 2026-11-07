// rea decompile_all
// name: FUN_100249118
// address: 0x100249118
// body: available
// range: 0x100249118-0x1002499eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002499e8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100249118(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  code *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ID IVar8;
  undefined1 *puVar9;
  ID IVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  ID self;
  code *pcVar19;
  long lVar20;
  long *plVar21;
  undefined4 auStack_1b0 [2];
  long alStack_1a8 [5];
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  ulong local_158;
  long local_150;
  long local_148;
  long local_140;
  long *local_138;
  code *local_130;
  long local_128;
  undefined8 local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  ID local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined1 *local_c0;
  long local_b8;
  undefined *local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar6 = 0;
  local_130 = param_6;
  local_128 = param_3;
  local_120 = param_7;
  local_110 = param_5;
  local_108 = param_4;
  __s10Foundation8CalendarV9ComponentOMa();
  local_140 = *(long *)(lVar6 + -8);
  lVar12 = *(long *)(local_140 + 0x40);
  lVar7 = 0;
  local_c0 = &stack0xfffffffffffffe80 + -(lVar12 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar6;
  __s10Foundation8CalendarVMa();
  local_150 = *(long *)(lVar7 + -8);
  lVar13 = (long)(&stack0xfffffffffffffe80 + -(lVar12 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(local_150 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar18 = &DAT_100a7fb50;
  puVar11 = &DAT_1008143d0;
  local_148 = lVar7;
  local_c8 = lVar13;
  FUN_100004bb4();
  lVar13 = lVar13 - (*(long *)(*(long *)(puVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  __s10Foundation4DateVMa();
  local_e0 = *(long *)(lVar6 + -8);
  lVar7 = lVar13 - (*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0;
  local_f0 = lVar6;
  local_d0 = lVar7;
  FUN_10024d094();
  uVar16 = *(ulong *)(lVar12 + -8);
  uVar14 = *(long *)(uVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_138 = (long *)(lVar7 - uVar14);
  lVar20 = (long)local_138 - uVar14;
  local_100 = lVar12;
  __s10Foundation3URLV4pathSSvg();
  lVar7 = *(long *)(param_1 + 0x10);
  lVar6 = 0;
  local_158 = uVar16;
  local_e8 = param_1;
  local_d8 = lVar12;
  local_b0 = puVar11;
  local_a8 = lVar7;
  if (lVar7 != 0) {
    param_1 = param_1 + ((ulong)*(byte *)(uVar16 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(uVar16 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(uVar16 + 0x48);
    do {
      FUN_100082394(param_1,lVar20,FUN_10024d094);
      IVar8 = *(ID *)(lVar20 + 0x10);
      FUN_1000d27dc(lVar20,FUN_10024d094);
      IVar8 = _objc_msgSend(IVar8,"length");
      bVar5 = SCARRY8(lVar6,IVar8);
      lVar6 = lVar6 + IVar8;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002499a4);
        (*pcVar4)();
      }
      param_1 = param_1 + lVar12;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  IVar8 = NSProgress::progressWithTotalUnitCount_
                    ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",lVar6);
  NSProgress::setCancellable_(IVar8,"setCancellable:",0);
  NSProgress::setPausable_(IVar8,"setPausable:",0);
  local_f8 = IVar8;
  NSProgress::setKind_(IVar8,"setKind:",*(undefined8 *)PTR__NSProgressKindFile_100995310);
  puVar18 = local_b0;
  lVar12 = local_d8;
  __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(local_d8,local_b0);
  _swift_bridgeObjectRelease(puVar18);
  lVar7 = lVar12 + 0x20;
  FUN_100252084(lVar7,0);
  local_d8 = lVar7;
  _swift_release(lVar12);
  pcVar4 = local_130;
  if (local_a8 != 0) {
    puVar18 = (undefined *)0x0;
    lVar7 = local_e8 +
            ((ulong)*(byte *)(local_158 + 0x50) + 0x20 &
            ((ulong)*(byte *)(local_158 + 0x50) ^ 0xffffffffffffffff));
    local_e8 = *(long *)(local_158 + 0x48);
    local_158 = CONCAT44(local_158._4_4_,
                         *(undefined4 *)
                          PTR___s10Foundation8CalendarV9ComponentO6secondyA2EmFWC_100996298);
    local_15c = *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO6minuteyA2EmFWC_100996290;
    local_160 = *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4houryA2EmFWC_100996278;
    local_164 = *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO3dayyA2EmFWC_100996270;
    local_168 = *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO5monthyA2EmFWC_100996288;
    uStack_170._4_4_ =
         *(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4yearyA2EmFWC_100996280;
    local_110 = (long)(char)local_110;
    lVar12 = local_a8;
    lVar15 = local_e0;
    plVar21 = local_138;
    local_118 = lVar6;
    do {
      local_b0 = puVar18;
      local_a8 = lVar12;
      FUN_100082394(lVar7,plVar21,FUN_10024d094);
      self = plVar21[2];
      IVar8 = _objc_msgSend(self,"length");
      if (IVar8 == 0) {
        FUN_1000d27dc(plVar21,FUN_10024d094);
        puVar18 = local_b0;
      }
      else {
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        local_a0 = 0;
        FUN_10007f314((long)plVar21 + (long)*(int *)(local_100 + 0x18),lVar13,&DAT_100a7fb50,
                      &DAT_1008143d0);
        lVar6 = local_f0;
        lVar17 = lVar13;
        (**(code **)(lVar15 + 0x30))(lVar13,1,local_f0);
        lVar12 = local_d0;
        if ((int)lVar17 == 1) {
          FUN_100040bb4(lVar13,&DAT_100a7fb50,&DAT_1008143d0);
        }
        else {
          (**(code **)(lVar15 + 0x20))(local_d0,lVar13,lVar6);
          __s10Foundation8CalendarV7currentACvgZ(local_c8);
          lVar15 = local_b8;
          puVar3 = local_c0;
          lVar6 = local_140;
          pcVar4 = *(code **)(local_140 + 0x68);
          (*pcVar4)(local_c0,local_158 & 0xffffffff,local_b8);
          puVar9 = puVar3;
          __s10Foundation8CalendarV9component_4fromSiAC9ComponentO_AA4DateVtF(puVar3,lVar12);
          pcVar19 = *(code **)(lVar6 + 8);
          (*pcVar19)(puVar3,lVar15);
          lVar6 = local_b8;
          puVar3 = local_c0;
          if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002499b8);
            (*pcVar4)();
          }
          if ((ulong)puVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002499bc);
            (*pcVar4)();
          }
          local_a0 = CONCAT44(local_a0._4_4_,(int)puVar9);
          (*pcVar4)(local_c0,local_15c,local_b8);
          puVar9 = puVar3;
          __s10Foundation8CalendarV9component_4fromSiAC9ComponentO_AA4DateVtF(puVar3,local_d0);
          (*pcVar19)(puVar3,lVar6);
          lVar6 = local_b8;
          puVar3 = local_c0;
          if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002499c0);
            (*pcVar4)();
          }
          if ((ulong)puVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002499c4);
            (*pcVar4)();
          }
          local_a0 = CONCAT44((int)puVar9,(undefined4)local_a0);
          (*pcVar4)(local_c0,local_160,local_b8);
          puVar9 = puVar3;
          __s10Foundation8CalendarV9component_4fromSiAC9ComponentO_AA4DateVtF(puVar3,local_d0);
          (*pcVar19)(puVar3,lVar6);
          lVar6 = local_b8;
          puVar3 = local_c0;
          if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002499c8);
            (*pcVar4)();
          }
          if ((ulong)puVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002499cc);
            (*pcVar4)();
          }
          uStack_98 = CONCAT44(uStack_98._4_4_,(int)puVar9);
          (*pcVar4)(local_c0,local_164,local_b8);
          puVar9 = puVar3;
          __s10Foundation8CalendarV9component_4fromSiAC9ComponentO_AA4DateVtF(puVar3,local_d0);
          (*pcVar19)(puVar3,lVar6);
          lVar6 = local_b8;
          puVar3 = local_c0;
          if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002499d0);
            (*pcVar4)();
          }
          if ((ulong)puVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002499d4);
            (*pcVar4)();
          }
          uStack_98 = CONCAT44((int)puVar9,(undefined4)uStack_98);
          (*pcVar4)(local_c0,local_168,local_b8);
          puVar9 = puVar3;
          __s10Foundation8CalendarV9component_4fromSiAC9ComponentO_AA4DateVtF(puVar3,local_d0);
          (*pcVar19)(puVar3,lVar6);
          lVar6 = local_b8;
          puVar3 = local_c0;
          if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002499d8);
            (*pcVar4)();
          }
          if ((ulong)puVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002499dc);
            (*pcVar4)();
          }
          local_90 = CONCAT44(local_90._4_4_,(int)puVar9);
          (*pcVar4)(local_c0,uStack_170._4_4_,local_b8);
          lVar15 = local_c8;
          lVar12 = local_d0;
          puVar9 = puVar3;
          __s10Foundation8CalendarV9component_4fromSiAC9ComponentO_AA4DateVtF(puVar3,local_d0);
          (*pcVar19)(puVar3,lVar6);
          (**(code **)(local_150 + 8))(lVar15,local_148);
          (**(code **)(local_e0 + 8))(lVar12,local_f0);
          if ((long)puVar9 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002499e0);
            (*pcVar4)();
          }
          if ((ulong)puVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002499e4);
            (*pcVar4)();
          }
          local_90 = CONCAT44((int)puVar9,(undefined4)local_90);
          pcVar4 = local_130;
          plVar21 = local_138;
        }
        lVar12 = *plVar21;
        __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(lVar12,plVar21[1]);
        lVar6 = local_118;
        if (local_108 == 0) {
          lVar15 = 0;
          lVar17 = 0;
        }
        else {
          lVar17 = local_128;
          __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg();
          lVar15 = lVar17 + 0x20;
        }
        uVar1 = *(undefined4 *)((long)&PTR___mh_execute_header_100814640 + local_110 * 4);
        *(long *)(lVar20 + -0x18) = lVar15;
        *(undefined8 *)(lVar20 + -0x10) = 0;
        *(undefined8 *)(lVar20 + -0x28) = 0xfffffff100000000;
        *(undefined8 *)(lVar20 + -0x20) = 8;
        *(undefined4 *)(lVar20 + -0x30) = 8;
        *(undefined4 *)(lVar20 + -0x2c) = uVar1;
        FUN_100252d20(local_d8,lVar12 + 0x20,&local_a0,0,0,0,0,0);
        _swift_release(lVar12);
        _swift_unknownObjectRelease(lVar17);
        IVar8 = self;
        _objc_retainAutorelease();
        IVar8 = _objc_msgSend(IVar8,"bytes");
        IVar10 = _objc_msgSend(self,"length");
        lVar12 = local_d8;
        if ((long)IVar10 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002499a8);
          (*pcVar4)();
        }
        if (IVar10 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002499ac);
          (*pcVar4)();
        }
        FUN_100252ebc(local_d8,IVar8,IVar10);
        FUN_100252c04(lVar12);
        IVar8 = _objc_msgSend(self,"length");
        lVar15 = local_e0;
        uVar2 = local_120;
        puVar18 = local_b0 + IVar8;
        if (SCARRY8((long)local_b0,IVar8)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1002499b0);
          (*pcVar4)();
        }
        if (pcVar4 != (code *)0x0) {
          if (lVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002499b4);
            (*pcVar4)();
          }
          if ((puVar18 == (undefined *)0x8000000000000000) && (lVar6 == -1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1002499e8);
            (*pcVar4)();
          }
          lVar12 = 0;
          if (lVar6 != 0) {
            lVar12 = (long)puVar18 / lVar6;
          }
          _swift_retain(local_120);
          (*pcVar4)((double)lVar12);
          FUN_10007ed2c(pcVar4,uVar2);
        }
        _objc_msgSend(local_f8,"setCompletedUnitCount:",puVar18);
        FUN_1000d27dc(plVar21,FUN_10024d094);
      }
      lVar7 = lVar7 + local_e8;
      lVar12 = local_a8 + -1;
    } while (lVar12 != 0);
  }
  FUN_10025391c(local_d8,0);
  uVar2 = local_120;
  if (pcVar4 != (code *)0x0) {
    _swift_retain(local_120);
    (*pcVar4)(0x3ff0000000000000);
    FUN_10007ed2c(pcVar4,uVar2);
  }
  _objc_msgSend(local_f8,"setCompletedUnitCount:",lVar6);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}


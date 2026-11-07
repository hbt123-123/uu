// rea decompile_all
// name: FUN_10061ea10
// address: 0x10061ea10
// body: available
// range: 0x10061ea10-0x10061ef9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10061ea10(ulong param_1)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID IVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  code *pcVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  ulong *local_e0;
  undefined1 *local_d8;
  long local_d0;
  long local_c8;
  undefined1 *local_c0;
  ulong local_b8;
  undefined *local_b0;
  ulong local_a8;
  undefined8 local_a0;
  ID local_98;
  ulong local_90;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  byte local_68;
  
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_d0 = *(long *)(lVar4 + -8);
  lVar12 = *(long *)(local_d0 + 0x40);
  lVar5 = 0;
  local_d8 = auStack_f0 + -(lVar12 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar4;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar20 = *(long *)(lVar5 + -8);
  lVar18 = (long)(auStack_f0 + -(lVar12 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar12 = lVar18 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  puVar15 = (undefined1 *)
            (lVar12 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_90 = param_1;
  if (param_1 >> 0x3e == 0) {
    uVar19 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar19 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar19 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar6 = &DAT_1009e07f0;
  _swift_allocObject(&DAT_1009e07f0,0x18,7);
  local_e0 = (ulong *)(puVar6 + 0x10);
  *local_e0 = uVar19;
  if ((long)uVar19 < 1) {
    _swift_release(puVar6);
    puVar6 = &DAT_100ab0498;
    FUN_100004bb4(&DAT_100ab0498,&DAT_100848898);
    _swift_allocObject();
    *(undefined8 *)(puVar6 + 0x10) = 0;
    puVar6[0x18] = 0;
    puVar10 = &DAT_100ab0268;
    FUN_100004bb4(&DAT_100ab0268,&DAT_1008485b8);
    _swift_allocObject();
    *(undefined **)(puVar10 + 0x10) = puVar6;
  }
  else {
    puVar10 = &DAT_100ab0268;
    FUN_100004bb4(&DAT_100ab0268,&DAT_1008485b8);
    _swift_allocObject();
    puVar7 = &DAT_100ab0270;
    FUN_100004bb4(&DAT_100ab0270,&DAT_1008485c0);
    _swift_allocObject();
    FUN_1006105c8();
    *(undefined **)(puVar10 + 0x10) = puVar7;
    local_b0 = puVar10;
    IVar8 = NSProgress::progressWithTotalUnitCount_
                      ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",uVar19);
    NSProgress::setCancellable_(IVar8,"setCancellable:",0);
    local_98 = IVar8;
    NSProgress::setPausable_(IVar8,"setPausable:",0);
    FUN_100605bac(0);
    __sSo17OS_dispatch_queueC8DispatchE10AttributesV10concurrentAEvgZ(puVar15);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
    (**(code **)(lVar20 + 0x68))
              (lVar18,*(undefined4 *)
                       PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
               ,lVar5);
    uVar9 = 0xd00000000000001b;
    __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
              (0xd00000000000001b,0x80000001008bf010,lVar12,puVar15,lVar18,0);
    uVar19 = local_90;
    local_a0 = uVar9;
    if (param_1 >> 0x3e == 0) {
      local_a8 = *(ulong *)((local_90 & 0xffffffffffffff8) + 0x10);
      puVar10 = local_b0;
    }
    else {
      uVar14 = local_90 & 0xffffffffffffff8;
      if ((local_90 & 0x8000000000000000) != 0) {
        uVar14 = local_90;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      local_a8 = uVar14;
      puVar10 = local_b0;
    }
    local_b0 = puVar10;
    if (local_a8 != 0) {
      if ((long)local_a8 < 1) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x10061efa0);
        (*pcVar17)();
      }
      uVar14 = 0;
      local_b8 = uVar19 & 0xc000000000000001;
      local_b0 = (undefined *)0x0;
      local_e8 = puVar6;
      do {
        if (local_b8 == 0) {
          uVar16 = *(ulong *)(uVar19 + uVar14 * 8 + 0x20);
          _swift_retain(uVar16);
        }
        else {
          uVar16 = uVar14;
          FUN_100626568(uVar14,uVar19,&DAT_100aaff00,&DAT_100848420,0x65746e6172617547,
                        0xed00003e29283c65);
        }
        puVar7 = &DAT_1009e0ac0;
        _swift_allocObject(&DAT_1009e0ac0,0x30,7);
        IVar8 = local_98;
        *(undefined8 *)(puVar7 + 0x10) = local_a0;
        *(undefined **)(puVar7 + 0x18) = puVar10;
        *(ID *)(puVar7 + 0x20) = local_98;
        *(undefined **)(puVar7 + 0x28) = puVar6;
        puVar11 = &DAT_1009e0ae8;
        _swift_allocObject(&DAT_1009e0ae8,0x20,7);
        *(code **)(puVar11 + 0x10) = FUN_100627234;
        *(undefined **)(puVar11 + 0x18) = puVar7;
        pcVar17 = *(code **)(**(long **)(uVar16 + 0x10) + 0x58);
        _swift_retain_n(puVar10,2);
        _swift_retain_n(puVar6,2);
        _swift_retain(puVar7);
        (*pcVar17)(&local_70);
        uVar9 = local_70;
        puVar2 = local_d8;
        if ((local_68 & 1) == 0) {
          _swift_release(puVar6);
          _swift_release(puVar10);
          FUN_100614cd0(uVar9,0);
          plVar13 = *(long **)(uVar16 + 0x10);
          *(code **)(puVar15 + -0x10) = FUN_10062727c;
          *(undefined **)(puVar15 + -8) = puVar11;
          (**(code **)(*plVar13 + 0x60))(thunk_FUN_1006272c4);
          _swift_release(uVar16);
          _swift_release(puVar11);
          _swift_release(puVar7);
        }
        else {
          local_80 = 0;
          local_78 = 0;
          __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(local_d8);
          local_c0 = puVar15;
          *(undefined8 **)(puVar15 + -0x20) = &local_80;
          *(undefined **)(puVar15 + -0x18) = puVar10;
          puVar1 = local_e0;
          *(ID *)(puVar15 + -0x10) = IVar8;
          *(ulong **)(puVar15 + -8) = puVar1;
          puVar3 = local_b0;
          __sSo17OS_dispatch_queueC8DispatchE4sync5flags7executexAC0D13WorkItemFlagsV_xyKXEtKlF
                    (puVar2,FUN_1006272b0,puVar15 + -0x30,PTR___sytN_100995e90 + 8);
          puVar15 = local_c0;
          puVar6 = local_e8;
          local_b0 = puVar3;
          (**(code **)(local_d0 + 8))(puVar2,local_c8);
          _swift_release(uVar16);
          _swift_release(puVar6);
          _swift_release(puVar10);
          _swift_release(puVar11);
          _swift_release(puVar7);
        }
        uVar14 = uVar14 + 1;
        uVar19 = local_90;
      } while (local_a8 != uVar14);
    }
    _swift_release(puVar6);
  }
  return puVar10;
}


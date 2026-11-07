// rea decompile_all
// name: FUN_10061e4c4
// address: 0x10061e4c4
// body: available
// range: 0x10061e4c4-0x10061ea0f inclusive
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

undefined * FUN_10061e4c4(ulong param_1)

{
  ulong *puVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ID IVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  code *pcVar18;
  ulong local_100;
  ulong *local_f8;
  long local_f0;
  long local_e8;
  long lStack_e0;
  undefined *local_d8;
  undefined1 *local_d0;
  ulong local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  ulong local_b0;
  undefined8 local_a8;
  ID local_a0;
  ulong local_98;
  undefined8 local_88;
  byte local_80;
  undefined8 local_78;
  byte local_70;
  byte local_6f;
  
  lVar4 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_e8 = *(long *)(lVar4 + -8);
  lVar15 = (long)&local_100 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_f0 = lVar15;
  lStack_e0 = lVar4;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar14 = *(long *)(lVar5 + -8);
  lVar15 = lVar15 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar16 = lVar15 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  puVar17 = (undefined1 *)
            (lVar16 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar11 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar6 = &DAT_1009e07f0;
  _swift_allocObject(&DAT_1009e07f0,0x18,7);
  local_f8 = (ulong *)(puVar6 + 0x10);
  *local_f8 = uVar11;
  if ((long)uVar11 < 1) {
    _swift_release();
    puVar6 = &DAT_100ab0498;
    FUN_100004bb4(&DAT_100ab0498,&DAT_100848898);
    _swift_allocObject();
    *(undefined8 *)(puVar6 + 0x10) = 0;
    puVar6[0x18] = 0;
    puVar9 = &DAT_100ab0268;
    FUN_100004bb4(&DAT_100ab0268,&DAT_1008485b8);
    _swift_allocObject();
    *(undefined **)(puVar9 + 0x10) = puVar6;
  }
  else {
    puVar9 = &DAT_100ab0268;
    local_d8 = puVar6;
    FUN_100004bb4(&DAT_100ab0268,&DAT_1008485b8);
    _swift_allocObject();
    puVar6 = &DAT_100ab0270;
    FUN_100004bb4(&DAT_100ab0270,&DAT_1008485c0);
    _swift_allocObject();
    FUN_1006105c8();
    *(undefined **)(puVar9 + 0x10) = puVar6;
    IVar7 = NSProgress::progressWithTotalUnitCount_
                      ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",uVar11);
    NSProgress::setCancellable_(IVar7,"setCancellable:",0);
    local_a0 = IVar7;
    NSProgress::setPausable_(IVar7,"setPausable:",0);
    FUN_100605bac(0);
    __sSo17OS_dispatch_queueC8DispatchE10AttributesV10concurrentAEvgZ(puVar17);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar16);
    (**(code **)(lVar14 + 0x68))
              (lVar15,*(undefined4 *)
                       PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
               ,lVar5);
    uVar8 = 0xd00000000000001b;
    __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
              (0xd00000000000001b,0x80000001008bf010,lVar16,puVar17,lVar15,0);
    local_a8 = uVar8;
    if (param_1 >> 0x3e == 0) {
      local_b0 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
      puVar6 = local_d8;
    }
    else {
      uVar11 = param_1 & 0xffffffffffffff8;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar11 = param_1;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      local_b0 = uVar11;
      puVar6 = local_d8;
    }
    local_d8 = puVar6;
    if (local_b0 != 0) {
      if ((long)local_b0 < 1) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x10061ea10);
        (*pcVar18)();
      }
      uVar11 = 0;
      local_b8 = 0;
      local_c8 = param_1 & 0xc000000000000001;
      local_100 = param_1;
      local_c0 = puVar9;
      do {
        puVar9 = local_c0;
        if (local_c8 == 0) {
          uVar12 = *(ulong *)(param_1 + uVar11 * 8 + 0x20);
          _swift_retain(uVar12);
        }
        else {
          uVar12 = uVar11;
          FUN_100626568(uVar11,param_1,&DAT_100ab0268,&DAT_1008485b8,0x3c6573696d6f7250,
                        0xeb000000003e2928);
        }
        puVar10 = &DAT_1009e0de0;
        _swift_allocObject(&DAT_1009e0de0,0x30,7);
        IVar7 = local_a0;
        *(undefined8 *)(puVar10 + 0x10) = local_a8;
        *(undefined **)(puVar10 + 0x18) = puVar9;
        *(ID *)(puVar10 + 0x20) = local_a0;
        *(undefined **)(puVar10 + 0x28) = puVar6;
        pcVar18 = *(code **)(**(long **)(uVar12 + 0x10) + 0x58);
        local_98 = uVar12;
        _swift_retain_n(puVar9,2);
        _swift_retain_n(puVar6,2);
        (*pcVar18)(&local_78);
        bVar3 = local_70;
        uVar8 = local_78;
        lVar4 = local_f0;
        if ((local_6f & 1) == 0) {
          _swift_release(puVar6);
          _swift_release(puVar9);
          FUN_1006073e8(uVar8,bVar3,0);
          uVar12 = local_98;
          plVar13 = *(long **)(local_98 + 0x10);
          *(code **)(puVar17 + -0x10) = FUN_100627234;
          *(undefined **)(puVar17 + -8) = puVar10;
          (**(code **)(*plVar13 + 0x60))(thunk_FUN_100627770);
          _swift_release(uVar12);
          _swift_release(puVar10);
        }
        else {
          local_88 = local_78;
          local_80 = local_70 & 1;
          __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(local_f0);
          local_d0 = puVar17;
          *(undefined8 **)(puVar17 + -0x20) = &local_88;
          *(undefined **)(puVar17 + -0x18) = puVar9;
          puVar1 = local_f8;
          *(ID *)(puVar17 + -0x10) = IVar7;
          *(ulong **)(puVar17 + -8) = puVar1;
          uVar2 = local_b8;
          __sSo17OS_dispatch_queueC8DispatchE4sync5flags7executexAC0D13WorkItemFlagsV_xyKXEtKlF
                    (lVar4,FUN_1006278e0,puVar17 + -0x30,PTR___sytN_100995e90 + 8);
          puVar17 = local_d0;
          puVar6 = local_d8;
          param_1 = local_100;
          local_b8 = uVar2;
          (**(code **)(local_e8 + 8))(lVar4,lStack_e0);
          _swift_release(local_98);
          _swift_release(puVar6);
          _swift_release(puVar9);
          _swift_release(puVar10);
          FUN_1006073e8(uVar8,bVar3,1);
        }
        uVar11 = uVar11 + 1;
        puVar9 = local_c0;
      } while (local_b0 != uVar11);
    }
    _swift_release(puVar6);
  }
  return puVar9;
}


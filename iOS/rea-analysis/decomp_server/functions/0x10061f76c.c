// rea decompile_all
// name: FUN_10061f76c
// address: 0x10061f76c
// body: available
// range: 0x10061f76c-0x10061fc97 inclusive
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

undefined * FUN_10061f76c(undefined *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long *plVar11;
  undefined *puVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  undefined1 auStack_100 [16];
  ID aIStack_f0 [4];
  undefined1 auStack_d0 [8];
  undefined8 *local_c8;
  undefined1 *local_c0;
  long local_b8;
  long lStack_b0;
  ulong local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  ID local_88;
  undefined *local_80;
  undefined8 local_70;
  byte local_68;
  
  lVar2 = 0;
  __s8Dispatch0A13WorkItemFlagsVMa();
  local_b8 = *(long *)(lVar2 + -8);
  lVar8 = *(long *)(local_b8 + 0x40);
  lVar3 = 0;
  local_c0 = auStack_d0 + -(lVar8 + 0xfU & 0xfffffffffffffff0);
  lStack_b0 = lVar2;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar13 = *(long *)(lVar3 + -8);
  lVar8 = (long)(auStack_d0 + -(lVar8 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar15 = lVar8 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  lVar2 = lVar15 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar9 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar9 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if (((ulong)param_1 & 0x8000000000000000) != 0) {
      puVar9 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar4 = &DAT_1009e07f0;
  _swift_allocObject(&DAT_1009e07f0,0x18,7);
  local_c8 = (undefined8 *)(puVar4 + 0x10);
  *local_c8 = puVar9;
  if ((long)puVar9 < 1) {
    _swift_release();
    puVar9 = &DAT_100ab0358;
    FUN_100004bb4(&DAT_100ab0358,&DAT_1008487f0);
    _swift_allocObject();
    puVar4 = &DAT_100aaff00;
    FUN_100004bb4(&DAT_100aaff00,&DAT_100848420);
    _swift_allocObject();
    *(undefined **)(puVar4 + 0x10) = puVar9;
  }
  else {
    puVar12 = &DAT_100aaff00;
    local_80 = puVar4;
    FUN_100004bb4(&DAT_100aaff00,&DAT_100848420);
    _swift_allocObject();
    puVar4 = &DAT_100aaff08;
    FUN_100004bb4(&DAT_100aaff08,&DAT_100848428);
    _swift_allocObject();
    FUN_10061047c();
    *(undefined **)(puVar12 + 0x10) = puVar4;
    local_a0 = puVar12;
    IVar5 = NSProgress::progressWithTotalUnitCount_
                      ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",puVar9);
    NSProgress::setCancellable_(IVar5,"setCancellable:",0);
    local_88 = IVar5;
    NSProgress::setPausable_(IVar5,"setPausable:",0);
    FUN_100605bac(0);
    __sSo17OS_dispatch_queueC8DispatchE10AttributesV10concurrentAEvgZ(lVar2);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar15);
    (**(code **)(lVar13 + 0x68))
              (lVar8,*(undefined4 *)
                      PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
               ,lVar3);
    uVar6 = 0xd00000000000001b;
    __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
              (0xd00000000000001b,0x80000001008bf010,lVar15,lVar2,lVar8,0);
    local_90 = uVar6;
    if ((ulong)param_1 >> 0x3e == 0) {
      local_98 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
      puVar4 = local_a0;
      puVar9 = local_80;
    }
    else {
      puVar9 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
      if (((ulong)param_1 & 0x8000000000000000) != 0) {
        puVar9 = param_1;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      local_98 = puVar9;
      puVar4 = local_a0;
      puVar9 = local_80;
    }
    local_a0 = puVar4;
    local_80 = puVar9;
    if (local_98 != (undefined *)0x0) {
      if ((long)local_98 < 1) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10061fc98);
        (*pcVar14)();
      }
      puVar12 = (undefined *)0x0;
      local_a8 = (ulong)param_1 & 0xc000000000000001;
      local_a0 = param_1;
      do {
        if (local_a8 == 0) {
          puVar10 = *(undefined **)(local_a0 + (long)puVar12 * 8 + 0x20);
          _swift_retain(puVar10);
        }
        else {
          puVar10 = puVar12;
          FUN_100626568(puVar12,local_a0,&DAT_100aaff00,&DAT_100848420,0x65746e6172617547,
                        0xed00003e29283c65);
        }
        puVar7 = &DAT_1009e0a48;
        _swift_allocObject(&DAT_1009e0a48,0x30,7);
        IVar5 = local_88;
        *(undefined8 *)(puVar7 + 0x10) = local_90;
        *(undefined **)(puVar7 + 0x18) = puVar4;
        *(ID *)(puVar7 + 0x20) = local_88;
        *(undefined **)(puVar7 + 0x28) = puVar9;
        pcVar14 = *(code **)(**(long **)(puVar10 + 0x10) + 0x58);
        local_80 = puVar10;
        _swift_retain_n(puVar4,2);
        _swift_retain_n(puVar9,2);
        (*pcVar14)(&local_70);
        uVar6 = local_70;
        puVar1 = local_c0;
        if ((local_68 & 1) == 0) {
          _swift_release(puVar9);
          _swift_release(puVar4);
          FUN_100614cd0(uVar6,0);
          puVar10 = local_80;
          plVar11 = *(long **)(local_80 + 0x10);
          *(code **)(lVar2 + -0x10) = FUN_10062719c;
          *(undefined **)(lVar2 + -8) = puVar7;
          (**(code **)(*plVar11 + 0x60))(thunk_FUN_1006272c4);
          _swift_release(puVar10);
          _swift_release(puVar7);
        }
        else {
          __s8Dispatch0A13WorkItemFlagsV7barrierACvgZ(local_c0);
          *(undefined **)(lVar2 + -0x20) = puVar4;
          *(ID *)(lVar2 + -0x18) = IVar5;
          *(undefined8 **)(lVar2 + -0x10) = local_c8;
          __sSo17OS_dispatch_queueC8DispatchE4sync5flags7executexAC0D13WorkItemFlagsV_xyKXEtKlF
                    (puVar1,FUN_1006271a8,lVar2 + -0x30,PTR___sytN_100995e90 + 8);
          (**(code **)(local_b8 + 8))(puVar1,lStack_b0);
          _swift_release(puVar7);
          _swift_release(local_80);
          _swift_release(puVar9);
          _swift_release(puVar4);
        }
        puVar12 = puVar12 + 1;
      } while (local_98 != puVar12);
    }
    _swift_release(puVar9);
  }
  return puVar4;
}


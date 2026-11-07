// rea decompile_all
// name: FUN_10061efa0
// address: 0x10061efa0
// body: available
// range: 0x10061efa0-0x10061f2ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10061efa0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  ID self;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_a0 [8];
  code *local_98;
  undefined8 local_90;
  ID local_88;
  undefined *local_80;
  undefined *local_78;
  long local_70;
  undefined8 local_68;
  
  lVar3 = 0;
  local_70 = param_3;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar8 = *(long *)(lVar3 + -8);
  puVar9 = auStack_a0 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar11 = (long)puVar9 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  lVar10 = lVar11 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_1009e07f0;
  _swift_allocObject(&DAT_1009e07f0,0x18,7);
  lVar4 = param_1;
  __sSa5countSivg(param_1,param_2);
  *(long *)(puVar5 + 0x10) = lVar4;
  if (lVar4 < 1) {
    _swift_release(puVar5);
    puVar5 = &DAT_100ab0498;
    FUN_100004bb4(&DAT_100ab0498,&DAT_100848898);
    _swift_allocObject();
    *(undefined8 *)(puVar5 + 0x10) = 0;
    puVar5[0x18] = 0;
    puVar7 = &DAT_100ab0268;
    FUN_100004bb4(&DAT_100ab0268,&DAT_1008485b8);
    _swift_allocObject();
    *(undefined **)(puVar7 + 0x10) = puVar5;
  }
  else {
    puVar7 = &DAT_100ab0268;
    local_78 = puVar5;
    FUN_100004bb4(&DAT_100ab0268,&DAT_1008485b8);
    _swift_allocObject();
    puVar5 = &DAT_100ab0270;
    FUN_100004bb4(&DAT_100ab0270,&DAT_1008485c0);
    _swift_allocObject();
    FUN_1006105c8();
    *(undefined **)(puVar7 + 0x10) = puVar5;
    local_80 = puVar7;
    self = NSProgress::progressWithTotalUnitCount_
                     ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",lVar4);
    NSProgress::setCancellable_(self,"setCancellable:",0);
    local_88 = self;
    NSProgress::setPausable_(self,"setPausable:",0);
    FUN_100605bac(0);
    __sSo17OS_dispatch_queueC8DispatchE10AttributesV10concurrentAEvgZ(lVar10);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar11);
    (**(code **)(lVar8 + 0x68))
              (puVar9,*(undefined4 *)
                       PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
               ,lVar3);
    uVar6 = 0xd00000000000001b;
    __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
              (0xd00000000000001b,0x80000001008bf010,lVar11,lVar10,puVar9,0);
    lVar4 = param_1;
    local_90 = uVar6;
    __sSa8endIndexSivg(param_1,param_2);
    puVar5 = local_80;
    if (lVar4 != 0) {
      lVar4 = 0;
      local_98 = *(code **)(local_70 + 0x10);
      do {
        __sSayxSicig(&local_68,lVar4,param_1,param_2);
        uVar6 = local_68;
        lVar3 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10061f300);
          (*pcVar2)();
        }
        puVar7 = &DAT_1009e0e80;
        _swift_allocObject(&DAT_1009e0e80,0x40,7);
        lVar8 = local_70;
        puVar1 = local_78;
        *(undefined8 *)(puVar7 + 0x10) = param_2;
        *(long *)(puVar7 + 0x18) = local_70;
        *(undefined8 *)(puVar7 + 0x20) = local_90;
        *(undefined **)(puVar7 + 0x28) = puVar5;
        *(ID *)(puVar7 + 0x30) = local_88;
        *(undefined **)(puVar7 + 0x38) = local_78;
        _swift_retain(puVar5);
        _swift_retain(puVar1);
        (*local_98)(FUN_100627824,puVar7,param_2,lVar8);
        _swift_unknownObjectRelease(uVar6);
        _swift_release(puVar7);
        lVar8 = param_1;
        __sSa8endIndexSivg(param_1,param_2);
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar8);
    }
    _swift_release(local_78);
  }
  return;
}


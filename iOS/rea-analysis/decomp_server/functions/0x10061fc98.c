// rea decompile_all
// name: FUN_10061fc98
// address: 0x10061fc98
// body: available
// range: 0x10061fc98-0x10061ffcf inclusive
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

undefined * FUN_10061fc98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ID self;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar3 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar10 = *(long *)(lVar3 + -8);
  lVar11 = (long)&local_80 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar12 = lVar11 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  lVar13 = lVar12 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_1009e07f0;
  _swift_allocObject(&DAT_1009e07f0,0x18,7);
  uVar6 = 0;
  local_70 = param_2;
  FUN_100614b6c(0,param_2);
  lVar4 = param_1;
  __sSa5countSivg(param_1,uVar6);
  *(long *)(puVar5 + 0x10) = lVar4;
  if (lVar4 < 1) {
    _swift_release(puVar5);
    puVar5 = &DAT_100ab0358;
    FUN_100004bb4(&DAT_100ab0358,&DAT_1008487f0);
    _swift_allocObject();
    puVar9 = &DAT_100aaff00;
    FUN_100004bb4(&DAT_100aaff00,&DAT_100848420);
    _swift_allocObject();
    *(undefined **)(puVar9 + 0x10) = puVar5;
  }
  else {
    puVar9 = &DAT_100aaff00;
    FUN_100004bb4(&DAT_100aaff00,&DAT_100848420);
    _swift_allocObject();
    puVar7 = &DAT_100aaff08;
    local_78 = lVar10;
    FUN_100004bb4(&DAT_100aaff08,&DAT_100848428);
    _swift_allocObject();
    local_80 = lVar3;
    FUN_10061047c();
    *(undefined **)(puVar9 + 0x10) = puVar7;
    self = NSProgress::progressWithTotalUnitCount_
                     ((ID)&_OBJC_CLASS___NSProgress,"progressWithTotalUnitCount:",lVar4);
    NSProgress::setCancellable_(self,"setCancellable:",0);
    NSProgress::setPausable_(self,"setPausable:",0);
    FUN_100605bac(0);
    __sSo17OS_dispatch_queueC8DispatchE10AttributesV10concurrentAEvgZ(lVar13);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar12);
    (**(code **)(local_78 + 0x68))
              (lVar11,*(undefined4 *)
                       PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
               ,local_80);
    uVar8 = 0xd00000000000001b;
    __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
              (0xd00000000000001b,0x80000001008bf010,lVar12,lVar13,lVar11,0);
    lVar4 = param_1;
    __sSa8endIndexSivg(param_1,uVar6);
    if (lVar4 != 0) {
      lVar4 = 0;
      do {
        __sSayxSicig(&local_68,lVar4,param_1,uVar6);
        uVar1 = local_68;
        lVar3 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10061ffd0);
          (*pcVar2)();
        }
        puVar7 = &DAT_1009e0a98;
        _swift_allocObject(&DAT_1009e0a98,0x38,7);
        *(undefined8 *)(puVar7 + 0x10) = local_70;
        *(undefined8 *)(puVar7 + 0x18) = uVar8;
        *(undefined **)(puVar7 + 0x20) = puVar9;
        *(ID *)(puVar7 + 0x28) = self;
        *(undefined **)(puVar7 + 0x30) = puVar5;
        _swift_retain(puVar9);
        _swift_retain(puVar5);
        FUN_100610788(FUN_100627220,puVar7);
        _swift_release(uVar1);
        _swift_release(puVar7);
        lVar10 = param_1;
        __sSa8endIndexSivg(param_1,uVar6);
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar10);
    }
    _swift_release(puVar5);
  }
  return puVar9;
}


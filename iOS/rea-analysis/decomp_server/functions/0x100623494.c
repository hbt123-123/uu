// rea decompile_all
// name: FUN_100623494
// address: 0x100623494
// body: available
// range: 0x100623494-0x100623777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long * FUN_100623494(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 local_70;
  long local_68;
  
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar14 = *(long *)(lVar2 + -8);
  lVar12 = (long)&local_70 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar13 = lVar12 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  lVar3 = lVar13 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0xff;
  local_68 = param_1;
  FUN_100616218(0xff,param_2);
  uVar5 = 0;
  __sSaMa(0,uVar4);
  puVar6 = PTR___sSayxGSlsMc_1009958b0;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_1009958b0,uVar5);
  __sSlsE7isEmptySbvg(uVar5,puVar6);
  if ((uVar5 & 1) == 0) {
    puVar6 = &DAT_1009e07f0;
    _swift_allocObject(&DAT_1009e07f0,0x18,7);
    lVar8 = param_1;
    __sSa5countSivg(param_1,uVar4);
    *(long *)(puVar6 + 0x10) = lVar8;
    FUN_100605bac(0);
    local_70 = param_2;
    __sSo17OS_dispatch_queueC8DispatchE10AttributesV10concurrentAEvgZ(lVar3);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar13);
    (**(code **)(lVar14 + 0x68))
              (lVar12,*(undefined4 *)
                       PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
               ,lVar2);
    uVar7 = 0xd00000000000001b;
    __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
              (0xd00000000000001b,0x80000001008bf030,lVar13,lVar3,lVar12,0);
    uVar9 = 0xff;
    FUN_100616300(0xff,local_70);
    plVar10 = (long *)0x0;
    __sSaMa(0,uVar9);
    FUN_1006144cc();
    lVar2 = param_1;
    __sSa8endIndexSivg(param_1,uVar4);
    if (lVar2 == 0) {
      _swift_release(puVar6);
    }
    else {
      lVar2 = 0;
      do {
        __sSayxSicig(&local_68,lVar2,param_1,uVar4);
        lVar12 = local_68;
        lVar3 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100623778);
          (*pcVar1)();
        }
        puVar11 = &DAT_1009e0840;
        _swift_allocObject(&DAT_1009e0840,0x30,7);
        *(undefined8 *)(puVar11 + 0x10) = uVar7;
        *(undefined **)(puVar11 + 0x18) = puVar6;
        *(long **)(puVar11 + 0x20) = plVar10;
        *(long *)(puVar11 + 0x28) = param_1;
        _swift_retain(puVar6);
        _swift_retain(plVar10);
        _swift_bridgeObjectRetain(param_1);
        FUN_1006157c0(FUN_100626d1c,puVar11);
        _swift_release(lVar12);
        _swift_release(puVar11);
        lVar12 = param_1;
        __sSa8endIndexSivg(param_1,uVar4);
        lVar2 = lVar2 + 1;
      } while (lVar3 != lVar12);
      _swift_release(puVar6);
    }
  }
  else {
    uVar4 = 0xff;
    FUN_100616300(0xff,param_2);
    uVar7 = 0xff;
    __sSaMa(0xff,uVar4);
    FUN_100614b6c(0,uVar7);
    lVar2 = 0;
    __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,uVar4);
    plVar10 = &local_68;
    local_68 = lVar2;
    FUN_100610904(plVar10);
    _swift_bridgeObjectRelease(lVar2);
  }
  return plVar10;
}


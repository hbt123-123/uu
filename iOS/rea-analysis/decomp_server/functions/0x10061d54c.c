// rea decompile_all
// name: FUN_10061d54c
// address: 0x10061d54c
// body: available
// range: 0x10061d54c-0x10061d847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10061d54c(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  undefined *local_70;
  undefined8 local_68;
  
  lVar2 = 0;
  __sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyOMa();
  lVar9 = *(long *)(lVar2 + -8);
  lVar7 = (long)&local_90 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __s8Dispatch0A3QoSVMa();
  lVar10 = lVar7 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  __sSo17OS_dispatch_queueC8DispatchE10AttributesVMa();
  lVar11 = lVar10 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_1009e0598;
  _swift_allocObject(&DAT_1009e0598,0x18,7);
  lVar3 = param_1;
  __sSa5countSivg(param_1,param_2);
  *(long *)(puVar4 + 0x10) = lVar3;
  if (lVar3 < 1) {
    uVar6 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,param_3,param_2,0x100904f48,&TargetProtocolRequirement_100904f50);
    puVar8 = (undefined8 *)0x0;
    FUN_100616218(0,uVar6);
    FUN_10060d02c();
    puVar5 = &DAT_1009df040;
    _swift_allocError(&DAT_1009df040,puVar8,0,0);
    *puVar8 = 2;
    puVar8[2] = 0;
    puVar8[1] = 0;
    puVar8[4] = 0;
    puVar8[3] = 0;
    *(undefined1 *)(puVar8 + 5) = 2;
    FUN_1006154e0();
    _swift_release(puVar4);
    local_78 = puVar5;
  }
  else {
    puVar5 = (undefined *)0x0;
    local_70 = puVar4;
    _swift_getAssociatedTypeWitness
              (0,param_3,param_2,0x100904f48,&TargetProtocolRequirement_100904f50);
    FUN_10061601c();
    local_78 = puVar5;
    FUN_100605bac(0);
    __sSo17OS_dispatch_queueC8DispatchE10AttributesV10concurrentAEvgZ(lVar11);
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lVar10);
    (**(code **)(lVar9 + 0x68))
              (lVar7,*(undefined4 *)
                      PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_100995fa0
               ,lVar2);
    uVar6 = 0xd00000000000001b;
    __sSo17OS_dispatch_queueC8DispatchE5label3qos10attributes20autoreleaseFrequency6targetABSS_AC0D3QoSVAbCE10AttributesVAbCE011AutoreleaseI0OABSgtcfC
              (0xd00000000000001b,0x80000001008beff0,lVar10,lVar11,lVar7,0);
    lVar3 = param_1;
    __sSa8endIndexSivg(param_1,param_2);
    if (lVar3 == 0) {
      _swift_release(local_70);
    }
    else {
      lVar3 = 0;
      local_90 = *(code **)(param_3 + 0x10);
      local_88 = uVar6;
      local_80 = param_3;
      do {
        __sSayxSicig(&local_68,lVar3,param_1,param_2);
        uVar6 = local_68;
        lVar2 = lVar3 + 1;
        if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10061d848);
          (*pcVar1)();
        }
        puVar4 = &DAT_1009e05c0;
        _swift_allocObject(&DAT_1009e05c0,0x38,7);
        puVar5 = local_70;
        lVar7 = local_80;
        *(undefined8 *)(puVar4 + 0x10) = param_2;
        *(long *)(puVar4 + 0x18) = local_80;
        *(undefined8 *)(puVar4 + 0x20) = local_88;
        *(undefined **)(puVar4 + 0x28) = local_78;
        *(undefined **)(puVar4 + 0x30) = local_70;
        _swift_retain(local_78);
        _swift_retain(puVar5);
        (*local_90)(FUN_10061dbf0,puVar4,param_2,lVar7);
        _swift_unknownObjectRelease(uVar6);
        _swift_release(puVar4);
        lVar7 = param_1;
        __sSa8endIndexSivg(param_1,param_2);
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar7);
      _swift_release(local_70);
    }
  }
  return local_78;
}


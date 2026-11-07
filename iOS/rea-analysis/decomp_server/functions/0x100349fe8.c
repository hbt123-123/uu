// rea decompile_all
// name: FUN_100349fe8
// address: 0x100349fe8
// body: available
// range: 0x100349fe8-0x10034a35f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10034a35c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100349fe8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long unaff_x20;
  long unaff_x21;
  ulong uVar7;
  uint local_6c;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (((*(char *)(unaff_x20 + 0x10) != '\x01') ||
      (FUN_100349c44(param_2,param_3,param_1), unaff_x21 == 0)) &&
     ((*(char *)(unaff_x20 + 0x11) != '\x01' ||
      (FUN_100349a18(param_2,param_3,param_1), unaff_x21 == 0)))) {
    uVar2 = 0;
    __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(10,0xe,0);
    uVar7 = *(ulong *)(unaff_x20 + 0x18);
    uVar3 = uVar7;
    _SecPolicyCreateRevocation();
    if ((uVar2 & 1) == 0) {
      if (uVar3 != 0) {
        uVar2 = param_1;
        _SecTrustSetPolicies(param_1,uVar3);
        if ((int)uVar2 == 0) {
          local_6c = 0;
          uVar2 = param_1;
          _SecTrustEvaluate(param_1,&local_6c);
          uVar1 = local_6c;
          if (((int)uVar2 != 0) || ((local_6c != 4 && (local_6c != 1)))) {
            uVar4 = 0;
            FUN_100277ad0(0);
            puVar6 = &DAT_100a824a8;
            FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,
                          &TargetProtocolConformanceDescriptor_100816c70);
            _swift_allocError(uVar4,puVar6,0,0);
            *puVar6 = param_2;
            puVar6[1] = param_3;
            puVar6[2] = param_1;
            puVar6[3] = uVar2 & 0xffffffff | (ulong)uVar1 << 0x20;
            puVar6[4] = uVar7;
            *(undefined1 *)(puVar6 + 5) = 6;
            _swift_storeEnumTagMultiPayload(puVar6,uVar4,0xb);
            _swift_willThrow();
            _swift_bridgeObjectRetain(param_3);
          }
        }
        else {
          uVar4 = 0;
          FUN_100277ad0(0);
          puVar5 = &DAT_100a824a8;
          FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70)
          ;
          _swift_allocError(uVar4,puVar5,0,0);
          *puVar5 = param_1;
          puVar5[1] = uVar3;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[2] = uVar2 & 0xffffffff;
          *(undefined1 *)(puVar5 + 5) = 1;
          _swift_storeEnumTagMultiPayload(puVar5,uVar4,0xb);
          _swift_willThrow();
        }
        goto LAB_10034a308;
      }
    }
    else if (uVar3 != 0) {
      uVar2 = param_1;
      _SecTrustSetPolicies(param_1,uVar3);
      if ((int)uVar2 == 0) {
        FUN_10034c78c(param_1);
      }
      else {
        uVar4 = 0;
        FUN_100277ad0(0);
        puVar5 = &DAT_100a824a8;
        FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
        _swift_allocError(uVar4,puVar5,0,0);
        *puVar5 = param_1;
        puVar5[1] = uVar3;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[2] = uVar2 & 0xffffffff;
        *(undefined1 *)(puVar5 + 5) = 1;
        _swift_storeEnumTagMultiPayload(puVar5,uVar4,0xb);
        _swift_willThrow();
      }
      goto LAB_10034a308;
    }
    uVar4 = 0;
    FUN_100277ad0(0);
    puVar6 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(uVar4,puVar6,0,0);
    *puVar6 = 2;
    puVar6[2] = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[3] = 0;
    *(undefined1 *)(puVar6 + 5) = 10;
    _swift_storeEnumTagMultiPayload(puVar6,uVar4,0xb);
    _swift_willThrow();
  }
LAB_10034a308:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


// rea decompile_all
// name: FUN_100602bc8
// address: 0x100602bc8
// body: available
// range: 0x100602bc8-0x100602d73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100602bc8(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 local_68;
  long local_60;
  undefined *local_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_1 & 0xffffffffffffff8;
    if ((long)param_1 < 0) {
      uVar6 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (uVar6 != 0) {
    FUN_100604aa4(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100602d6c);
      (*pcVar4)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar8 = (undefined8 *)(param_1 + 0x20);
      do {
        puVar3 = local_58;
        local_68 = 0;
        local_60 = 0;
        __sSS10FoundationE26_forceBridgeFromObjectiveC_6resultySo8NSStringC_SSSgztFZ
                  (*puVar8,&local_68);
        lVar2 = local_60;
        uVar1 = local_68;
        if (local_60 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100602d74);
          (*pcVar4)();
        }
        uVar7 = *(ulong *)(puVar3 + 0x10);
        local_58 = puVar3;
        if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar7) {
          FUN_100604aa4(1 < *(ulong *)(puVar3 + 0x18),uVar7 + 1,1);
        }
        *(ulong *)(local_58 + 0x10) = uVar7 + 1;
        *(undefined8 *)(local_58 + uVar7 * 0x10 + 0x20) = uVar1;
        *(long *)(local_58 + uVar7 * 0x10 + 0x28) = lVar2;
        puVar8 = puVar8 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    else {
      uVar7 = 0;
      do {
        puVar3 = local_58;
        uVar5 = uVar7;
        FUN_1006032c4(uVar7,param_1);
        local_68 = 0;
        local_60 = 0;
        __sSS10FoundationE26_forceBridgeFromObjectiveC_6resultySo8NSStringC_SSSgztFZ();
        lVar2 = local_60;
        uVar1 = local_68;
        if (local_60 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100602d70);
          (*pcVar4)();
        }
        _swift_unknownObjectRelease(uVar5);
        uVar5 = *(ulong *)(puVar3 + 0x10);
        local_58 = puVar3;
        if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar5) {
          FUN_100604aa4(1 < *(ulong *)(puVar3 + 0x18),uVar5 + 1,1);
        }
        uVar7 = uVar7 + 1;
        *(ulong *)(local_58 + 0x10) = uVar5 + 1;
        *(undefined8 *)(local_58 + uVar5 * 0x10 + 0x20) = uVar1;
        *(long *)(local_58 + uVar5 * 0x10 + 0x28) = lVar2;
      } while (uVar6 != uVar7);
    }
  }
  return local_58;
}


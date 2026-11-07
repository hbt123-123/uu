// rea decompile_all
// name: FUN_100633e48
// address: 0x100633e48
// body: available
// range: 0x100633e48-0x100634007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100633e48(undefined8 param_1,long param_2,undefined *param_3,long param_4,long param_5,
                  ulong param_6,code *UNRECOVERED_JUMPTABLE)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = (param_6 >> 1) - param_5;
  if (SBORROW8(param_6 >> 1,param_5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100633fec);
    (*pcVar2)();
  }
  if ((param_6 & 1) == 0) {
    if (param_2 <= lVar7) goto LAB_100633fc0;
  }
  else {
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar4 = param_3;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (puVar4 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_3);
      puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar8 = *(long *)(puVar4 + 0x10);
    puVar1 = (undefined *)(param_4 + param_5 + lVar7);
    if (puVar1 == puVar4 + lVar8 + 0x20) {
      uVar5 = *(ulong *)(puVar4 + 0x18);
      _swift_release();
      lVar8 = (uVar5 >> 1) - lVar8;
      lVar6 = lVar7 + lVar8;
      if (SCARRY8(lVar7,lVar8)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100634000);
        (*pcVar2)();
      }
    }
    else {
      _swift_release();
      lVar6 = lVar7;
    }
    puVar4 = param_3;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (param_2 <= lVar6) {
      if (puVar4 == (undefined *)0x0) {
        _swift_unknownObjectRelease(param_3);
        puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      lVar8 = *(long *)(puVar4 + 0x10);
      if (puVar1 == puVar4 + lVar8 + 0x20) {
        uVar5 = *(ulong *)(puVar4 + 0x18);
        _swift_release();
        lVar8 = (uVar5 >> 1) - lVar8;
        bVar3 = SCARRY8(lVar7,lVar8);
        lVar7 = lVar7 + lVar8;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100634008);
          (*pcVar2)();
        }
      }
      else {
        _swift_release();
      }
      goto LAB_100633fc0;
    }
    if (puVar4 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_3);
      puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar8 = *(long *)(puVar4 + 0x10);
    if (puVar1 == puVar4 + lVar8 + 0x20) {
      uVar5 = *(ulong *)(puVar4 + 0x18);
      _swift_release();
      lVar8 = (uVar5 >> 1) - lVar8;
      bVar3 = SCARRY8(lVar7,lVar8);
      lVar7 = lVar7 + lVar8;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100634004);
        (*pcVar2)();
      }
    }
    else {
      _swift_release();
    }
  }
  if (lVar7 + 0x4000000000000000 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100633ffc);
    (*pcVar2)();
  }
  lVar7 = lVar7 << 1;
LAB_100633fc0:
  if (lVar7 <= param_2) {
    lVar7 = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x000100633fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,lVar7);
  return;
}


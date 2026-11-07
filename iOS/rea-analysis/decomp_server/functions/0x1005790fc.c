// rea decompile_all
// name: FUN_1005790fc
// address: 0x1005790fc
// body: available
// range: 0x1005790fc-0x10057922f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10057922c to 0x1007de5c0 _free (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005790fc(undefined8 *param_1,ulong param_2,code *param_3,undefined8 param_4,code *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  pvVar5 = (void *)*param_1;
  uVar7 = *(undefined8 *)((long)pvVar5 + 0x48);
  uVar1 = *(undefined8 *)((long)pvVar5 + 0x50);
  lVar4 = *(long *)((long)pvVar5 + 0x58);
  if ((param_2 & 1) == 0) {
    uVar2 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar8 = *(long *)((long)pvVar5 + 0x58);
      (*param_3)(0);
      _swift_allocObject();
      (*param_5)();
      _swift_release(lVar6);
      *(long *)(lVar8 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x10,(long)pvVar5 + 0x30,1,0);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
    *(undefined8 *)(lVar4 + 0x18) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    uVar2 = *(ulong *)(lVar4 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *(long *)(lVar4 + 0x10);
    lVar4 = lVar6;
    if ((uVar2 & 1) == 0) {
      lVar8 = *(long *)((long)pvVar5 + 0x58);
      (*param_3)(0);
      _swift_allocObject();
      (*param_5)();
      _swift_release(lVar6);
      *(long *)(lVar8 + 0x10) = lVar4;
    }
    _swift_beginAccess(lVar4 + 0x10,(long)pvVar5 + 0x18,1,0);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
    *(undefined8 *)(lVar4 + 0x18) = uVar1;
    _swift_bridgeObjectRelease(uVar3);
    uVar3 = *(undefined8 *)((long)pvVar5 + 0x50);
  }
  _swift_bridgeObjectRelease(uVar3);
  _free(pvVar5);
  return;
}


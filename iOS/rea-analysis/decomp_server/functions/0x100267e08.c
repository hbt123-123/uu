// rea decompile_all
// name: FUN_100267e08
// address: 0x100267e08
// body: available
// range: 0x100267e08-0x100267fcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100267fc8 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100267e08(long param_1,ulong param_2,uint param_3,long *param_4,long param_5,code *param_6)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long local_78;
  ulong uStack_70;
  undefined1 local_68;
  byte local_67;
  
  if ((char)param_4[10] != '\x01') {
    (*param_6)(param_1,param_2,param_3 & 0x1ff);
    return;
  }
  lVar2 = param_1;
  uVar7 = param_2;
  (**(code **)(*param_4 + 0xa8))();
  lVar6 = lVar2;
  if ((*(long *)(lVar2 + 0x10) != 0) && (lVar3 = param_5, FUN_10026ae5c(), (uVar7 & 1) != 0)) {
    lVar6 = *(long *)(*(long *)(lVar2 + 0x38) + lVar3 * 8);
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRelease(lVar2);
    uVar7 = *(ulong *)(lVar6 + 0x10);
    if (uVar7 != 0) {
      uVar8 = 0;
      puVar9 = (undefined8 *)(lVar6 + 0x28);
      do {
        if (*(ulong *)(lVar6 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100267fd0);
          (*pcVar1)();
        }
        uVar8 = uVar8 + 1;
        pcVar1 = (code *)puVar9[-1];
        uVar4 = *puVar9;
        local_68 = (undefined1)param_3;
        local_78 = param_1;
        uStack_70 = param_2;
        local_67 = (byte)(param_3 >> 8) & 1;
        _swift_retain(uVar4);
        (*pcVar1)(&local_78);
        _swift_release(uVar4);
        puVar9 = puVar9 + 2;
      } while (uVar7 != uVar8);
    }
  }
  _swift_bridgeObjectRelease(lVar6);
  lVar6 = param_4[0xb];
  IVar5 = *(ID *)(lVar6 + 0x10);
  _swift_retain(lVar6);
  _objc_msgSend(IVar5,"lock");
  IVar5 = *(ID *)(lVar6 + 0x10);
  lVar2 = *(long *)(lVar6 + 0x18);
  _swift_bridgeObjectRetain(lVar2);
  _objc_msgSend(IVar5,"unlock");
  local_78 = lVar2;
  FUN_100265918(param_5);
  _swift_bridgeObjectRelease();
  lVar2 = local_78;
  _objc_msgSend(*(ID *)(lVar6 + 0x10),"lock");
  uVar4 = *(undefined8 *)(lVar6 + 0x18);
  *(long *)(lVar6 + 0x18) = lVar2;
  _swift_bridgeObjectRelease(uVar4);
  _objc_msgSend(*(ID *)(lVar6 + 0x10),"unlock");
  _swift_release(lVar6);
  return;
}


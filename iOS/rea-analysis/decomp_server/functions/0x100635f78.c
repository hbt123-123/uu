// rea decompile_all
// name: FUN_100635f78
// address: 0x100635f78
// body: available
// range: 0x100635f78-0x10063610b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100636008 to 0x100629fb8 thunk_FUN_100629d98 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100635f78(undefined *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = param_1;
  (*(code *)*unaff_x20)();
  if (puVar2 != (undefined *)0x0) {
    lVar4 = unaff_x20[8];
    if (lVar4 == 0) {
      lVar5 = unaff_x20[4];
      uVar7 = unaff_x20[5];
      uVar3 = unaff_x20[6];
      uVar6 = unaff_x20[7];
      _swift_unknownObjectRetain(lVar5);
    }
    else {
      uVar3 = unaff_x20[10];
      uVar6 = unaff_x20[0xb];
      uVar7 = unaff_x20[9];
      lVar5 = lVar4;
    }
    _swift_unknownObjectRetain(lVar4);
    FUN_100636298(uVar7,uVar3,uVar6,puVar2);
    _swift_bridgeObjectRelease(puVar2);
    _swift_unknownObjectRelease(lVar5);
    _swift_unknownObjectRetain(param_1);
    _swift_unknownObjectRelease(lVar4);
    unaff_x20[8] = param_1;
    unaff_x20[9] = param_2;
    unaff_x20[10] = param_3;
    unaff_x20[0xb] = param_4;
    return;
  }
  if ((param_4 & 1) != 0) {
    uVar3 = 0;
    __ss28__ContiguousArrayStorageBaseCMa(0);
    puVar2 = param_1;
    _swift_unknownObjectRetain_n(param_1,2);
    _swift_dynamicCastClass();
    if (puVar2 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_1);
      puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
    }
    lVar4 = *(long *)(puVar2 + 0x10);
    _swift_release();
    if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100636104);
      (*pcVar1)();
    }
    if (lVar4 == (param_4 >> 1) - param_3) {
      puVar2 = param_1;
      _swift_dynamicCastClass(param_1,uVar3);
      if (puVar2 != (undefined *)0x0) {
        return;
      }
      _swift_unknownObjectRelease(param_1);
      return;
    }
    _swift_unknownObjectRelease();
  }
  thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
  return;
}


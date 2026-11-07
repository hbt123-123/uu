// rea decompile_all
// name: FUN_10063f738
// address: 0x10063f738
// body: available
// range: 0x10063f738-0x10063f8db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10063f7bc to 0x100629fb8 thunk_FUN_100629d98 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10063f738(undefined *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar2 = param_1;
  (*(code *)*unaff_x20)();
  if (puVar2 != (undefined *)0x0) {
    lVar5 = unaff_x20[8];
    if (lVar5 == 0) {
      lVar4 = unaff_x20[4];
      puVar7 = (undefined *)unaff_x20[5];
      uVar3 = unaff_x20[6];
      uVar6 = unaff_x20[7];
      _swift_unknownObjectRetain(lVar4);
    }
    else {
      uVar3 = unaff_x20[10];
      uVar6 = unaff_x20[0xb];
      puVar7 = (undefined *)unaff_x20[9];
      lVar4 = lVar5;
    }
    _swift_unknownObjectRetain(lVar5);
    FUN_100636298(puVar7,uVar3,uVar6,puVar2);
    _swift_bridgeObjectRelease(puVar2);
    _swift_unknownObjectRelease(lVar4);
    puVar2 = puVar7;
    FUN_1006363a8(puVar7,param_2,param_3,param_4);
    lVar4 = *(long *)(puVar2 + 0x10);
    _swift_unknownObjectRelease(lVar5);
    unaff_x20[8] = puVar2;
    unaff_x20[9] = puVar2 + 0x20;
    unaff_x20[10] = 0;
    unaff_x20[0xb] = lVar4 << 1 | 1;
    return puVar7;
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
    lVar5 = *(long *)(puVar2 + 0x10);
    _swift_release();
    if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10063f8d4);
      (*pcVar1)();
    }
    if (lVar5 == (param_4 >> 1) - param_3) {
      puVar2 = param_1;
      _swift_dynamicCastClass(param_1,uVar3);
      if (puVar2 != (undefined *)0x0) {
        return puVar2;
      }
      _swift_unknownObjectRelease(param_1);
      return PTR___swiftEmptyArrayStorage_100995ea0;
    }
    _swift_unknownObjectRelease();
  }
  thunk_FUN_100629d98(param_1,param_2,param_3,param_4);
  return param_1;
}

